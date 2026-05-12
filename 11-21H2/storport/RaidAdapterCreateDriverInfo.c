/*
 * XREFs of RaidAdapterCreateDriverInfo @ 0x1C00852F0
 * Callers:
 *     RaidAdapterCreateDumpInfo @ 0x1C00854DC (RaidAdapterCreateDumpInfo.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     RtlStringCbCopyW @ 0x1C0016718 (RtlStringCbCopyW.c)
 *     RaidAdapterFreeDriverInfo @ 0x1C00172B0 (RaidAdapterFreeDriverInfo.c)
 *     RaidDriverGetName @ 0x1C0019BC4 (RaidDriverGetName.c)
 *     RtlStringCbPrintfW @ 0x1C001E1EC (RtlStringCbPrintfW.c)
 */

__int64 __fastcall RaidAdapterCreateDriverInfo(__int64 a1, _QWORD *a2, PVOID **a3, _BYTE *a4)
{
  _QWORD *v4; // r15
  int FullDriverPath; // ebx
  __int64 v7; // rcx
  unsigned int v10; // edi
  wchar_t *Pool; // rax
  wchar_t *v12; // rbp
  _QWORD *v13; // r14
  _QWORD *v14; // rdi
  PVOID *v15; // rax
  PVOID *v16; // rdi
  _QWORD *v17; // rax
  wchar_t *v18; // rax
  void *v19; // r11
  wchar_t *v20; // rax
  void *v21; // r11
  __int64 v22; // rax
  PVOID *v24; // r15
  int v25; // eax
  __int128 v26; // [rsp+20h] [rbp-48h] BYREF
  PVOID *v27; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v28; // [rsp+78h] [rbp+10h]

  v28 = a2;
  v4 = a2;
  FullDriverPath = 0;
  *a3 = 0LL;
  *a4 = 0;
  v7 = *(_QWORD *)(a1 + 16);
  v26 = 0LL;
  RaidDriverGetName(v7, (__int64)&v26);
  v10 = (unsigned __int16)v26 + 10;
  Pool = (wchar_t *)RaidAllocatePool(64LL, v10, 1145266514LL, *(_QWORD *)(a1 + 8));
  v12 = Pool;
  if ( !Pool )
    return (unsigned int)-1073741670;
  RtlStringCbPrintfW(Pool, v10, L"%ws.sys", *((_QWORD *)&v26 + 1));
  v13 = v4 + 7;
  v14 = (_QWORD *)v4[7];
  if ( v14 != v4 + 7 )
  {
    while ( 1 )
    {
      v24 = (PVOID *)(v14 - 1);
      if ( !_wcsicmp((const wchar_t *)v14[3], v12) )
        break;
      v14 = (_QWORD *)*v14;
      if ( v14 == v13 )
      {
        v4 = v28;
        goto LABEL_3;
      }
    }
    *a4 = 1;
    v16 = 0LL;
    v27 = 0LL;
    *a3 = v24;
    goto LABEL_19;
  }
LABEL_3:
  v15 = (PVOID *)RaidAllocatePool(64LL, 160LL, 1145266514LL, *(_QWORD *)(a1 + 8));
  v27 = v15;
  v16 = v15;
  if ( !v15 )
  {
    FullDriverPath = -1073741670;
LABEL_19:
    ExFreePoolWithTag(v12, 0x44436152u);
    goto LABEL_21;
  }
  v17 = v15 + 1;
  v17[1] = v17;
  *v17 = v17;
  *(_DWORD *)v16 = 160;
  v16[3] = RaUnitStorageDumpControl;
  v16[4] = v12;
  v18 = (wchar_t *)RaidAllocatePool(64LL, 34LL, 1145266514LL, *(_QWORD *)(a1 + 8));
  if ( v18 )
  {
    RtlStringCbCopyW(v18, 0x22uLL, L"dumpstorport.sys");
    v16[6] = v19;
    v20 = (wchar_t *)RaidAllocatePool(64LL, 26LL, 1145266514LL, *(_QWORD *)(a1 + 8));
    if ( v20 )
    {
      RtlStringCbCopyW(v20, 0x1AuLL, L"storport.sys");
      v16[7] = v21;
      RtlInitUnicodeString((PUNICODE_STRING)v16 + 9, L"\\SystemRoot\\System32\\Drivers\\dumpstorport.sys");
      FullDriverPath = IoQueryFullDriverPath(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL), v16 + 16);
      if ( FullDriverPath < 0 )
        FullDriverPath = 0;
      v22 = RaidAllocatePool(64LL, 208LL, 1145266514LL, *(_QWORD *)(a1 + 8));
      if ( v22 )
      {
        *((_DWORD *)v16 + 17) = 208;
        v16[9] = (PVOID)v22;
        v16[14] = v4;
        if ( (*(_DWORD *)(a1 + 564) & 1) != 0 || (v25 = *(_DWORD *)(a1 + 4148), v25 == 10) || v25 == 1 )
          *((_DWORD *)v16 + 16) |= 1u;
        *a3 = v16;
        return (unsigned int)FullDriverPath;
      }
    }
  }
  FullDriverPath = -1073741670;
LABEL_21:
  if ( v16 )
    RaidAdapterFreeDriverInfo(&v27);
  return (unsigned int)FullDriverPath;
}
