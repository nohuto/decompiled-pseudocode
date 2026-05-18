/*
 * XREFs of sub_18004FD30 @ 0x18004FD30
 * Callers:
 *     sub_1800878E8 @ 0x1800878E8 (sub_1800878E8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18004D6B4 @ 0x18004D6B4 (sub_18004D6B4.c)
 *     sub_18004E718 @ 0x18004E718 (sub_18004E718.c)
 *     sub_18004FCE4 @ 0x18004FCE4 (sub_18004FCE4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall sub_18004FD30(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned int v6; // ebx
  _QWORD *v7; // rax
  _BYTE v9[16]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v10[4]; // [rsp+40h] [rbp-48h] BYREF

  v6 = 0;
  sub_18004E718(a2);
  do
  {
    if ( _bittest64(&a3, v6) )
    {
      v7 = sub_18004FCE4(a1, v10, v6);
      sub_18004D6B4(a2, (__int64)v9, (__int64)v7);
      sub_180011B24((__int64)v10);
    }
    ++v6;
  }
  while ( v6 < 0x40 );
  return a2;
}
