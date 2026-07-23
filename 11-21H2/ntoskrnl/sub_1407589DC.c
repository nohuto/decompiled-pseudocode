/*
 * XREFs of sub_1407589DC @ 0x1407589DC
 * Callers:
 *     sub_140758C68 @ 0x140758C68 (sub_140758C68.c)
 *     sub_1409EFAE0 @ 0x1409EFAE0 (sub_1409EFAE0.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140758BF0 @ 0x140758BF0 (sub_140758BF0.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407589DC(char *BaseOfImage, size_t a2, __int64 *a3, _DWORD *a4)
{
  PIMAGE_NT_HEADERS v6; // rax
  int v7; // esi
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r14
  unsigned int i; // r15d
  size_t v14; // rcx
  size_t v15; // rdi
  const void *v16; // rax
  __int64 Pool2; // rax
  void **v18; // rcx
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
  v9 = RtlImageDirectoryEntryToData(BaseOfImage, 1u, 6u, Size);
  v10 = v9;
  v22 = v9;
  if ( !v9 || Size[0] < 0x1C )
    return 3221225485LL;
  v11 = Size[0];
  if ( !(unsigned __int8)sub_140758BF0(v7, (_DWORD)BaseOfImage, a2, (_DWORD)v9, Size[0]) )
    return 3221225595LL;
  v12 = v11 / 0x1C;
  for ( i = 0; ; ++i )
  {
    v20 = i;
    if ( i >= (unsigned int)v12 )
      return 3221226021LL;
    v23 = *(_OWORD *)v10;
    v24 = v10[2];
    v25 = *((_DWORD *)v10 + 6);
    v14 = HIDWORD(v24);
    if ( HIDWORD(v24) > a2 )
      return 3221225485LL;
    v15 = (unsigned int)v24;
    if ( (unsigned int)v24 > a2 || v14 > a2 - (unsigned int)v24 )
      return 3221225485LL;
    if ( HIDWORD(v23) == 2 )
    {
      *(_QWORD *)Size = &BaseOfImage[v14];
      if ( !(unsigned __int8)sub_140758BF0(
                               (_DWORD)v21,
                               (_DWORD)BaseOfImage,
                               a2,
                               HIDWORD(v24) + (int)BaseOfImage,
                               (unsigned int)v24) )
        return 3221225595LL;
      v16 = *(const void **)Size;
      if ( **(_DWORD **)Size == 1396986706 )
        break;
    }
    v10 = (_QWORD *)((char *)v10 + 28);
    v22 = v10;
  }
  if ( (unsigned int)v15 < 0x1C )
    return 3221225595LL;
  if ( *a4 >= (unsigned int)v15 )
  {
    v18 = (void **)a3;
  }
  else
  {
    Pool2 = ExAllocatePool2(256LL, v15, 1651995717LL);
    v18 = (void **)a3;
    *a3 = Pool2;
    if ( !Pool2 )
      return 3221225495LL;
    v16 = *(const void **)Size;
  }
  *a4 = v15;
  memmove(*v18, v16, v15);
  return 0LL;
}
