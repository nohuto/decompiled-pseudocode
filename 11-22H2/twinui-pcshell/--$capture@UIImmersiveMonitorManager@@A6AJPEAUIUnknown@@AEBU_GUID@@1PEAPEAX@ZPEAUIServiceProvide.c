/*
 * XREFs of ??$capture@UIImmersiveMonitorManager@@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIServiceProvider@@AEBU3@@winrt@@YA?AU?$com_ptr@UIImmersiveMonitorManager@@@0@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAUIServiceProvider@@1@Z @ 0x18064EAF8
 * Callers:
 *     ?ReportTouchSwipePerformed_@TouchGestureTelemetry@@QEAAXIIMM_NU?$com_ptr@UIServiceProvider@@@winrt@@@Z @ 0x180651874 (-ReportTouchSwipePerformed_@TouchGestureTelemetry@@QEAAXIIMM_NU-$com_ptr@UIServiceProvider@@@win.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::capture<IImmersiveMonitorManager,long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider *,_GUID const &>(
        _QWORD *a1,
        __int64 (__fastcall *a2)(_QWORD, SID *, const IID *, __int64 *),
        _QWORD *a3)
{
  signed int v4; // eax
  __int64 v6; // [rsp+68h] [rbp+20h] BYREF

  v6 = 0LL;
  v4 = a2(*a3, &SID_IImmersiveMonitorService, &winrt::impl::guid_v<IImmersiveMonitorManager>, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  *a1 = v6;
  return a1;
}
