/*
 * XREFs of sub_140A85CF0 @ 0x140A85CF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A83CA4 @ 0x140A83CA4 (sub_140A83CA4.c)
 *     sub_140A88738 @ 0x140A88738 (sub_140A88738.c)
 */

__int64 __fastcall sub_140A85CF0(__int64 a1)
{
  __int64 v2; // rdx

  sub_140A83CA4(0);
  if ( sub_140A88738(a1) )
    return sub_14042A5E0(a1, v2);
  else
    return 1LL;
}
