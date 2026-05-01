/*
 * XREFs of ??$capture@UIImmersiveMonitor@@AEAU?$com_ptr@UIImmersiveMonitorManager@@@winrt@@P8IImmersiveMonitorManager@@EAAJPEAUHMONITOR__@@AEBU_GUID@@1PEAPEAX@Z$$TAEBU6@@winrt@@YA?AU?$com_ptr@UIImmersiveMonitor@@@0@AEAU?$com_ptr@UIImmersiveMonitorManager@@@0@$$QEAP8IImmersiveMonitorManager@@EAAJPEAUHMONITOR__@@AEBU_GUID@@2PEAPEAX@Z$$QEA$$T2@Z @ 0x180652D90
 * Callers:
 *     _TouchEdgeGestureProcessor::InputGestureOperationStarted_::_1_::catch$62 @ 0x180654BFB (_TouchEdgeGestureProcessor--InputGestureOperationStarted_--_1_--catch$62.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::capture<IImmersiveMonitor,winrt::com_ptr<IImmersiveMonitorManager> &,long (IImmersiveMonitorManager::*)(HMONITOR__ *,_GUID const &,_GUID const &,void * *),std::nullptr_t,_GUID const &>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 (__fastcall **a3)(_QWORD, _QWORD, GUID *, void *, __int64 *),
        _QWORD *a4)
{
  signed int v5; // eax
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = 0LL;
  v5 = (*a3)(*a2, *a4, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &winrt::impl::guid_v<IImmersiveMonitor>, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult(v5);
  *a1 = v7;
  return a1;
}
