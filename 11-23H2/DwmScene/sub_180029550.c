/*
 * XREFs of sub_180029550 @ 0x180029550
 * Callers:
 *     sub_180028710 @ 0x180028710 (sub_180028710.c)
 *     sub_1800441A0 @ 0x1800441A0 (sub_1800441A0.c)
 *     sub_180047F10 @ 0x180047F10 (sub_180047F10.c)
 *     sub_1800548AC @ 0x1800548AC (sub_1800548AC.c)
 *     sub_180055A00 @ 0x180055A00 (sub_180055A00.c)
 *     sub_18006F580 @ 0x18006F580 (sub_18006F580.c)
 *     sub_180088290 @ 0x180088290 (sub_180088290.c)
 *     sub_180088AB8 @ 0x180088AB8 (sub_180088AB8.c)
 *     sub_18008ACE0 @ 0x18008ACE0 (sub_18008ACE0.c)
 *     sub_18008BEC0 @ 0x18008BEC0 (sub_18008BEC0.c)
 * Callees:
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_180029084 @ 0x180029084 (sub_180029084.c)
 */

__int64 __fastcall sub_180029550(__int64 a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = sub_180026650(*a2);
  result = sub_180029084((__int64 *)(v2 + 80), (__int64)v4, &v5);
  *(_BYTE *)(*(_QWORD *)result + 32LL) = 0;
  return result;
}
