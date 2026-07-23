/*
 * XREFs of MmUnlockPagableImageSection @ 0x140241620
 * Callers:
 *     sub_140953314 @ 0x140953314 (sub_140953314.c)
 *     sub_14096029C @ 0x14096029C (sub_14096029C.c)
 *     sub_140971B68 @ 0x140971B68 (sub_140971B68.c)
 *     sub_14098C0DC @ 0x14098C0DC (sub_14098C0DC.c)
 *     sub_140A487C0 @ 0x140A487C0 (sub_140A487C0.c)
 *     sub_140A4E3A0 @ 0x140A4E3A0 (sub_140A4E3A0.c)
 *     sub_140A5B230 @ 0x140A5B230 (sub_140A5B230.c)
 *     IoUnregisterShutdownNotification @ 0x140A65430 (IoUnregisterShutdownNotification.c)
 *     sub_140A69FD8 @ 0x140A69FD8 (sub_140A69FD8.c)
 *     sub_140A6C8B4 @ 0x140A6C8B4 (sub_140A6C8B4.c)
 *     sub_140A82240 @ 0x140A82240 (sub_140A82240.c)
 *     sub_140A82298 @ 0x140A82298 (sub_140A82298.c)
 *     sub_140AAB6EC @ 0x140AAB6EC (sub_140AAB6EC.c)
 * Callees:
 *     sub_1402FD820 @ 0x1402FD820 (sub_1402FD820.c)
 */

void __stdcall MmUnlockPagableImageSection(PVOID ImageSectionHandle)
{
  sub_1402FD820((ULONG_PTR)ImageSectionHandle, 0LL);
}
