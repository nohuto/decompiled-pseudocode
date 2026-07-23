/*
 * XREFs of sub_140920F1C @ 0x140920F1C
 * Callers:
 *     sub_140914324 @ 0x140914324 (sub_140914324.c)
 *     sub_1409224D4 @ 0x1409224D4 (sub_1409224D4.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14069EDC0 @ 0x14069EDC0 (sub_14069EDC0.c)
 *     sub_14069F150 @ 0x14069F150 (sub_14069F150.c)
 *     sub_14069F2B4 @ 0x14069F2B4 (sub_14069F2B4.c)
 *     sub_140920FCC @ 0x140920FCC (sub_140920FCC.c)
 */

__int64 __fastcall sub_140920F1C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v8; // ebx
  char v10[80]; // [rsp+20h] [rbp-88h] BYREF

  memset(v10, 0, 0x4AuLL);
  sub_14069F2B4(v10);
  v8 = sub_14069EDC0((__int64)v10, a2, 0LL);
  if ( v8 >= 0 )
  {
    if ( a3 )
      *(_WORD *)(a1 + 2) = *(_WORD *)(a3 + 4);
    v8 = sub_140920FCC(a1, v10, a4);
    if ( v8 >= 0 )
      v8 = 0;
  }
  sub_14069F150((__int64)v10);
  return (unsigned int)v8;
}
