/*
 * XREFs of sub_180099174 @ 0x180099174
 * Callers:
 *     sub_1800EC064 @ 0x1800EC064 (sub_1800EC064.c)
 *     sub_1800ED260 @ 0x1800ED260 (sub_1800ED260.c)
 *     sub_1800EFB8C @ 0x1800EFB8C (sub_1800EFB8C.c)
 *     sub_1800EFEC8 @ 0x1800EFEC8 (sub_1800EFEC8.c)
 *     sub_1800F020C @ 0x1800F020C (sub_1800F020C.c)
 * Callees:
 *     sub_18002B268 @ 0x18002B268 (sub_18002B268.c)
 */

__int64 __fastcall sub_180099174(__int64 a1)
{
  sub_18002B268(a1);
  *(_BYTE *)(a1 + 96) = 0;
  *(_QWORD *)a1 = &Spectre::Engine::DeviceShader::`vftable';
  return a1;
}
