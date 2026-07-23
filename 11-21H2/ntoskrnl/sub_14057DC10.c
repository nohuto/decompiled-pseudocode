/*
 * XREFs of sub_14057DC10 @ 0x14057DC10
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14057E860 @ 0x14057E860 (sub_14057E860.c)
 */

__int64 __fastcall sub_14057DC10(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx

  sub_14042A5E0(a1, a2);
  sub_14042A5E0(a1, v3);
  return sub_14057E860(a1, *(_QWORD *)(a1 + 24));
}
