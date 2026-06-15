/*
 * XREFs of ?Start@CMonitor@@QEAAJXZ @ 0x180131DE8
 * Callers:
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x18005A578 (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?Continue@CMonitorManager@@QEAAXXZ @ 0x18012C4C4 (-Continue@CMonitorManager@@QEAAXXZ.c)
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x18012CA38 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?HandleDefaultDeviceChanges@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18012D1C4 (-HandleDefaultDeviceChanges@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18012EC4C (-RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     ?HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z @ 0x180130238 (-HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z.c)
 *     ?OnMuteStateChanged@CMonitor@@IEAAXH@Z @ 0x18013151C (-OnMuteStateChanged@CMonitor@@IEAAXH@Z.c)
 *     ?OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x18013160C (-OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z.c)
 *     ?OnPowerStateChanged@CMonitor@@IEAAXE@Z @ 0x1801317D4 (-OnPowerStateChanged@CMonitor@@IEAAXE@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180028934 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800DDCF8 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800DDE94 (WPP_SF_d.c)
 *     WPP_SF_q @ 0x1800E3F20 (WPP_SF_q.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x1800FEA00 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?GetPowerStatus@CMonitor@@AEAA_NPEAE@Z @ 0x18012FFDC (-GetPowerStatus@CMonitor@@AEAA_NPEAE@Z.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x1801321C8 (-Stop@CMonitor@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CMonitor::Start(CMonitor *this)
{
  HRESULT v2; // ebx
  CAudioSessionManager *v3; // rcx
  int v4; // r9d
  __int64 v6; // rcx
  LPVOID v7; // r9
  __int64 v8; // [rsp+30h] [rbp-20h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-18h] BYREF
  char v10; // [rsp+40h] [rbp-10h]
  int v11; // [rsp+80h] [rbp+30h] BYREF
  LPVOID ppv; // [rsp+88h] [rbp+38h] BYREF
  __int64 v13; // [rsp+90h] [rbp+40h] BYREF
  __int64 v14; // [rsp+98h] [rbp+48h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v10 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = 0;
  v3 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Au,
      (__int64)&WPP_bd59d04cb15c3bed485848ef4f6ee602_Traceguids,
      this);
    v3 = WPP_GLOBAL_Control;
  }
  v4 = *((_DWORD *)this + 14);
  if ( ((v4 - 2) & 0xFFFFFFFD) == 0 )
  {
    if ( *((_BYTE *)this + 61) && CMonitor::GetPowerStatus(this, (unsigned __int8 *)&v11) && (v11 & 0xFD) == 0 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Bu, (__int64)&WPP_bd59d04cb15c3bed485848ef4f6ee602_Traceguids);
      }
    }
    else
    {
      ppv = 0LL;
      v14 = 0LL;
      v13 = 0LL;
      v11 = 0;
      v2 = CoCreateInstance(
             &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
             0LL,
             0x17u,
             &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
             &ppv);
      if ( v2 >= 0 )
      {
        v6 = 0LL;
        v8 = 0LL;
        v7 = ppv;
        if ( ppv )
        {
          (**(void (__fastcall ***)(LPVOID, GUID *, __int64 *))ppv)(
            ppv,
            &GUID_8a189c00_2dd1_4f94_bfab_31ac1deb05d0,
            &v8);
          v7 = ppv;
          v6 = v8;
        }
        if ( v6 )
        {
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 88LL))(v6, 1LL);
          v7 = ppv;
        }
        v2 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64 *))(*(_QWORD *)v7 + 40LL))(
               v7,
               *((_QWORD *)this + 17),
               &v14);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v8);
        if ( v2 >= 0 )
          v2 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v14 + 24LL))(
                 v14,
                 &GUID_5cdf2c82_841e_4546_9722_0cf74078229a,
                 1LL);
      }
      if ( !*((_BYTE *)this + 68)
        || v2 < 0
        || (v2 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v13 + 120LL))(v13, &v11), v2 < 0)
        || !v11 )
      {
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v13);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v14);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&ppv);
        if ( v2 >= 0 )
        {
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x2Du,
              (__int64)&WPP_bd59d04cb15c3bed485848ef4f6ee602_Traceguids);
          }
          *((_DWORD *)this + 14) = 3;
          v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 80LL))(*((_QWORD *)this + 11));
          if ( v2 < 0
            || (v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 80LL))(*((_QWORD *)this + 18)),
                v2 < 0) )
          {
            if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
            {
              WPP_SF_d(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0x2Fu,
                (__int64)&WPP_bd59d04cb15c3bed485848ef4f6ee602_Traceguids,
                v2);
            }
            CMonitor::Stop(this);
          }
        }
        goto LABEL_46;
      }
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Cu, (__int64)&WPP_bd59d04cb15c3bed485848ef4f6ee602_Traceguids);
      }
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v13);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v14);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&ppv);
    }
    ATL::CCritSecLock::~CCritSecLock(&lpCriticalSection);
    return 1LL;
  }
  if ( v3 != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)v3 + 7) & 0x800000) != 0
    && *((_BYTE *)v3 + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)v3 + 2), 0x2Eu, (__int64)&WPP_bd59d04cb15c3bed485848ef4f6ee602_Traceguids, v4);
  }
LABEL_46:
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v2;
}
