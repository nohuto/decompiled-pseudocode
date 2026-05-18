/*
 * XREFs of sub_18007FAE8 @ 0x18007FAE8
 * Callers:
 *     sub_180030860 @ 0x180030860 (sub_180030860.c)
 * Callees:
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_180098904 @ 0x180098904 (sub_180098904.c)
 */

_QWORD *__fastcall sub_18007FAE8(_QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = sub_180017648(v4, (__int64)&unk_1801D8408);
  sub_180098904(a1, v2);
  *a1 = &Spectre::Engine::UnlitShaderExtension::`vftable';
  return a1;
}
