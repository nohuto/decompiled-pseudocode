/*
 * XREFs of sub_140AD3010 @ 0x140AD3010
 * Callers:
 *     <none>
 * Callees:
 *     sub_140AD4FB0 @ 0x140AD4FB0 (sub_140AD4FB0.c)
 *     sub_140AD54F0 @ 0x140AD54F0 (sub_140AD54F0.c)
 *     sub_140AD5530 @ 0x140AD5530 (sub_140AD5530.c)
 */

void __fastcall __noreturn sub_140AD3010(unsigned __int64 a1)
{
  _disable();
  __writemsr(0xC0000101, a1);
  __writemsr(0xC0000102, a1);
  sub_140AD4FB0(3221225730LL, HIDWORD(a1));
  sub_140AD54F0();
  _InterlockedIncrement64(MK_FP(__GS__, 16LL));
  sub_140AD5530();
}
