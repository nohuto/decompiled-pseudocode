/*
 * XREFs of sub_140368F70 @ 0x140368F70
 * Callers:
 *     sub_140368E90 @ 0x140368E90 (sub_140368E90.c)
 *     sub_140368ED4 @ 0x140368ED4 (sub_140368ED4.c)
 *     sub_1403B6DF8 @ 0x1403B6DF8 (sub_1403B6DF8.c)
 * Callees:
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 *     sub_140368FC4 @ 0x140368FC4 (sub_140368FC4.c)
 */

__int64 __fastcall sub_140368F70(unsigned int a1)
{
  KeGetCurrentIrql();
  if ( !byte_140C5AC3C )
    sub_1402D6B0C((__int64)&unk_140CE2050, 0x16F54A4u, 0, 0, (__int64)&qword_14000EFB0, 1);
  return sub_140368FC4(a1);
}
