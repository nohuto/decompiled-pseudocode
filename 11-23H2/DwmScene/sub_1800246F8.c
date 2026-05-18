/*
 * XREFs of sub_1800246F8 @ 0x1800246F8
 * Callers:
 *     sub_180021A28 @ 0x180021A28 (sub_180021A28.c)
 *     sub_180022590 @ 0x180022590 (sub_180022590.c)
 *     sub_1800226F0 @ 0x1800226F0 (sub_1800226F0.c)
 *     sub_180022990 @ 0x180022990 (sub_180022990.c)
 *     sub_180022CE0 @ 0x180022CE0 (sub_180022CE0.c)
 *     sub_180022E40 @ 0x180022E40 (sub_180022E40.c)
 *     sub_1800230D0 @ 0x1800230D0 (sub_1800230D0.c)
 *     sub_180023330 @ 0x180023330 (sub_180023330.c)
 *     sub_180023460 @ 0x180023460 (sub_180023460.c)
 *     sub_1800236D0 @ 0x1800236D0 (sub_1800236D0.c)
 *     sub_180023830 @ 0x180023830 (sub_180023830.c)
 *     sub_180023BA0 @ 0x180023BA0 (sub_180023BA0.c)
 *     sub_180023CD0 @ 0x180023CD0 (sub_180023CD0.c)
 *     sub_180023E70 @ 0x180023E70 (sub_180023E70.c)
 *     sub_180024160 @ 0x180024160 (sub_180024160.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800246F8(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  result = *a1;
  *a1 = a2;
  if ( result )
    return o__aligned_free(result);
  return result;
}
