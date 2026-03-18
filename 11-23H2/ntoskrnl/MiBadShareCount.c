/*
 * XREFs of MiBadShareCount @ 0x14064D68C
 * Callers:
 *     MiDeleteClusterSection @ 0x1402189B0 (MiDeleteClusterSection.c)
 *     MiDecrementShareCount @ 0x1402807B0 (MiDecrementShareCount.c)
 *     MiDeleteValidSystemPage @ 0x140280810 (MiDeleteValidSystemPage.c)
 *     MiWsleFree @ 0x1402813A0 (MiWsleFree.c)
 *     MiMakePageAvoidRead @ 0x1402CE000 (MiMakePageAvoidRead.c)
 *     MiDeletePteList @ 0x1402D2450 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1402D50F0 (MiDeletePteRun.c)
 *     MiDeleteBatch @ 0x1402D5F70 (MiDeleteBatch.c)
 *     MiDeleteClusterPage @ 0x1402D6220 (MiDeleteClusterPage.c)
 *     MiDeleteTransitionPte @ 0x1402DCE80 (MiDeleteTransitionPte.c)
 *     MiReduceShareCount @ 0x140367F14 (MiReduceShareCount.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MiBadShareCount(__int64 a1)
{
  KeBugCheckEx(
    0x4Eu,
    0x99uLL,
    0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4),
    *(_BYTE *)(a1 + 34) & 7,
    *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL);
}
