/*
 * XREFs of sub_14035C7A4 @ 0x14035C7A4
 * Callers:
 *     sub_14035C864 @ 0x14035C864 (sub_14035C864.c)
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     sub_14035BB4C @ 0x14035BB4C (sub_14035BB4C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14035C7A4(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v7[3]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v8; // [rsp+38h] [rbp-C8h]
  _QWORD v9[34]; // [rsp+40h] [rbp-C0h] BYREF

  v8 = 0LL;
  LODWORD(v9[0]) = 2097153;
  memset((char *)v9 + 4, 0, 0x104uLL);
  KeAddProcessorAffinityEx((unsigned __int16 *)v9, dword_140C2B1C0);
  v7[0] = a1;
  v7[1] = a2;
  v7[2] = a3;
  sub_14035BB4C(v9, (__int64)sub_14022F150, (__int64)v7, 1);
  return (unsigned int)v8;
}
