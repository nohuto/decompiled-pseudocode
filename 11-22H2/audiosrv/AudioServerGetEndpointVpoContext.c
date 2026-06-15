/*
 * XREFs of AudioServerGetEndpointVpoContext @ 0x180121E70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180021F60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180024C18 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180027120 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180035FF0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180048A20 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CHMDManager@@QEAA@XZ @ 0x18010F5D8 (--1CHMDManager@@QEAA@XZ.c)
 *     ??$make_unique@VCVpoContextProxy@@$$TPEAUISaDeviceProxy@@PEAUIVpoContext@@$0A@@std@@YA?AV?$unique_ptr@VCVpoContextProxy@@U?$default_delete@VCVpoContextProxy@@@std@@@0@$$QEA$$T$$QEAPEAUISaDeviceProxy@@$$QEAPEAUIVpoContext@@@Z @ 0x18011C300 (--$make_unique@VCVpoContextProxy@@$$TPEAUISaDeviceProxy@@PEAUIVpoContext@@$0A@@std@@YA-AV-$uniqu.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall AudioServerGetEndpointVpoContext(
        __int64 a1,
        const unsigned __int16 *a2,
        __int64 a3,
        CHMDManager **a4)
{
  __int64 pftDueTime; // rbx
  unsigned int v8; // edi
  __int64 *v9; // rax
  CEndpointStoreCache *v10; // rcx
  int EndpointStore; // eax
  unsigned int v12; // ebx
  const char *v13; // r9
  __int64 result; // rax
  struct CEndpointStore *v15; // rbx
  __int64 v16; // rsi
  __int64 (__fastcall *v17)(__int64, struct ISaDeviceProxy **); // rdi
  int v18; // eax
  unsigned int v19; // edi
  __int64 v20; // rax
  int v21; // eax
  unsigned int v22; // edi
  CHMDManager *v23; // rdi
  int v24; // eax
  unsigned int v25; // esi
  struct ISaDeviceProxy *v26; // [rsp+30h] [rbp-78h] BYREF
  struct IVpoContext *v27; // [rsp+38h] [rbp-70h] BYREF
  struct CEndpointStore *v28; // [rsp+40h] [rbp-68h] BYREF
  struct IVpoContext *v29; // [rsp+48h] [rbp-60h] BYREF
  struct ISaDeviceProxy *v30; // [rsp+50h] [rbp-58h] BYREF
  struct ISubmixProxy *v31; // [rsp+58h] [rbp-50h] BYREF
  CHMDManager *v32; // [rsp+60h] [rbp-48h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+68h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  pftDueTime = (__int64)g_AudioHealthMonitor;
  v8 = g_AudioSrvWatchDogTimerInMs;
  v9 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
         a1,
         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    (struct _TP_TIMER *)v9[1],
    v8,
    (struct _TP_TIMER *)L"AudioServerGetEndpointVpoContext",
    pftDueTime);
  v28 = 0LL;
  try
  {
    EndpointStore = CEndpointStoreCache::GetEndpointStore(v10, a2, &v28);
    v12 = EndpointStore;
    if ( EndpointStore >= 0 )
    {
      v26 = 0LL;
      v15 = v28;
      v16 = *((_QWORD *)v28 + 13);
      v17 = *(__int64 (__fastcall **)(__int64, struct ISaDeviceProxy **))(*(_QWORD *)v16 + 128LL);
      wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset((__int64 *)&v26);
      v18 = v17(v16, &v26);
      v19 = v18;
      if ( v18 >= 0 )
      {
        v27 = 0LL;
        v20 = *(_QWORD *)v26;
        v27 = 0LL;
        v21 = (*(__int64 (__fastcall **)(struct ISaDeviceProxy *, struct IVpoContext **))(v20 + 96))(v26, &v27);
        v22 = v21;
        if ( v21 >= 0 )
        {
          v29 = v27;
          v30 = v26;
          v31 = 0LL;
          std::make_unique<CVpoContextProxy,std::nullptr_t,ISaDeviceProxy *,IVpoContext *,0>(&v32, &v31, &v30, &v29);
          v23 = v32;
          if ( v32 )
          {
            v24 = (*(__int64 (__fastcall **)(struct IVpoContext *, __int64))(*(_QWORD *)v27 + 32LL))(v27, a3);
            v25 = v24;
            if ( v24 >= 0 )
            {
              *a4 = v23;
              wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v27);
              wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v26);
              Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v15);
              CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
              result = 0LL;
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xB21,
                (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                (const char *)(unsigned int)v24);
              CHMDManager::~CHMDManager(v23);
              operator delete(v23);
              wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v27);
              wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v26);
              Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v15);
              CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
              result = v25;
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xB1E,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
              (const char *)0x8007000ELL);
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v27);
            wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v26);
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v15);
            CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
            result = 2147942414LL;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xB1B,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)v21);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v27);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v26);
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v15);
          CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
          result = v22;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB18,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v18);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v26);
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v15);
        CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
        result = v19;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB15,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)EndpointStore);
      if ( v28 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v28);
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
      result = v12;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xB26,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                           v13);
  }
  return result;
}
