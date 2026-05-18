/*
 * XREFs of sub_1800CA930 @ 0x1800CA930
 * Callers:
 *     <none>
 * Callees:
 *     ?ContextPriority@SchedulerProxy@details@Concurrency@@QEBAHXZ @ 0x18002C330 (-ContextPriority@SchedulerProxy@details@Concurrency@@QEBAHXZ.c)
 *     sub_18002CB80 @ 0x18002CB80 (sub_18002CB80.c)
 *     sub_18002CBD0 @ 0x18002CBD0 (sub_18002CBD0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall sub_1800CA930(Concurrency::details::SchedulerProxy *this, float a2, float a3)
{
  int v5; // eax
  __int64 v6; // rcx

  if ( a2 == (*(float (__fastcall **)(Concurrency::details::SchedulerProxy *))(*(_QWORD *)this + 128LL))(this)
    && a3 == (*(float (__fastcall **)(Concurrency::details::SchedulerProxy *))(*(_QWORD *)this + 136LL))(this)
    && !(unsigned int)Concurrency::details::SchedulerProxy::ContextPriority(this) )
  {
    return 1;
  }
  v5 = Concurrency::details::SchedulerProxy::ContextPriority(this);
  if ( v5 > 0 )
    sub_18002CB80(v6, v5 - 1);
  if ( sub_18002CBD0((__int64)this, a2, a3) )
  {
    (*(void (__fastcall **)(Concurrency::details::SchedulerProxy *))(*(_QWORD *)this + 416LL))(this);
    return 1;
  }
  return 0;
}
