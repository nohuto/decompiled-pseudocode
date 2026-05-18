/*
 * XREFs of ?GetVirtualProcessorRoot@UMSThreadProxy@details@Concurrency@@QEAAPEAVUMSFreeVirtualProcessorRoot@23@XZ @ 0x180069254
 * Callers:
 *     sub_180069260 @ 0x180069260 (sub_180069260.c)
 * Callees:
 *     <none>
 */

struct Concurrency::details::UMSFreeVirtualProcessorRoot *__fastcall Concurrency::details::UMSThreadProxy::GetVirtualProcessorRoot(
        Concurrency::details::UMSThreadProxy *this)
{
  return (struct Concurrency::details::UMSFreeVirtualProcessorRoot *)*((_QWORD *)this + 8);
}
