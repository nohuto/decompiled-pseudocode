/*
 * XREFs of ?GetVirtualProcessorRoot@UMSThreadProxy@details@Concurrency@@QEAAPEAVUMSFreeVirtualProcessorRoot@23@XZ @ 0x180060AE8
 * Callers:
 *     sub_180060AF4 @ 0x180060AF4 (sub_180060AF4.c)
 * Callees:
 *     <none>
 */

struct Concurrency::details::UMSFreeVirtualProcessorRoot *__fastcall Concurrency::details::UMSThreadProxy::GetVirtualProcessorRoot(
        Concurrency::details::UMSThreadProxy *this)
{
  return (struct Concurrency::details::UMSFreeVirtualProcessorRoot *)*((_QWORD *)this + 8);
}
