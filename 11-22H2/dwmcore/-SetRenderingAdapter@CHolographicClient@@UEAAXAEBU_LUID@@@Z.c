/*
 * XREFs of ?SetRenderingAdapter@CHolographicClient@@UEAAXAEBU_LUID@@@Z @ 0x1802AE680
 * Callers:
 *     <none>
 * Callees:
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802AC48C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicClient::SetRenderingAdapter(CHolographicInteropTaskQueue **this, const struct _LUID *a2)
{
  CHolographicInteropTaskQueue::PostMessageW(
    this[32],
    19,
    0LL,
    (void *)a2->HighPart,
    (struct _SLIST_ENTRY *)a2->LowPart,
    0LL,
    0LL);
}
