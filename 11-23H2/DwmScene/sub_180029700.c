/*
 * XREFs of sub_180029700 @ 0x180029700
 * Callers:
 *     sub_180028710 @ 0x180028710 (sub_180028710.c)
 *     sub_1800441A0 @ 0x1800441A0 (sub_1800441A0.c)
 *     sub_180047F10 @ 0x180047F10 (sub_180047F10.c)
 *     sub_1800548AC @ 0x1800548AC (sub_1800548AC.c)
 *     sub_180055A00 @ 0x180055A00 (sub_180055A00.c)
 *     sub_18006F580 @ 0x18006F580 (sub_18006F580.c)
 *     sub_180088290 @ 0x180088290 (sub_180088290.c)
 *     sub_180088AB8 @ 0x180088AB8 (sub_180088AB8.c)
 *     sub_180088F6C @ 0x180088F6C (sub_180088F6C.c)
 * Callees:
 *     sub_180029084 @ 0x180029084 (sub_180029084.c)
 */

__int64 __fastcall sub_180029700(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF

  v4 = a2;
  result = sub_180029084((__int64 *)(a1 + 80), (__int64)v3, &v4);
  *(_BYTE *)(*(_QWORD *)result + 32LL) = 1;
  return result;
}
