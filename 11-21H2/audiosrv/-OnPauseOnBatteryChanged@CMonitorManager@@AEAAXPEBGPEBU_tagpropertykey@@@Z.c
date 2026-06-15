/*
 * XREFs of ?OnPauseOnBatteryChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x18011DB10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800C6278 (WPP_SF_d.c)
 *     ?FindMonitor@CMonitorManager@@AEAA?AV?$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z @ 0x18011B548 (-FindMonitor@CMonitorManager@@AEAA-AV-$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z.c)
 *     ?OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x1801221E0 (-OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z.c)
 */

void __fastcall CMonitorManager::OnPauseOnBatteryChanged(
        CMonitorManager *this,
        const unsigned __int16 *a2,
        const struct _tagpropertykey *a3)
{
  int v5; // eax
  __int64 v6; // [rsp+20h] [rbp-10h] BYREF
  struct IUnknown v7; // [rsp+28h] [rbp-8h] BYREF
  char v8; // [rsp+40h] [rbp+10h] BYREF
  struct IMMDevice *v9; // [rsp+58h] [rbp+28h] BYREF

  v9 = 0LL;
  v6 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**((_QWORD **)this + 8) + 40LL))(
         *((_QWORD *)this + 8),
         a2,
         &v9);
  if ( v5 < 0
    || (v5 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))v9->lpVtbl->QueryInterface)(
               v9,
               &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
               &v6),
        v5 < 0)
    || (v5 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 24LL))(v6, &v8), v5 < 0) )
  {
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Eu,
        (__int64)&WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids,
        v5);
    }
  }
  else
  {
    CMonitorManager::FindMonitor((__int64)this, &v7, a2);
    if ( v7.lpVtbl )
      CMonitor::OnPauseOnBatteryChanged((CMonitor *)v7.lpVtbl[8].AddRef, v9);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v7);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v6);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v9);
}
