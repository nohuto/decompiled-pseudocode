/*
 * XREFs of MiBadRefCount @ 0x14064D640
 * Callers:
 *     MiDeleteNonPagedPoolPte @ 0x1402126F0 (MiDeleteNonPagedPoolPte.c)
 *     MiUnlockImageSection @ 0x14025A460 (MiUnlockImageSection.c)
 *     MiResolveTransitionFault @ 0x1402624D0 (MiResolveTransitionFault.c)
 *     MmCheckCachedPageStates @ 0x140265320 (MmCheckCachedPageStates.c)
 *     MiResolveProtoPteFault @ 0x140267ED0 (MiResolveProtoPteFault.c)
 *     MiProbeUnlockPage @ 0x1402CB170 (MiProbeUnlockPage.c)
 *     MiMakePageAvoidRead @ 0x1402CE000 (MiMakePageAvoidRead.c)
 *     MiRemoveLockedPageCharge @ 0x1402DBB20 (MiRemoveLockedPageCharge.c)
 *     MiReadyLargePageToFree @ 0x1402E7730 (MiReadyLargePageToFree.c)
 *     MiFreeInitializationCode @ 0x140703AFC (MiFreeInitializationCode.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
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
