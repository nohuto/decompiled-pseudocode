/*
 * XREFs of sub_18008F60C @ 0x18008F60C
 * Callers:
 *     sub_18008F660 @ 0x18008F660 (sub_18008F660.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001B880 @ 0x18001B880 (sub_18001B880.c)
 */

void **__fastcall sub_18008F60C(_QWORD *a1)
{
  __int64 v2; // rcx

  *a1 = &Spectre::Engine::ColorTransform::`vftable';
  sub_18001B880((__int64)(a1 + 14));
  v2 = a1[13];
  if ( v2 )
    sub_180010530(v2);
  return sub_180042F3C(a1);
}
