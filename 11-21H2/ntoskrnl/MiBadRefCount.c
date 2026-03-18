/*
 * XREFs of MiBadRefCount @ 0x1405AD67C
 * Callers:
 *     MiDeleteNonPagedPoolPte @ 0x140228170 (MiDeleteNonPagedPoolPte.c)
 *     MiReadyLargePageToFree @ 0x14028CEE0 (MiReadyLargePageToFree.c)
 *     MiProbeUnlockPage @ 0x1402B7320 (MiProbeUnlockPage.c)
 *     MiMakePageAvoidRead @ 0x1402BBEE0 (MiMakePageAvoidRead.c)
 *     MiResolveProtoPteFault @ 0x14031EAA0 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140325B30 (MiResolveTransitionFault.c)
 *     MmCheckCachedPageStates @ 0x140328690 (MmCheckCachedPageStates.c)
 *     MiRemoveLockedPageCharge @ 0x1403377E0 (MiRemoveLockedPageCharge.c)
 *     MiUnlockImageSection @ 0x140369180 (MiUnlockImageSection.c)
 *     MiFreeInitializationCode @ 0x14075F23C (MiFreeInitializationCode.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MiBadRefCount(__int64 a1)
{
  KeBugCheckEx(
    0x4Eu,
    0x9AuLL,
    0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4),
    *(_BYTE *)(a1 + 34) & 7,
    *(unsigned __int16 *)(a1 + 32));
}
