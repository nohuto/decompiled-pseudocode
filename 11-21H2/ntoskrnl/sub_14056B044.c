/*
 * XREFs of sub_14056B044 @ 0x14056B044
 * Callers:
 *     sub_1402E7D60 @ 0x1402E7D60 (sub_1402E7D60.c)
 *     sub_140983680 @ 0x140983680 (sub_140983680.c)
 *     sub_140B05434 @ 0x140B05434 (sub_140B05434.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14056B044(__int64 a1, __int128 *a2, __int64 a3, __int128 *a4, __int64 a5, char a6)
{
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  _OWORD v13[7]; // [rsp+20h] [rbp-A8h] BYREF

  memset(v13, 0, 0x68uLL);
  v10 = *a4;
  *((_QWORD *)&v13[3] + 1) = a5;
  v11 = *a2;
  *((_QWORD *)&v13[0] + 1) = a3;
  LOBYTE(v13[4]) = a6 & 1;
  v13[1] = v10;
  *(_QWORD *)&v13[2] = a1;
  *(_OWORD *)((char *)&v13[2] + 8) = v11;
  return sub_140358A20(2u, 244, 0, (__int64)v13);
}
