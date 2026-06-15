/*
 * XREFs of ?MuteControlsOnPath@CMonitor@@CAJPEAUIPartsList@@@Z @ 0x180130D00
 * Callers:
 *     ?MuteInputLineControls@CMonitor@@CAJPEAUIMMDevice@@0@Z @ 0x180130F80 (-MuteInputLineControls@CMonitor@@CAJPEAUIMMDevice@@0@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800DDCA8 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800DDE44 (WPP_SF_d.c)
 *     WPP_SF_q @ 0x1800E3ED0 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CMonitor::MuteControlsOnPath(struct IPartsList *a1)
{
  bool v2; // di
  int v3; // ebx
  unsigned int v4; // esi
  int v6; // [rsp+70h] [rbp+38h] BYREF
  unsigned int v7; // [rsp+78h] [rbp+40h] BYREF
  __int64 v8; // [rsp+80h] [rbp+48h] BYREF
  __int64 v9; // [rsp+88h] [rbp+50h] BYREF

  v2 = 0;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x37u, (__int64)&WPP_bd59d04cb15c3bed485848ef4f6ee602_Traceguids);
  }
  v3 = ((__int64 (__fastcall *)(struct IPartsList *, int *))a1->lpVtbl->GetCount)(a1, &v6);
  if ( v3 >= 0 )
  {
    v4 = 0;
    if ( v6 == 1 )
      return 0;
    while ( 1 )
    {
      v8 = 0LL;
      v3 = ((__int64 (__fastcall *)(struct IPartsList *, _QWORD, __int64 *))a1->lpVtbl->GetPart)(a1, v4, &v8);
      if ( v3 < 0 )
        break;
      if ( v2 )
        goto LABEL_12;
      v9 = 0LL;
      v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 80LL))(v8, &v9);
      if ( v3 < 0 )
        goto LABEL_21;
      v3 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v9 + 24LL))(v9, &v7);
      if ( v3 < 0 )
        goto LABEL_21;
      v2 = v7 > 1;
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v9);
      if ( v2 )
      {
LABEL_12:
        v9 = 0LL;
        if ( (*(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v8 + 104LL))(
               v8,
               23LL,
               &GUID_df45aeea_b74a_4b6b_afad_2366b6aa012e,
               &v9) >= 0 )
        {
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x3Au,
              (__int64)&WPP_bd59d04cb15c3bed485848ef4f6ee602_Traceguids,
              v8);
          }
          v3 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v9 + 24LL))(v9, 1LL, 0LL);
          if ( v3 < 0 )
          {
LABEL_21:
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v9);
            break;
          }
        }
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v9);
      }
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v8);
      if ( ++v4 >= v6 - 1 )
        return 0;
    }
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v8);
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x3Bu, (__int64)&WPP_bd59d04cb15c3bed485848ef4f6ee602_Traceguids, v3);
  }
  return (unsigned int)v3;
}
