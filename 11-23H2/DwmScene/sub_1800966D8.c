/*
 * XREFs of sub_1800966D8 @ 0x1800966D8
 * Callers:
 *     sub_180096710 @ 0x180096710 (sub_180096710.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 */

void **__fastcall sub_1800966D8(_QWORD *a1)
{
  __int64 v2; // rcx

  *a1 = &Spectre::Engine::Aimer::`vftable';
  v2 = a1[13];
  if ( v2 )
    sub_180010530(v2);
  return sub_180042F3C(a1);
}
