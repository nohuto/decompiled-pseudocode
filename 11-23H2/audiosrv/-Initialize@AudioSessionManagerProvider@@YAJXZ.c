/*
 * XREFs of ?Initialize@AudioSessionManagerProvider@@YAJXZ @ 0x180057C4C
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x1800594F8 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VDynamicAudioEndpointManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVDynamicAudioEndpointManager@@@Z @ 0x180058738 (--$MakeAndInitialize@VDynamicAudioEndpointManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVDynam.c)
 *     ?CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z @ 0x180063CCC (-CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
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
  DynamicAudioEndpointManager *v15; // [rsp+30h] [rbp-18h] BYREF
  __int64 v16[2]; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+20h]
  struct IAudioPolicyManager *v18; // [rsp+70h] [rbp+28h] BYREF
  struct ITelephonyControl *v19; // [rsp+78h] [rbp+30h] BYREF
  struct IAudioDuckingManager *v20; // [rsp+80h] [rbp+38h] BYREF
  struct ISessionInternalEvents *v21; // [rsp+88h] [rbp+40h] BYREF

  v16[0] = 0LL;
  v1 = (**(__int64 (__fastcall ***)(struct IAudioResourceManager *, GUID *, __int64 *))g_AudioResourceManager)(
         g_AudioResourceManager,
         &GUID_00d73368_f0b0_4e37_ac78_4802c792d4cb,
         v16);
  v2 = v1;
  if ( v1 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x68,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
      (const char *)(unsigned int)v1);
    goto LABEL_8;
  }
  v19 = 0LL;
  v3 = PhoneCallAudio::CreateInstance(&v19);
  v2 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6C,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
      (const char *)(unsigned int)v3);
LABEL_13:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
    goto LABEL_8;
  }
  v18 = 0LL;
  v4 = v19;
  v5 = ActivatePolicyManager(g_pEndpointCharacteristicsCache, g_pVolumeProvider, v16[0], v19, &v18);
  v2 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
      (const char *)(unsigned int)v5);
LABEL_12:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
    goto LABEL_13;
  }
  v21 = 0LL;
  v6 = (**(__int64 (__fastcall ***)(struct IAudioPolicyManager *, GUID *, __int64 *))v18)(
         v18,
         &GUID_a68ab569_b923_4330_a258_1735412d392e,
         (__int64 *)&v21);
  v2 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x72,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
      (const char *)(unsigned int)v6);
LABEL_17:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v21);
    goto LABEL_12;
  }
  v20 = 0LL;
  v7 = *(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v18;
  v20 = 0LL;
  v8 = ((__int64 (__fastcall *)(struct IAudioPolicyManager *, struct IAudioDuckingManager **))v7[3])(v18, &v20);
  v2 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
      (const char *)(unsigned int)v8);
LABEL_16:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
    goto LABEL_17;
  }
  v15 = 0LL;
  v9 = Microsoft::WRL::Details::MakeAndInitialize<DynamicAudioEndpointManager,DynamicAudioEndpointManager,>(&v15);
  v2 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x78,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
      (const char *)(unsigned int)v9);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v15);
    goto LABEL_16;
  }
  v10 = v20;
  v20 = 0LL;
  g_DuckingManager = v10;
  v11 = v18;
  v18 = 0LL;
  g_PolicyManager = v11;
  v12 = v21;
  v21 = 0LL;
  g_PolicyEventsHandler = v12;
  v19 = 0LL;
  g_TelephonyControl = (struct IUnknown *)v4;
  v13 = v15;
  v15 = 0LL;
  g_DynamicAudioEndpointManager = v13;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v15);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v21);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
  v2 = 0;
LABEL_8:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v16);
  return v2;
}
