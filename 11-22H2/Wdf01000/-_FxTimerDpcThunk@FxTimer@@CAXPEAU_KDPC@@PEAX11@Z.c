/*
 * XREFs of ?_FxTimerDpcThunk@FxTimer@@CAXPEAU_KDPC@@PEAX11@Z @ 0x1C00093D0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1C0007508 (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 *     ?TimerHandler@FxTimer@@QEAAXXZ @ 0x1C0008C04 (-TimerHandler@FxTimer@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxTimer::_FxTimerDpcThunk(
        _KDPC *TimerDpc,
        FxTimer *DeferredContext,
        void *SystemArgument1,
        void *SystemArgument2)
{
  FxSystemWorkItem *m_SystemWorkItem; // rcx
  void (__fastcall *v6)(void (__fastcall **)(WDFTIMER__ *), __int64, __int64, __int64, char); // rax

  m_SystemWorkItem = DeferredContext->m_SystemWorkItem;
  if ( m_SystemWorkItem )
  {
    FxSystemWorkItem::EnqueueWorker(
      m_SystemWorkItem,
      (void (__fastcall *)(void *))FxTimer::_FxTimerWorkItemCallback,
      DeferredContext,
      0);
  }
  else
  {
    v6 = *(void (__fastcall **)(void (__fastcall **)(WDFTIMER__ *), __int64, __int64, __int64, char))(unk_1C009FF30 + 8LL);
    if ( v6 )
      v6(&DeferredContext->m_Callback, 8LL, 2164260864LL, 3938LL, 2);
    FxTimer::TimerHandler(DeferredContext);
  }
}
