/*
 * XREFs of ?MuteInputLineControls@CMonitor@@CAJPEAUIMMDevice@@0@Z @ 0x180130F80
 * Callers:
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0AEA_N@Z @ 0x1801302BC (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0AEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800DDCA8 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800DDE44 (WPP_SF_d.c)
 *     WPP_SF_qq @ 0x1800E42B8 (WPP_SF_qq.c)
 *     ?GetTopologyPartForDevice@CMonitor@@CAJPEAUIMMDevice@@PEAPEAUIPart@@@Z @ 0x18012FFF0 (-GetTopologyPartForDevice@CMonitor@@CAJPEAUIMMDevice@@PEAPEAUIPart@@@Z.c)
 *     ?MuteControlsOnPath@CMonitor@@CAJPEAUIPartsList@@@Z @ 0x180130D00 (-MuteControlsOnPath@CMonitor@@CAJPEAUIPartsList@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CMonitor::MuteInputLineControls(struct IMMDevice *a1, struct IMMDevice *a2)
{
  int TopologyPartForDevice; // ebx
  int v5; // eax
  struct IPartsList *v7; // [rsp+30h] [rbp-10h] BYREF
  struct IPart *v8; // [rsp+38h] [rbp-8h] BYREF
  __int64 v9; // [rsp+70h] [rbp+30h] BYREF
  struct IPart *v10; // [rsp+78h] [rbp+38h] BYREF

  v10 = 0LL;
  v8 = 0LL;
  v7 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x34u,
      (__int64)&WPP_bd59d04cb15c3bed485848ef4f6ee602_Traceguids,
      a1,
      a2);
  }
  TopologyPartForDevice = CMonitor::GetTopologyPartForDevice(a1, &v10);
  if ( TopologyPartForDevice < 0 )
    goto LABEL_19;
  TopologyPartForDevice = CMonitor::GetTopologyPartForDevice(a2, &v8);
  if ( TopologyPartForDevice < 0 )
    goto LABEL_19;
  v9 = 0LL;
  TopologyPartForDevice = ((__int64 (__fastcall *)(struct IPart *, __int64 *))v10->lpVtbl->GetTopologyObject)(v10, &v9);
  if ( TopologyPartForDevice >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, struct IPart *, struct IPart *, _QWORD, struct IPartsList **))(*(_QWORD *)v9 + 72LL))(
           v9,
           v10,
           v8,
           0LL,
           &v7);
    TopologyPartForDevice = v5;
    if ( v5 >= 0 )
    {
      TopologyPartForDevice = CMonitor::MuteControlsOnPath(v7);
    }
    else if ( v5 == -2147023728 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x35u, (__int64)&WPP_bd59d04cb15c3bed485848ef4f6ee602_Traceguids);
      }
      TopologyPartForDevice = 0;
    }
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v9);
  if ( TopologyPartForDevice < 0 )
  {
LABEL_19:
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x36u,
        (__int64)&WPP_bd59d04cb15c3bed485848ef4f6ee602_Traceguids,
        TopologyPartForDevice);
    }
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v7);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v8);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v10);
  return (unsigned int)TopologyPartForDevice;
}
