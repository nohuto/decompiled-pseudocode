/*
 * XREFs of ?OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x1801221E0
 * Callers:
 *     ?OnPauseOnBatteryChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x18011DB10 (-OnPauseOnBatteryChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18004DA6C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800C6278 (WPP_SF_d.c)
 *     WPP_SF_qd @ 0x1800C9C78 (WPP_SF_qd.c)
 *     ?GetPowerStatus@CMonitor@@AEAA_NPEAE@Z @ 0x180120174 (-GetPowerStatus@CMonitor@@AEAA_NPEAE@Z.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x180123644 (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x180123F4C (-Stop@CMonitor@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMonitor::OnPauseOnBatteryChanged(CMonitor *this, struct IMMDevice *a2)
{
  int v4; // eax
  bool v5; // al
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-30h] BYREF
  char v7; // [rsp+38h] [rbp-28h]
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v9; // [rsp+50h] [rbp-10h]
  unsigned __int8 v10; // [rsp+80h] [rbp+20h] BYREF
  __int64 v11; // [rsp+90h] [rbp+30h] BYREF

  v11 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v7 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x20u,
      (__int64)&WPP_a37dfcc815523b32eaec5cff52282599_Traceguids,
      this,
      *((_DWORD *)this + 14));
  }
  if ( (unsigned int)(*((_DWORD *)this + 14) - 2) <= 2 )
  {
    *(_OWORD *)pvar = 0LL;
    v9 = 0LL;
    v4 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a2->lpVtbl->OpenPropertyStore)(a2, 0LL, &v11);
    if ( v4 < 0
      || (v4 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v11 + 40LL))(
                 v11,
                 &PKEY_MonitorPauseOnBattery,
                 pvar),
          v4 < 0) )
    {
      if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x21u,
          (__int64)&WPP_a37dfcc815523b32eaec5cff52282599_Traceguids,
          v4);
      }
    }
    else if ( LOWORD(pvar[0]) == 11 )
    {
      v5 = LOWORD(pvar[1]) == 0xFFFF;
      *((_BYTE *)this + 61) = v5;
      if ( v5 )
      {
        if ( CMonitor::GetPowerStatus(this, &v10) && *((_DWORD *)this + 14) == 3 && (v10 & 0xFD) == 0 )
          CMonitor::Stop(this);
      }
      else if ( *((_DWORD *)this + 14) == 4 )
      {
        CMonitor::Start(this);
      }
    }
    PropVariantClear(pvar);
  }
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v11);
}
