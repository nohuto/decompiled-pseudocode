/*
 * XREFs of sub_1800E0E90 @ 0x1800E0E90
 * Callers:
 *     <none>
 * Callees:
 *     ?ContextPriority@SchedulerProxy@details@Concurrency@@QEBAHXZ @ 0x18002E580 (-ContextPriority@SchedulerProxy@details@Concurrency@@QEBAHXZ.c)
 *     sub_18002F040 @ 0x18002F040 (sub_18002F040.c)
 *     sub_18002F0C0 @ 0x18002F0C0 (sub_18002F0C0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall sub_1800E0E90(Concurrency::details::SchedulerProxy *this, float a2, float a3)
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
    sub_18002F040(v6, v5 - 1);
  if ( sub_18002F0C0((__int64)this, a2, a3) )
  {
    (*(void (__fastcall **)(Concurrency::details::SchedulerProxy *))(*(_QWORD *)this + 416LL))(this);
    return 1;
  }
  return 0;
}
