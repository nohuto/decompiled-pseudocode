/*
 * XREFs of ?GetId@UMSThreadProxy@details@Concurrency@@UEBAIXZ_0 @ 0x180063C78
 * Callers:
 *     sub_180061A10 @ 0x180061A10 (sub_180061A10.c)
 *     sub_180063FE4 @ 0x180063FE4 (sub_180063FE4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Concurrency::details::UMSThreadProxy::GetId(Concurrency::details::UMSThreadProxy *this)
{
  return *((unsigned int *)this + 32);
}
