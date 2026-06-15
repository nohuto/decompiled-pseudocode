/*
 * XREFs of AudioServerGetEndpointVpoContext @ 0x1800F2280
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180007510 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800214C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180025560 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B4B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C7E10 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ??$make_unique@VCVpoContextProxy@@$$TPEAUISaDeviceProxy@@PEAUIVpoContext@@$0A@@std@@YA?AV?$unique_ptr@VCVpoContextProxy@@U?$default_delete@VCVpoContextProxy@@@std@@@0@$$QEA$$T$$QEAPEAUISaDeviceProxy@@$$QEAPEAUIVpoContext@@@Z @ 0x1800ED63C (--$make_unique@VCVpoContextProxy@@$$TPEAUISaDeviceProxy@@PEAUIVpoContext@@$0A@@std@@YA-AV-$uniqu.c)
 *     ??1CVpoContextProxy@@QEAA@XZ @ 0x1800ED9C8 (--1CVpoContextProxy@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall AudioServerGetEndpointVpoContext(
        __int64 a1,
        const unsigned __int16 *a2,
        __int64 a3,
        CVpoContextProxy **a4)
{
  __int64 pftDueTime; // rbx
  unsigned int v8; // edi
  __int64 *v9; // rax
  RTL_SRWLOCK *v10; // rcx
  int EndpointStore; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // r9d
  const char *v16; // r9
  __int64 result; // rax
  struct CEndpointStore *v18; // rbx
  __int64 v19; // rsi
  __int64 (__fastcall *v20)(__int64, struct ISaDeviceProxy **); // rdi
  int v21; // eax
  unsigned int v22; // edi
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // r9d
  __int64 v26; // rax
  int v27; // eax
  unsigned int v28; // edi
  __int64 v29; // rdx
  __int64 v30; // r8
  int v31; // r9d
  CVpoContextProxy *v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // r8
  int v35; // r9d
  int v36; // eax
  unsigned int v37; // esi
  __int64 v38; // rdx
  __int64 v39; // r8
  int v40; // r9d
  __int64 v41; // rdx
  __int64 v42; // r8
  int v43; // r9d
  struct ISaDeviceProxy *v44; // [rsp+30h] [rbp-78h] BYREF
  struct IVpoContext *v45; // [rsp+38h] [rbp-70h] BYREF
  struct CEndpointStore *v46; // [rsp+40h] [rbp-68h] BYREF
  struct IVpoContext *v47; // [rsp+48h] [rbp-60h] BYREF
  struct ISaDeviceProxy *v48; // [rsp+50h] [rbp-58h] BYREF
  struct ISubmixProxy *v49; // [rsp+58h] [rbp-50h] BYREF
  CVpoContextProxy *v50; // [rsp+60h] [rbp-48h] BYREF
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
  v46 = 0LL;
  try
  {
    EndpointStore = CEndpointStoreCache::GetEndpointStore(v10, a2, &v46);
    v12 = EndpointStore;
    if ( EndpointStore >= 0 )
    {
      v44 = 0LL;
      v18 = v46;
      v19 = *((_QWORD *)v46 + 13);
      v20 = *(__int64 (__fastcall **)(__int64, struct ISaDeviceProxy **))(*(_QWORD *)v19 + 128LL);
      wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&v44);
      v21 = v20(v19, &v44);
      v22 = v21;
      if ( v21 >= 0 )
      {
        v45 = 0LL;
        v26 = *(_QWORD *)v44;
        v45 = 0LL;
        v27 = (*(__int64 (__fastcall **)(struct ISaDeviceProxy *, struct IVpoContext **))(v26 + 96))(v44, &v45);
        v28 = v27;
        if ( v27 >= 0 )
        {
          v47 = v45;
          v48 = v44;
          v49 = 0LL;
          std::make_unique<CVpoContextProxy,std::nullptr_t,ISaDeviceProxy *,IVpoContext *,0>(&v50, &v49, &v48, &v47);
          v32 = v50;
          if ( v50 )
          {
            v36 = (*(__int64 (__fastcall **)(struct IVpoContext *, __int64))(*(_QWORD *)v45 + 32LL))(v45, a3);
            v37 = v36;
            if ( v36 >= 0 )
            {
              *a4 = v32;
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v44);
              Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v18);
              CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v41, v42, v43);
              result = 0LL;
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xB93,
                (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                (const char *)(unsigned int)v36);
              CVpoContextProxy::~CVpoContextProxy(v32);
              operator delete(v32);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v44);
              Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v18);
              CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v38, v39, v40);
              result = v37;
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xB90,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
              (const char *)0x8007000ELL);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v44);
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v18);
            CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v33, v34, v35);
            result = 2147942414LL;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xB8D,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)v27);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v44);
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v18);
          CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v29, v30, v31);
          result = v28;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB8A,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v21);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v44);
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v18);
        CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v23, v24, v25);
        result = v22;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB87,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)EndpointStore);
      if ( v46 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v46);
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv, v13, v14, v15);
      result = v12;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xB98,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                           v16);
  }
  return result;
}
