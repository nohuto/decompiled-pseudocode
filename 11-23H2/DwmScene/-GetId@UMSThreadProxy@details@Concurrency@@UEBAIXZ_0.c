/*
 * XREFs of ?GetId@UMSThreadProxy@details@Concurrency@@UEBAIXZ_0 @ 0x18005BB18
 * Callers:
 *     sub_180059FD0 @ 0x180059FD0 (sub_180059FD0.c)
 *     sub_18005BF0C @ 0x18005BF0C (sub_18005BF0C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Concurrency::details::UMSThreadProxy::GetId(Concurrency::details::UMSThreadProxy *this)
{
  return *((unsigned int *)this + 32);
}
