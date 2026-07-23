/*
 * XREFs of sub_1405319C0 @ 0x1405319C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140531A6C @ 0x140531A6C (sub_140531A6C.c)
 */

__int64 __fastcall sub_1405319C0(int a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  int v5; // r8d
  _QWORD v7[3]; // [rsp+50h] [rbp-18h] BYREF

  v5 = *(_DWORD *)(a2 + 48);
  v7[1] = v7;
  v7[0] = v7;
  return sub_140531A6C(a1, 0, v5, 0, 1, 0, (__int64)v7, a4, a5);
}
