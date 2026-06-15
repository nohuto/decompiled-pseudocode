/*
 * XREFs of ?OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x1801315BC
 * Callers:
 *     ?OnPauseOnBatteryChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x18012E210 (-OnPauseOnBatteryChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180028934 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800DDE44 (WPP_SF_d.c)
 *     WPP_SF_qd @ 0x1800E4064 (WPP_SF_qd.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x1800FE9B0 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?GetPowerStatus@CMonitor@@AEAA_NPEAE@Z @ 0x18012FF8C (-GetPowerStatus@CMonitor@@AEAA_NPEAE@Z.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x180131D98 (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x180132178 (-Stop@CMonitor@@QEAAXXZ.c)
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
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Eu,
      (__int64)&WPP_bd59d04cb15c3bed485848ef4f6ee602_Traceguids,
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
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x1Fu,
          (__int64)&WPP_bd59d04cb15c3bed485848ef4f6ee602_Traceguids,
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
    if ( v7 )
      LeaveCriticalSection(lpCriticalSection);
  }
  else
  {
    ATL::CCritSecLock::~CCritSecLock(&lpCriticalSection);
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v11);
}
