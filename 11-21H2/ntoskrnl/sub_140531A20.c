/*
 * XREFs of sub_140531A20 @ 0x140531A20
 * Callers:
 *     <none>
 * Callees:
 *     sub_140531A6C @ 0x140531A6C (sub_140531A6C.c)
 */

__int64 __fastcall sub_140531A20(int a1, int a2, int a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v6; // r10

  v6 = a4;
  LOBYTE(a4) = a2 == -1;
  return sub_140531A6C(a1, a2, 0, a4, 0, a3, v6, a5, a6);
}
