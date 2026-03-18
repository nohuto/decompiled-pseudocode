/*
 * XREFs of ?_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z @ 0x1C0035380
 * Callers:
 *     <none>
 * Callees:
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1C0003538 (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009550 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0028B14 (WPP_IFR_SF_.c)
 */

void __fastcall FxIoQueue::_DeferredDispatchThreadThunk(char *Parameter, __int64 a2, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *v4; // rcx
  unsigned __int8 v5; // dl
  unsigned __int16 v6; // r9
  unsigned __int8 v7; // r8
  unsigned __int8 v8; // r8
  unsigned __int8 PreviousIrql; // [rsp+40h] [rbp+8h] BYREF

  v4 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)Parameter + 2);
  if ( v4->FxVerboseOn )
    WPP_IFR_SF_(v4, 5u, 0xDu, 0x68u, WPP_FxIoQueue_cpp_Traceguids);
  PreviousIrql = 0;
  FxNonPagedObject::Lock((FxNonPagedObject *)Parameter, &PreviousIrql, a3);
  v5 = PreviousIrql;
  Parameter[866] = 0;
  FxIoQueue::DispatchEvents((FxIoQueue *)Parameter, v5, 0LL, v6);
  FxNonPagedObject::Lock((FxNonPagedObject *)Parameter, &PreviousIrql, v7);
  if ( Parameter[142]
    || !Parameter[866]
    || !FxSystemWorkItem::EnqueueWorker(
          *((FxSystemWorkItem **)Parameter + 107),
          FxIoQueue::_DeferredDispatchThreadThunk,
          Parameter,
          1u) )
  {
    *(_WORD *)(Parameter + 865) = 0;
  }
  FxNonPagedObject::Unlock((FxNonPagedObject *)Parameter, PreviousIrql, v8);
}
