/*
 * XREFs of sub_1406EF58C @ 0x1406EF58C
 * Callers:
 *     sub_1406EDB48 @ 0x1406EDB48 (sub_1406EDB48.c)
 *     sub_1406EE2AC @ 0x1406EE2AC (sub_1406EE2AC.c)
 *     sub_1406F0614 @ 0x1406F0614 (sub_1406F0614.c)
 *     sub_140798C10 @ 0x140798C10 (sub_140798C10.c)
 *     sub_14079A870 @ 0x14079A870 (sub_14079A870.c)
 *     sub_14079AADC @ 0x14079AADC (sub_14079AADC.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406EF64C @ 0x1406EF64C (sub_1406EF64C.c)
 */

__int64 __fastcall sub_1406EF58C(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned __int16 v3; // bx
  __int64 v7; // rcx
  __int128 v8; // xmm1
  _QWORD v10[12]; // [rsp+20h] [rbp-88h] BYREF

  v3 = *(_WORD *)a1;
  if ( !*(_WORD *)a1 )
    v3 = -1;
  memset(v10, 0, sizeof(v10));
  v7 = *(_QWORD *)(a1 + 1096);
  v8 = *(_OWORD *)(a1 + 276);
  *(_OWORD *)&v10[5] = xmmword_140015DD0;
  *(_OWORD *)&v10[7] = v8;
  v10[0] = 0x6000000007LL;
  v10[10] = v3;
  v10[9] = __PAIR64__(a3, a2);
  return sub_1406EF64C(v7, v10, 0LL);
}
