/*
 * XREFs of sub_14062CDF0 @ 0x14062CDF0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402E1D48 @ 0x1402E1D48 (sub_1402E1D48.c)
 */

void __fastcall sub_14062CDF0(
        struct _KDPC *Dpc,
        struct _KEVENT *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int16 v5; // di

  _m_prefetchw(&DeferredContext[34].Header.WaitListHead);
  v5 = _InterlockedAnd((volatile signed __int32 *)&DeferredContext[34].Header.WaitListHead, 0xFFFFFCFF);
  if ( (v5 & 0x100) != 0 )
    KeSetEvent(DeferredContext + 20, 0, 0);
  if ( (v5 & 0x200) != 0 )
    sub_1402E1D48((__int64)DeferredContext, 0);
}
