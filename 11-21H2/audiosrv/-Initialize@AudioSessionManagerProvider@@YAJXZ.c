/*
 * XREFs of ?Initialize@AudioSessionManagerProvider@@YAJXZ @ 0x180050030
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18005207C (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800026F0 (--1-$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$MakeAndInitialize@VDynamicAudioEndpointManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVDynamicAudioEndpointManager@@@Z @ 0x18004AC64 (--$MakeAndInitialize@VDynamicAudioEndpointManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVDynam.c)
 *     ?CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z @ 0x18005A628 (-CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall AudioSessionManagerProvider::Initialize(AudioSessionManagerProvider *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  int v3; // eax
  struct ITelephonyControl *v4; // rdi
  int v5; // eax
  int v6; // eax
  __int64 (__fastcall **v7)(_QWORD, _QWORD, _QWORD); // rax
  int v8; // eax
  int v9; // eax
  struct IAudioDuckingManager *v10; // rax
  struct IAudioPolicyManager *v11; // rax
  struct ISessionInternalEvents *v12; // rax
  DynamicAudioEndpointManager *v13; // rax
  int v15; // [rsp+20h] [rbp-28h]
  int v16; // [rsp+20h] [rbp-28h]
  struct ITelephonyControl *v17; // [rsp+30h] [rbp-18h] BYREF
  __int64 v18[2]; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+20h]
  struct IAudioPolicyManager *v20; // [rsp+70h] [rbp+28h] BYREF
  struct IAudioDuckingManager *v21; // [rsp+78h] [rbp+30h] BYREF
  DynamicAudioEndpointManager *v22; // [rsp+80h] [rbp+38h] BYREF
  struct ISessionInternalEvents *v23; // [rsp+88h] [rbp+40h] BYREF

  v18[0] = 0LL;
  v1 = (**(__int64 (__fastcall ***)(struct IAudioResourceManager *, GUID *, __int64 *))g_AudioResourceManager)(
         g_AudioResourceManager,
         &GUID_00d73368_f0b0_4e37_ac78_4802c792d4cb,
         v18);
  v2 = v1;
  if ( v1 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E8,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h",
      (const char *)(unsigned int)v1,
      v15);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x68,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
      (const char *)v2,
      v16);
  }
  else
  {
    v17 = 0LL;
    v3 = PhoneCallAudio::CreateInstance(&v17);
    v2 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6C,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
        (const char *)(unsigned int)v3,
        v15);
    }
    else
    {
      v20 = 0LL;
      v4 = v17;
      v5 = ActivatePolicyManager(g_pEndpointCharacteristicsCache, g_pVolumeProvider, v18[0], v17);
      v2 = v5;
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x6F,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
          (const char *)(unsigned int)v5,
          (int)&v20);
      }
      else
      {
        v23 = 0LL;
        v6 = (**(__int64 (__fastcall ***)(struct IAudioPolicyManager *, GUID *, __int64 *))v20)(
               v20,
               &GUID_a68ab569_b923_4330_a258_1735412d392e,
               (__int64 *)&v23);
        v2 = v6;
        if ( v6 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x72,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
            (const char *)(unsigned int)v6,
            (int)&v20);
        }
        else
        {
          v21 = 0LL;
          v7 = *(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v20;
          v21 = 0LL;
          v8 = ((__int64 (__fastcall *)(struct IAudioPolicyManager *, struct IAudioDuckingManager **))v7[3])(v20, &v21);
          v2 = v8;
          if ( v8 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x75,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
              (const char *)(unsigned int)v8,
              (int)&v20);
          }
          else
          {
            v22 = 0LL;
            v9 = Microsoft::WRL::Details::MakeAndInitialize<DynamicAudioEndpointManager,DynamicAudioEndpointManager,>(&v22);
            v2 = v9;
            if ( v9 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x78,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
                (const char *)(unsigned int)v9,
                (int)&v20);
            }
            else
            {
              v10 = v21;
              v21 = 0LL;
              g_DuckingManager = v10;
              v11 = v20;
              v20 = 0LL;
              g_PolicyManager = v11;
              v12 = v23;
              v23 = 0LL;
              g_PolicyEventsHandler = v12;
              v17 = 0LL;
              g_TelephonyControl = (struct IUnknown *)v4;
              v13 = v22;
              v22 = 0LL;
              g_DynamicAudioEndpointManager = v13;
              v2 = 0;
            }
            wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>((__int64 *)&v22);
          }
          wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>((__int64 *)&v21);
        }
        wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>((__int64 *)&v23);
      }
      wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>((__int64 *)&v20);
    }
    wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>((__int64 *)&v17);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v18);
  return v2;
}
