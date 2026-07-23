/*
 * XREFs of sub_1409C0580 @ 0x1409C0580
 * Callers:
 *     sub_140971068 @ 0x140971068 (sub_140971068.c)
 *     sub_140972818 @ 0x140972818 (sub_140972818.c)
 *     sub_140975FF0 @ 0x140975FF0 (sub_140975FF0.c)
 *     sub_14097638C @ 0x14097638C (sub_14097638C.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeaderEx @ 0x1402FD9C0 (RtlImageNtHeaderEx.c)
 *     sub_1409C0550 @ 0x1409C0550 (sub_1409C0550.c)
 */

__int64 __fastcall sub_1409C0580(char *BaseOfImage)
{
  char *v2; // rbp
  char *v3; // rdi
  PIMAGE_NT_HEADERS v4; // r14
  WORD Machine; // bx
  char *v6; // rax
  char *v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // eax
  char *v11; // rcx
  __int64 SizeOfImage; // r10
  unsigned int v13; // r8d
  unsigned int *v14; // r9
  unsigned int v15; // eax
  unsigned int v16; // edx
  unsigned int v17; // r8d
  unsigned int v18; // r10d
  __int64 v19; // r9
  ULONG Size; // [rsp+48h] [rbp+10h] BYREF
  PIMAGE_NT_HEADERS v21; // [rsp+50h] [rbp+18h] BYREF

  Size = 0;
  v21 = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  RtlImageNtHeaderEx(1u, BaseOfImage, 0LL, &v21);
  v4 = v21;
  Machine = v21->FileHeader.Machine;
  v6 = (char *)RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0xAu, &Size);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  if ( Machine == 0x8664 || Machine == 0xAA64 )
  {
    v8 = Size;
    if ( Size <= 4 )
      return 0LL;
    v3 = v6;
    if ( Size != *(_DWORD *)v6 || Size < 0xF4 )
      return 0LL;
  }
  else
  {
    if ( Machine != 332 )
      return 0LL;
    v8 = Size;
    if ( Size <= 4 )
      return 0LL;
    v9 = *(_DWORD *)v6;
    v2 = v7;
    if ( Size == 64 )
      v8 = v9;
    if ( (_DWORD)v8 != v9 || (unsigned int)v8 < 0x98 )
      return 0LL;
  }
  v11 = &v7[v8];
  if ( v11 < v7 )
    return 0LL;
  SizeOfImage = v4->OptionalHeader.SizeOfImage;
  if ( v7 >= &BaseOfImage[SizeOfImage] || v11 > &BaseOfImage[SizeOfImage] )
    return 0LL;
  v13 = Machine == 0x8664 || Machine == 0xAA64 ? *((_DWORD *)v3 + 60) : *((_DWORD *)v2 + 37);
  if ( v13 >= 0xFFFFFFF8 || v13 == 0 || v13 + 8 > (unsigned int)SizeOfImage )
    return 0LL;
  v14 = (unsigned int *)&BaseOfImage[v13];
  switch ( *v14 )
  {
    case 1u:
      v15 = 20;
      break;
    case 2u:
      v15 = 24;
      break;
    case 3u:
      v15 = 28;
      break;
    default:
      return 0LL;
  }
  v16 = v14[1];
  if ( v16 < v15 )
    return 0LL;
  if ( !v14[2] )
    return 0LL;
  if ( v16 + v13 <= v16 )
    return 0LL;
  if ( v16 + v13 > (unsigned int)SizeOfImage )
    return 0LL;
  v17 = v14[4];
  if ( v17 > 0x3FFFFFF9 )
    return 0LL;
  v18 = 4 * v17 + v14[3];
  if ( v18 <= 4 * v17 || v18 > v16 || v17 != 1 || !sub_1409C0550(v14) )
    return 0LL;
  return v19;
}
