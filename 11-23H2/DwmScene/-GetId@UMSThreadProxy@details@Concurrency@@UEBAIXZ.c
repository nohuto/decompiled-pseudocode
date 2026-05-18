/*
 * XREFs of ?GetId@UMSThreadProxy@details@Concurrency@@UEBAIXZ @ 0x1800432FC
 * Callers:
 *     sub_1800A4590 @ 0x1800A4590 (sub_1800A4590.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Concurrency::details::UMSThreadProxy::GetId(Concurrency::details::UMSThreadProxy *this)
{
  return *((unsigned int *)this + 32);
}
