/*
 * XREFs of sub_18008C370 @ 0x18008C370
 * Callers:
 *     sub_180030848 @ 0x180030848 (sub_180030848.c)
 * Callees:
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_180067590 @ 0x180067590 (sub_180067590.c)
 */

_QWORD *__fastcall sub_18008C370(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = sub_18001875C(v4, (__int64)&qword_1801F6358);
  sub_180067590((__int64)a1, (__int64)v2);
  *a1 = &Spectre::Engine::FontShaderExtension::`vftable';
  return a1;
}
