/*
 * XREFs of sub_14066A774 @ 0x14066A774
 * Callers:
 *     sub_14066B464 @ 0x14066B464 (sub_14066B464.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14066A374 @ 0x14066A374 (sub_14066A374.c)
 */

__int64 __fastcall sub_14066A774(__int64 a1, void *a2, unsigned int a3, _DWORD *a4)
{
  int v8; // ebx
  size_t v9; // rax
  size_t Size[2]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE Src[80]; // [rsp+30h] [rbp-78h] BYREF

  LODWORD(Size[0]) = 0;
  memset(Src, 0, 0x44uLL);
  sub_14066A374(a1, Src, 0x44u, (ULONG *)Size);
  v8 = 0;
  v9 = LODWORD(Size[0]);
  if ( LODWORD(Size[0]) > a3 )
    v8 = -1073741789;
  if ( a4 )
    *a4 = Size[0];
  if ( v8 >= 0 )
    memmove(a2, Src, v9);
  return (unsigned int)v8;
}
