/*
 * XREFs of sub_18007F77C @ 0x18007F77C
 * Callers:
 *     sub_180030368 @ 0x180030368 (sub_180030368.c)
 * Callees:
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18005F7EC @ 0x18005F7EC (sub_18005F7EC.c)
 */

_QWORD *__fastcall sub_18007F77C(_QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = sub_180017648(v4, (__int64)&unk_1801D83A8);
  sub_18005F7EC((__int64)a1, (__int64)v2);
  *a1 = &Spectre::Engine::FontShaderExtension::`vftable';
  return a1;
}
