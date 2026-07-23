/*
 * XREFs of MiBadRefCount @ 0x14064DB90
 * Callers:
 *     MiDeleteNonPagedPoolPte @ 0x1402126F0 (MiDeleteNonPagedPoolPte.c)
 *     MiUnlockImageSection @ 0x14025A6F0 (MiUnlockImageSection.c)
 *     MiResolveTransitionFault @ 0x140262760 (MiResolveTransitionFault.c)
 *     MmCheckCachedPageStates @ 0x1402655B0 (MmCheckCachedPageStates.c)
 *     MiResolveProtoPteFault @ 0x140268160 (MiResolveProtoPteFault.c)
 *     MiProbeUnlockPage @ 0x1402CB400 (MiProbeUnlockPage.c)
 *     MiMakePageAvoidRead @ 0x1402CE290 (MiMakePageAvoidRead.c)
 *     MiRemoveLockedPageCharge @ 0x1402DBDB0 (MiRemoveLockedPageCharge.c)
 *     MiReadyLargePageToFree @ 0x1402E79C0 (MiReadyLargePageToFree.c)
 *     MiFreeInitializationCode @ 0x140703D0C (MiFreeInitializationCode.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
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
