/*
 * XREFs of EtwpFindDebugId @ 0x1407589DC
 * Callers:
 *     EtwpLocateDbgIdForRegEntry @ 0x140758C68 (EtwpLocateDbgIdForRegEntry.c)
 *     EtwpCovSampContextGetModule @ 0x1409EFAE0 (EtwpCovSampContextGetModule.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     EtwpIsValidImageAddress @ 0x140758BF0 (EtwpIsValidImageAddress.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpFindDebugId(__int64 a1, size_t a2, __int64 *a3, _DWORD *a4)
{
  int v5; // edi
  __int64 v6; // rax
  int v7; // edx
  int v8; // esi
  __int64 v10; // rax
  __int64 v11; // rbx
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // r14
  unsigned int i; // r15d
  size_t v15; // rcx
  size_t v16; // rdi
  void *v17; // rax
  __int64 Pool2; // rax
  void **v19; // rcx
  void *Src; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-70h]
  __int64 v22; // [rsp+40h] [rbp-68h]
  __int64 v23; // [rsp+48h] [rbp-60h]
  __int128 v24; // [rsp+50h] [rbp-58h]
  size_t Size; // [rsp+60h] [rbp-48h]
  int v26; // [rsp+68h] [rbp-40h]

  v5 = a1;
  v6 = RtlImageNtHeader(a1);
  v8 = v6;
  v22 = v6;
  if ( !v6 )
    return 3221225595LL;
  LODWORD(Src) = 0;
  LOBYTE(v7) = 1;
  v10 = RtlImageDirectoryEntryToData(v5, v7, 6, (int)&Src);
  v11 = v10;
  v23 = v10;
  if ( !v10 || (unsigned int)Src < 0x1C )
    return 3221225485LL;
  v12 = (unsigned int)Src;
  if ( !(unsigned __int8)EtwpIsValidImageAddress(v8, v5, a2, v10, (unsigned int)Src) )
    return 3221225595LL;
  v13 = v12 / 0x1C;
  for ( i = 0; ; ++i )
  {
    v21 = i;
    if ( i >= (unsigned int)v13 )
      return 3221226021LL;
    v24 = *(_OWORD *)v11;
    Size = *(_QWORD *)(v11 + 16);
    v26 = *(_DWORD *)(v11 + 24);
    v15 = HIDWORD(Size);
    if ( HIDWORD(Size) > a2 )
      return 3221225485LL;
    v16 = (unsigned int)Size;
    if ( (unsigned int)Size > a2 || v15 > a2 - (unsigned int)Size )
      return 3221225485LL;
    if ( HIDWORD(v24) == 2 )
    {
      Src = (void *)(v15 + a1);
      if ( !(unsigned __int8)EtwpIsValidImageAddress(v22, a1, a2, HIDWORD(Size) + (int)a1, (unsigned int)Size) )
        return 3221225595LL;
      v17 = Src;
      if ( *(_DWORD *)Src == 1396986706 )
        break;
    }
    v11 += 28LL;
    v23 = v11;
  }
  if ( (unsigned int)v16 < 0x1C )
    return 3221225595LL;
  if ( *a4 >= (unsigned int)v16 )
  {
    v19 = (void **)a3;
  }
  else
  {
    Pool2 = ExAllocatePool2(256LL, v16, 1651995717LL);
    v19 = (void **)a3;
    *a3 = Pool2;
    if ( !Pool2 )
      return 3221225495LL;
    v17 = Src;
  }
  *a4 = v16;
  memmove(*v19, v17, v16);
  return 0LL;
}
