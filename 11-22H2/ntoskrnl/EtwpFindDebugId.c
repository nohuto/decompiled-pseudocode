/*
 * XREFs of EtwpFindDebugId @ 0x14077E3DC
 * Callers:
 *     EtwpLocateDbgIdForRegEntry @ 0x14077E28C (EtwpLocateDbgIdForRegEntry.c)
 *     EtwpCovSampContextGetModule @ 0x1409F133C (EtwpCovSampContextGetModule.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140214A40 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeader @ 0x140214B50 (RtlImageNtHeader.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     EtwpIsValidImageAddress @ 0x14077E5E8 (EtwpIsValidImageAddress.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpFindDebugId(char *BaseOfImage, size_t a2, __int64 *a3, _DWORD *a4)
{
  PIMAGE_NT_HEADERS v6; // rax
  int v7; // r14d
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rsi
  unsigned int i; // r15d
  size_t v13; // rcx
  size_t v14; // rdi
  const void *v15; // rax
  void **v16; // rcx
  __int64 Pool2; // rax
  ULONG Size[2]; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-70h]
  PIMAGE_NT_HEADERS v21; // [rsp+40h] [rbp-68h]
  PVOID v22; // [rsp+48h] [rbp-60h]
  __int128 v23; // [rsp+50h] [rbp-58h]
  size_t v24; // [rsp+60h] [rbp-48h]
  int v25; // [rsp+68h] [rbp-40h]

  v6 = RtlImageNtHeader(BaseOfImage);
  v7 = (int)v6;
  v21 = v6;
  if ( !v6 )
    return 3221225595LL;
  Size[0] = 0;
  v8 = RtlImageDirectoryEntryToData(BaseOfImage, 1u, 6u, Size);
  v9 = v8;
  v22 = v8;
  if ( !v8 || Size[0] < 0x1C )
    return 3221225485LL;
  v10 = Size[0];
  if ( !(unsigned __int8)EtwpIsValidImageAddress(v7, (_DWORD)BaseOfImage, a2, (_DWORD)v8, Size[0]) )
    return 3221225595LL;
  v11 = v10 / 0x1C;
  for ( i = 0; ; ++i )
  {
    v20 = i;
    if ( i >= (unsigned int)v11 )
      return 3221226021LL;
    v23 = *(_OWORD *)v9;
    v24 = v9[2];
    v25 = *((_DWORD *)v9 + 6);
    v13 = HIDWORD(v24);
    if ( HIDWORD(v24) > a2 )
      return 3221225485LL;
    v14 = (unsigned int)v24;
    if ( (unsigned int)v24 > a2 || v13 > a2 - (unsigned int)v24 )
      return 3221225485LL;
    if ( HIDWORD(v23) == 2 )
    {
      *(_QWORD *)Size = &BaseOfImage[v13];
      if ( !(unsigned __int8)EtwpIsValidImageAddress(
                               (_DWORD)v21,
                               (_DWORD)BaseOfImage,
                               a2,
                               (int)BaseOfImage + HIDWORD(v24),
                               (unsigned int)v24) )
        return 3221225595LL;
      v15 = *(const void **)Size;
      if ( **(_DWORD **)Size == 1396986706 )
        break;
    }
    v9 = (_QWORD *)((char *)v9 + 28);
    v22 = v9;
  }
  if ( (unsigned int)v14 < 0x1C )
    return 3221225595LL;
  if ( *a4 >= (unsigned int)v14 )
  {
    v16 = (void **)a3;
LABEL_16:
    *a4 = v14;
    memmove(*v16, v15, v14);
    return 0LL;
  }
  Pool2 = ExAllocatePool2(256LL, v14, 1651995717LL);
  v16 = (void **)a3;
  *a3 = Pool2;
  if ( Pool2 )
  {
    v15 = *(const void **)Size;
    goto LABEL_16;
  }
  return 3221225495LL;
}
