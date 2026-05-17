/*
 * XREFs of LdrRelocateImageWithBias @ 0x1800EFA48
 * Callers:
 *     LdrpProtectAndRelocateImage @ 0x1800DC6A4 (LdrpProtectAndRelocateImage.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1800219BC (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x180024950 (RtlImageNtHeaderEx.c)
 *     LdrProcessRelocationBlockLongLong @ 0x1800EF98C (LdrProcessRelocationBlockLongLong.c)
 */

__int64 __fastcall LdrRelocateImageWithBias(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rdi
  __int64 v6; // rbp
  int v7; // eax
  unsigned __int16 *v8; // rcx
  int v9; // esi
  int v10; // r8d
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF
  int v13; // [rsp+78h] [rbp+20h] BYREF

  v12 = a3;
  v3 = 0;
  v13 = 0;
  if ( (int)RtlImageNtHeaderEx(1, a1, 0LL, &v12) < 0 )
    return (unsigned int)-1073741701;
  v5 = v12;
  if ( *(_WORD *)(v12 + 24) == 267 )
  {
    v6 = *(unsigned int *)(v12 + 52);
  }
  else
  {
    if ( *(_WORD *)(v12 + 24) != 523 )
      return (unsigned int)-1073741701;
    v6 = *(_QWORD *)(v12 + 48);
  }
  v7 = RtlpImageDirectoryEntryToDataEx(a1, 1, 5u, &v13, &v12);
  v8 = (unsigned __int16 *)v12;
  if ( v7 < 0 )
    v8 = 0LL;
  if ( !v8 )
    return (*(_BYTE *)(v5 + 22) & 1) != 0 ? 0xC0000018 : 0;
  v9 = v13;
  if ( !v13 )
    return (*(_BYTE *)(v5 + 22) & 1) != 0 ? 0xC0000018 : 0;
  while ( 1 )
  {
    v10 = *((_DWORD *)v8 + 1);
    v9 -= v10;
    v8 = LdrProcessRelocationBlockLongLong(
           *(_WORD *)(v5 + 4),
           a1 + *(unsigned int *)v8,
           (unsigned int)(v10 - 8) >> 1,
           v8 + 4,
           a1 - v6);
    if ( !v8 )
      break;
    if ( !v9 )
      return v3;
  }
  return (unsigned int)-1073741701;
}
