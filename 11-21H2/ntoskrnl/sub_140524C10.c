/*
 * XREFs of sub_140524C10 @ 0x140524C10
 * Callers:
 *     <none>
 * Callees:
 *     sub_140524C30 @ 0x140524C30 (sub_140524C30.c)
 */

__int64 __fastcall sub_140524C10(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 v5; // rdx

  v4 = a2;
  v5 = a1;
  LOBYTE(a1) = 1;
  return sub_140524C30(a1, v5, v4, a3);
}
