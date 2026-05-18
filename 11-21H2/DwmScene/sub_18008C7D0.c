/*
 * XREFs of sub_18008C7D0 @ 0x18008C7D0
 * Callers:
 *     sub_1800309B0 @ 0x1800309B0 (sub_1800309B0.c)
 * Callees:
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_1800A927C @ 0x1800A927C (sub_1800A927C.c)
 */

_QWORD *__fastcall sub_18008C7D0(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = sub_18001875C(v4, (__int64)&qword_1801F63D8);
  sub_1800A927C(a1, v2);
  *a1 = &Spectre::Engine::UnlitShaderExtension::`vftable';
  return a1;
}
