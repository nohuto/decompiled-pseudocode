/*
 * XREFs of WmipAddMofResource @ 0x14080EF3C
 * Callers:
 *     WmipAddDataSource @ 0x14086A320 (WmipAddDataSource.c)
 *     WmipInitializeDataStructs @ 0x140B38FE4 (WmipInitializeDataStructs.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x14022B114 (RtlStringCbCopyW.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402B0200 (KeReleaseMutex.c)
 *     WmipUnreferenceEntry @ 0x1406C7010 (WmipUnreferenceEntry.c)
 *     WmipFindMRByNames @ 0x14080F0FC (WmipFindMRByNames.c)
 *     WmipInsertMofResource @ 0x14080F1C4 (WmipInsertMofResource.c)
 *     WmipAllocEntry @ 0x14086B140 (WmipAllocEntry.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall WmipAddMofResource(__int64 a1, const wchar_t *a2, char a3, const wchar_t *a4, char *a5)
{
  unsigned int inserted; // ebx
  __int64 MRByNames; // rdi
  __int64 v11; // rax
  char v12; // bp
  __int64 v13; // rsi
  __int64 v14; // rax
  size_t v15; // r13
  size_t v16; // rsi
  __int64 Pool2; // rax
  wchar_t *v18; // rcx
  __int64 v19; // rax
  __int64 *v20; // rcx

  inserted = 0;
  MRByNames = WmipFindMRByNames(a2, a4);
  if ( MRByNames )
  {
    v12 = 0;
  }
  else
  {
    v11 = WmipAllocEntry(&WmipMRChunkInfo);
    MRByNames = v11;
    if ( !v11 )
      return (unsigned int)-1073741670;
    v12 = 1;
    if ( a3 )
      *(_DWORD *)(v11 + 16) |= 1u;
    v13 = -1LL;
    v14 = -1LL;
    do
      ++v14;
    while ( a2[v14] );
    v15 = 2 * v14 + 2;
    *(_QWORD *)(MRByNames + 40) = ExAllocatePool2(256LL, v15, 1885957463LL);
    do
      ++v13;
    while ( a4[v13] );
    v16 = 2 * v13 + 2;
    Pool2 = ExAllocatePool2(256LL, v16, 1885957463LL);
    v18 = *(wchar_t **)(MRByNames + 40);
    *(_QWORD *)(MRByNames + 48) = Pool2;
    if ( !v18 || !Pool2 )
    {
      inserted = -1073741670;
      goto LABEL_15;
    }
    RtlStringCbCopyW(v18, v15, a2);
    RtlStringCbCopyW(*(NTSTRSAFE_PWSTR *)(MRByNames + 48), v16, a4);
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    v19 = WmipMRHeadPtr;
    v20 = *(__int64 **)(WmipMRHeadPtr + 8);
    if ( *v20 != WmipMRHeadPtr )
      __fastfail(3u);
    *(_QWORD *)(MRByNames + 8) = v20;
    *(_QWORD *)MRByNames = v19;
    *v20 = MRByNames;
    *(_QWORD *)(v19 + 8) = MRByNames;
    KeReleaseMutex(&WmipSMMutex, 0);
  }
  *a5 = v12;
  if ( a1 )
  {
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    inserted = WmipInsertMofResource(a1, MRByNames);
    KeReleaseMutex(&WmipSMMutex, 0);
LABEL_15:
    WmipUnreferenceEntry((__int64)&WmipMRChunkInfo, (volatile signed __int64 *)MRByNames);
  }
  return inserted;
}
