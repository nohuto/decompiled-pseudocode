/*
 * XREFs of sub_140921F64 @ 0x140921F64
 * Callers:
 *     sub_1407F6698 @ 0x1407F6698 (sub_1407F6698.c)
 * Callees:
 *     sub_140200068 @ 0x140200068 (sub_140200068.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14069EDC0 @ 0x14069EDC0 (sub_14069EDC0.c)
 *     sub_14069F150 @ 0x14069F150 (sub_14069F150.c)
 *     sub_14069F2B4 @ 0x14069F2B4 (sub_14069F2B4.c)
 */

__int64 __fastcall sub_140921F64(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // ebx
  __int16 v8[40]; // [rsp+20h] [rbp-68h] BYREF

  memset(v8, 0, 0x4AuLL);
  sub_14069F2B4((char *)v8);
  v6 = sub_14069EDC0((__int64)v8, a2, a3);
  if ( v6 >= 0 )
  {
    v6 = sub_140200068(a1, v8);
    if ( v6 >= 0 )
      v6 = 0;
  }
  sub_14069F150((__int64)v8);
  return (unsigned int)v6;
}
