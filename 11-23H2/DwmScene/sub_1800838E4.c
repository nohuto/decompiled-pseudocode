/*
 * XREFs of sub_1800838E4 @ 0x1800838E4
 * Callers:
 *     sub_180045298 @ 0x180045298 (sub_180045298.c)
 *     sub_180046AE8 @ 0x180046AE8 (sub_180046AE8.c)
 *     sub_18007E900 @ 0x18007E900 (sub_18007E900.c)
 *     sub_18007FF54 @ 0x18007FF54 (sub_18007FF54.c)
 *     sub_1800838B0 @ 0x1800838B0 (sub_1800838B0.c)
 * Callees:
 *     sub_180082FEC @ 0x180082FEC (sub_180082FEC.c)
 */

__int64 __fastcall sub_1800838E4(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 result; // rax
  int v5; // r8d

  v2 = *(unsigned int *)(sub_180082FEC(a1, a2) + 40);
  result = *(_QWORD *)(v3 + 104);
  *(_DWORD *)(result + 40 * v2 + 32) = v5;
  return result;
}
