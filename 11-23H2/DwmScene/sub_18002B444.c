/*
 * XREFs of sub_18002B444 @ 0x18002B444
 * Callers:
 *     sub_18002B4A4 @ 0x18002B4A4 (sub_18002B4A4.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180029F5C @ 0x180029F5C (sub_180029F5C.c)
 *     sub_18002A2D4 @ 0x18002A2D4 (sub_18002A2D4.c)
 */

_QWORD *__fastcall sub_18002B444(_QWORD *a1, _QWORD *a2)
{
  int v4; // eax
  __int64 v5; // rcx

  v4 = sub_18002A2D4(*a2 + 24LL);
  sub_180029F5C((__int64)(a1 + 1), v4);
  a1[8] = 0LL;
  a1[9] = 0LL;
  *a1 = &Spectre::Engine::IRenderOutput::`vftable';
  v5 = a2[1];
  if ( v5 )
    sub_180010530(v5);
  return a1;
}
