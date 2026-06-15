/*
 * XREFs of ?PersistMuteState@CMuteSoftware@@AEAAXXZ @ 0x18011117C
 * Callers:
 *     ?ProviderFinalRelease@CMuteSoftware@@UEAAXXZ @ 0x180111400 (-ProviderFinalRelease@CMuteSoftware@@UEAAXXZ.c)
 *     std::_Func_impl_no_alloc__lambda_9b74c3d0faed76deb923d29084677877__void_::_Do_call @ 0x180111920 (std--_Func_impl_no_alloc__lambda_9b74c3d0faed76deb923d29084677877__void_--_Do_call.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x1800DDE2C (WPP_SF_S.c)
 *     WPP_SF_Sl @ 0x180111930 (WPP_SF_Sl.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CMuteSoftware::PersistMuteState(CMuteSoftware *this)
{
  struct IMMDeviceEnumeratorVtbl *lpVtbl; // rax
  int v3; // eax
  __int64 v4; // rax
  int v5; // eax
  int v6; // r8d
  PROPVARIANT pvar[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v8; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v10; // [rsp+70h] [rbp+20h] BYREF
  __int64 *v11; // [rsp+78h] [rbp+28h] BYREF

  if ( _InterlockedExchange((volatile __int32 *)this + 24, 0) )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x18u,
        (__int64)&WPP_b59e46f8e1d3357e5cf7fea32cbfdd1a_Traceguids,
        *((const wchar_t **)this + 4));
    }
    v11 = 0LL;
    lpVtbl = g_DeviceEnumerator->lpVtbl;
    v11 = 0LL;
    v3 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, _QWORD, __int64 **))lpVtbl->GetDevice)(
           g_DeviceEnumerator,
           *((_QWORD *)this + 4),
           &v11);
    if ( v3 >= 0 )
    {
      v10 = 0LL;
      v4 = *v11;
      v10 = 0LL;
      v5 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v4 + 32))(v11, 1LL, &v10);
      if ( v5 >= 0 )
      {
        *(_OWORD *)pvar = 0LL;
        v8 = 0LL;
        LOWORD(pvar[0]) = 11;
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_Sl(*((_QWORD *)WPP_GLOBAL_Control + 2), 25, v6, *((_QWORD *)this + 4), *((_DWORD *)this + 6));
        }
        if ( *((_DWORD *)this + 6) )
          LOWORD(pvar[1]) = -1;
        else
          LOWORD(pvar[1]) = 0;
        (*(void (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v10 + 48LL))(
          v10,
          &PKEY_APO_MasterMute,
          pvar);
        PropVariantClear(pvar);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2DA,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
          (const char *)(unsigned int)v5);
      }
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v10);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2D7,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
        (const char *)(unsigned int)v3);
    }
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v11);
  }
}
