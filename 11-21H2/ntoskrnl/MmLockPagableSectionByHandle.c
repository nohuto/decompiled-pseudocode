/*
 * XREFs of MmLockPagableSectionByHandle @ 0x1406BC300
 * Callers:
 *     sub_1402D3980 @ 0x1402D3980 (sub_1402D3980.c)
 *     sub_1403B60E0 @ 0x1403B60E0 (sub_1403B60E0.c)
 *     HalStartDynamicProcessor @ 0x140508D60 (HalStartDynamicProcessor.c)
 *     sub_1406171F0 @ 0x1406171F0 (sub_1406171F0.c)
 *     sub_140A487C0 @ 0x140A487C0 (sub_140A487C0.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 *     IoUnregisterShutdownNotification @ 0x140A65430 (IoUnregisterShutdownNotification.c)
 *     sub_140A69FD8 @ 0x140A69FD8 (sub_140A69FD8.c)
 *     sub_140A6C8B4 @ 0x140A6C8B4 (sub_140A6C8B4.c)
 *     sub_140A6CC50 @ 0x140A6CC50 (sub_140A6CC50.c)
 *     sub_140B1A508 @ 0x140B1A508 (sub_140B1A508.c)
 * Callees:
 *     sub_1402FD820 @ 0x1402FD820 (sub_1402FD820.c)
 */

void __stdcall MmLockPagableSectionByHandle(PVOID ImageSectionHandle)
{
  sub_1402FD820((ULONG_PTR)ImageSectionHandle, 1uLL);
}
