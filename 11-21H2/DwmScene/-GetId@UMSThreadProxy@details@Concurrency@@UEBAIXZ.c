/*
 * XREFs of ?GetId@UMSThreadProxy@details@Concurrency@@UEBAIXZ @ 0x18004870C
 * Callers:
 *     sub_1800B6DB0 @ 0x1800B6DB0 (sub_1800B6DB0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Concurrency::details::UMSThreadProxy::GetId(Concurrency::details::UMSThreadProxy *this)
{
  return *((unsigned int *)this + 32);
}
