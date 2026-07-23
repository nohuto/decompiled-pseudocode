/*
 * XREFs of sub_1403AA258 @ 0x1403AA258
 * Callers:
 *     sub_1403A7B7C @ 0x1403A7B7C (sub_1403A7B7C.c)
 *     sub_1403A8E50 @ 0x1403A8E50 (sub_1403A8E50.c)
 *     sub_1403A96CC @ 0x1403A96CC (sub_1403A96CC.c)
 *     sub_1403A97A4 @ 0x1403A97A4 (sub_1403A97A4.c)
 *     sub_1403A9A80 @ 0x1403A9A80 (sub_1403A9A80.c)
 *     sub_1403A9E80 @ 0x1403A9E80 (sub_1403A9E80.c)
 *     sub_1403AA1D0 @ 0x1403AA1D0 (sub_1403AA1D0.c)
 *     sub_1403CA20C @ 0x1403CA20C (sub_1403CA20C.c)
 *     sub_14064ED90 @ 0x14064ED90 (sub_14064ED90.c)
 *     sub_14064F0C0 @ 0x14064F0C0 (sub_14064F0C0.c)
 * Callees:
 *     sub_1403AA2B8 @ 0x1403AA2B8 (sub_1403AA2B8.c)
 */

__int64 __fastcall sub_1403AA258(unsigned __int64 a1, __int64 *a2)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  __int64 v6; // rdx

  v3 = *a2;
  v4 = (a2[2] + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( *a2 )
  {
    if ( a1 > a2[1] - v4 )
    {
      return 0LL;
    }
    else
    {
      a2[2] = v4 + a1;
      return v3 + v4;
    }
  }
  else
  {
    v6 = sub_1403AA2B8(a1);
    if ( v6 )
      a2[2] = v4 + a1;
  }
  return v6;
}
