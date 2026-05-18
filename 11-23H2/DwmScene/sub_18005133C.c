/*
 * XREFs of sub_18005133C @ 0x18005133C
 * Callers:
 *     sub_1800516A0 @ 0x1800516A0 (sub_1800516A0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001E730 @ 0x18001E730 (sub_18001E730.c)
 */

void **__fastcall sub_18005133C(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *a1 = &Spectre::Engine::LightProbe::`vftable';
  v2 = a1[65];
  if ( v2 )
    sub_180010530(v2);
  sub_18001E730((__int64)(a1 + 59));
  v3 = a1[57];
  if ( v3 )
    sub_180010530(v3);
  v4 = a1[55];
  if ( v4 )
    sub_180010530(v4);
  return sub_180042F3C(a1);
}
