/*
 * XREFs of sub_1800100B8 @ 0x1800100B8
 * Callers:
 *     CreateDwmSceneRenderer @ 0x1800105F0 (CreateDwmSceneRenderer.c)
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 */

__int64 __fastcall sub_1800100B8(__int64 *a1, __int64 a2)
{
  sub_18000E72C(a1);
  return sub_18000FFF0(a1, a2);
}
