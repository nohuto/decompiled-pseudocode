/*
 * XREFs of ?CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x180114628
 * Callers:
 *     ?GetSaDeviceForSharedStream@CBtAudioResourceManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x180116790 (-GetSaDeviceForSharedStream@CBtAudioResourceManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDe.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180025560 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B4B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x18005D5D8 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_CRITICAL_SECTION@@@Z @ 0x1800DB54C (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCritic.c)
 *     ?CreateHfpRenderSaDeviceWithDefaultParameters@CBtAudioResourceManager@@AEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x1801140E0 (-CreateHfpRenderSaDeviceWithDefaultParameters@CBtAudioResourceManager@@AEAAJPEAPEAUISaDeviceProx.c)
 *     ?DoHfpSharedModeRenderSaDevicesExist@CBtAudioResourceManager@@AEAA_NPEAVCEndpointStore@@PEAPEAUISaDeviceProxy@@@Z @ 0x18011519C (-DoHfpSharedModeRenderSaDevicesExist@CBtAudioResourceManager@@AEAA_NPEAVCEndpointStore@@PEAPEAUI.c)
 *     ?DoMicrophoneSaDevicesExist@CBtAudioResourceManager@@AEAA_NPEAVCEndpointStore@@@Z @ 0x1801152DC (-DoMicrophoneSaDevicesExist@CBtAudioResourceManager@@AEAA_NPEAVCEndpointStore@@@Z.c)
 *     ?FreeA2dpRenderSaDevicesAndSaveDisplacedStreamGroups@CBtAudioResourceManager@@AEAAJPEAVCEndpointStore@@@Z @ 0x180115394 (-FreeA2dpRenderSaDevicesAndSaveDisplacedStreamGroups@CBtAudioResourceManager@@AEAAJPEAVCEndpoint.c)
 *     ?MoveDisplacedA2dpStreamGroupsToSaDevice@CBtAudioResourceManager@@AEAAJPEAUISaDeviceProxy@@@Z @ 0x180116A34 (-MoveDisplacedA2dpStreamGroupsToSaDevice@CBtAudioResourceManager@@AEAAJPEAUISaDeviceProxy@@@Z.c)
 *     ?RestoreDisplacedA2dpStreamGroups@CBtAudioResourceManager@@AEAAJXZ @ 0x180116D54 (-RestoreDisplacedA2dpStreamGroups@CBtAudioResourceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CBtAudioResourceManager::CreateSaDeviceOnRenderEndpoint(
        CBtAudioResourceManager *this,
        struct CEndpointCharacteristics *a2,
        struct SaDeviceParams *a3,
        unsigned int a4,
        enum _AUDCLNT_SHAREMODE a5,
        struct SaDeviceResourceParams *a6,
        struct ISaDeviceProxy **a7)
{
  bool v11; // di
  const unsigned __int16 *v12; // rdx
  int EndpointStore; // eax
  unsigned int v14; // ebx
  const char *v15; // r9
  __int64 result; // rax
  struct CEndpointStore *v17; // rbx
  struct _RTL_CRITICAL_SECTION **v18; // rdi
  CBtAudioResourceManager *v19; // rcx
  int v20; // eax
  struct CEndpointStore *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // eax
  unsigned int v25; // edi
  CBtAudioResourceManager *v26; // rcx
  int HfpRenderSaDeviceWithDefaultParameters; // eax
  unsigned int v28; // edi
  __int64 v29; // rax
  __int64 *v30; // rcx
  bool v31; // zf
  __int64 v32; // rax
  int v33; // eax
  unsigned int v34; // edi
  __int64 (__fastcall *v35)(struct IDeviceGraphManager *, struct CEndpointCharacteristics *, struct SaDeviceParams *, _QWORD, enum _AUDCLNT_SHAREMODE, struct SaDeviceResourceParams *, _QWORD, _QWORD, struct ISaDeviceProxy **); // rdi
  int v36; // eax
  unsigned int v37; // edi
  int v38; // eax
  unsigned int v39; // edi
  CBtAudioResourceManager *v40; // rcx
  int v41; // eax
  unsigned int v42; // edi
  struct _RTL_CRITICAL_SECTION *v43; // [rsp+50h] [rbp-58h] BYREF
  struct ISaDeviceProxy *v44; // [rsp+58h] [rbp-50h] BYREF
  struct CEndpointStore *v45[2]; // [rsp+60h] [rbp-48h] BYREF
  char v46; // [rsp+70h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v48; // [rsp+B0h] [rbp+8h] BYREF

  try
  {
    v11 = 0;
    v48 = 0LL;
    v12 = (const unsigned __int16 *)*((_QWORD *)this + 6);
    if ( v12 )
    {
      v44 = 0LL;
      EndpointStore = CEndpointStoreCache::GetEndpointStore((RTL_SRWLOCK *)this, v12, &v44);
      v14 = EndpointStore;
      if ( EndpointStore < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x32C,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
          (const char *)(unsigned int)EndpointStore);
        if ( v44 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v44);
LABEL_6:
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v48);
        return v14;
      }
      v17 = v44;
      v18 = (struct _RTL_CRITICAL_SECTION **)(*(__int64 (__fastcall **)(_QWORD, struct CEndpointStore **))(**((_QWORD **)v44 + 13) + 120LL))(
                                               *((_QWORD *)v44 + 13),
                                               v45);
      if ( &v48 != v18 )
      {
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::reset(
          &v48,
          *v18);
        *v18 = 0LL;
      }
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>((struct _RTL_CRITICAL_SECTION **)v45);
      v11 = CBtAudioResourceManager::DoMicrophoneSaDevicesExist(v19, v17);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v17);
    }
    v45[0] = 0LL;
    v20 = CEndpointStoreCache::GetEndpointStore((RTL_SRWLOCK *)this, *((const unsigned __int16 **)this + 5), v45);
    v14 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x335,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
        (const char *)(unsigned int)v20);
      if ( v45[0] )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v45[0]);
      goto LABEL_6;
    }
    v21 = v45[0];
    (*(void (__fastcall **)(_QWORD, struct _RTL_CRITICAL_SECTION **))(**((_QWORD **)v45[0] + 13) + 120LL))(
      *((_QWORD *)v45[0] + 13),
      &v43);
    v22 = *((_QWORD *)a3 + 6);
    if ( v11 )
    {
      v23 = v22 - 0x48B1B9CD98951333LL;
      if ( !v23 )
        v23 = *((_QWORD *)a3 + 7) + 0x88CD297BF005C60LL;
      if ( !v23 )
      {
        v24 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, struct CEndpointCharacteristics *, struct SaDeviceParams *, _QWORD, enum _AUDCLNT_SHAREMODE, struct SaDeviceResourceParams *, _QWORD, _QWORD, struct ISaDeviceProxy **))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
                g_DeviceGraphManager,
                a2,
                a3,
                a4,
                a5,
                a6,
                0LL,
                0LL,
                a7);
        v25 = v24;
        if ( v24 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x340,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
            (const char *)(unsigned int)v24);
          wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v43);
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v21);
          wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v48);
          return v25;
        }
        goto LABEL_44;
      }
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v21 + 13) + 136LL))(
             *((_QWORD *)v21 + 13),
             1LL) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x349,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
          (const char *)0x887C007ALL);
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v43);
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v21);
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v48);
        return 2289827962LL;
      }
      v44 = 0LL;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v44);
      if ( CBtAudioResourceManager::DoHfpSharedModeRenderSaDevicesExist(v26, v21, &v44) )
      {
LABEL_23:
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v44);
        *a7 = v44;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v44);
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v43);
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v21);
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v48);
        return 0LL;
      }
      HfpRenderSaDeviceWithDefaultParameters = CBtAudioResourceManager::CreateHfpRenderSaDeviceWithDefaultParameters(
                                                 this,
                                                 a7);
      v28 = HfpRenderSaDeviceWithDefaultParameters;
      if ( HfpRenderSaDeviceWithDefaultParameters < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x355,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
          (const char *)(unsigned int)HfpRenderSaDeviceWithDefaultParameters);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v44);
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v43);
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v21);
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v48);
        return v28;
      }
    }
    else
    {
      v29 = v22 - 0x48B1B9CD98951333LL;
      if ( !v29 )
        v29 = *((_QWORD *)a3 + 7) + 0x88CD297BF005C60LL;
      v30 = (__int64 *)*((_QWORD *)v21 + 13);
      v31 = v29 == 0;
      v32 = *v30;
      if ( v31 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(v32 + 136))(v30, 1LL) )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x361,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
            (const char *)0x887C005CLL);
          wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v43);
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v21);
          wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v48);
          return 2289827932LL;
        }
        v45[1] = this;
        v46 = 1;
        v33 = CBtAudioResourceManager::FreeA2dpRenderSaDevicesAndSaveDisplacedStreamGroups(this, v21);
        v34 = v33;
        if ( v33 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x369,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
            (const char *)(unsigned int)v33);
          CBtAudioResourceManager::RestoreDisplacedA2dpStreamGroups(this);
          wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v43);
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v21);
          wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v48);
          return v34;
        }
        v44 = 0LL;
        v35 = *(__int64 (__fastcall **)(struct IDeviceGraphManager *, struct CEndpointCharacteristics *, struct SaDeviceParams *, _QWORD, enum _AUDCLNT_SHAREMODE, struct SaDeviceResourceParams *, _QWORD, _QWORD, struct ISaDeviceProxy **))(*(_QWORD *)g_DeviceGraphManager + 24LL);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v44);
        v36 = v35(g_DeviceGraphManager, a2, a3, a4, a5, a6, 0LL, 0LL, &v44);
        v37 = v36;
        if ( v36 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x36D,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
            (const char *)(unsigned int)v36);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v44);
          CBtAudioResourceManager::RestoreDisplacedA2dpStreamGroups(this);
          wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v43);
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v21);
          wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v48);
          return v37;
        }
        v38 = CBtAudioResourceManager::MoveDisplacedA2dpStreamGroupsToSaDevice(this, v44);
        v39 = v38;
        if ( v38 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x370,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
            (const char *)(unsigned int)v38);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v44);
          CBtAudioResourceManager::RestoreDisplacedA2dpStreamGroups(this);
          wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v43);
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v21);
          wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v48);
          return v39;
        }
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v44);
        *a7 = v44;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v44);
        goto LABEL_44;
      }
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(v32 + 136))(v30, 1LL) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x37C,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
          (const char *)0x887C005CLL);
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v43);
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v21);
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v48);
        return 2289827932LL;
      }
      v44 = 0LL;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v44);
      if ( CBtAudioResourceManager::DoHfpSharedModeRenderSaDevicesExist(v40, v21, &v44) )
        goto LABEL_23;
      v41 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, struct CEndpointCharacteristics *, struct SaDeviceParams *, _QWORD, enum _AUDCLNT_SHAREMODE, struct SaDeviceResourceParams *, _QWORD, _QWORD, struct ISaDeviceProxy **))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
              g_DeviceGraphManager,
              a2,
              a3,
              a4,
              a5,
              a6,
              0LL,
              0LL,
              a7);
      v42 = v41;
      if ( v41 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x389,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
          (const char *)(unsigned int)v41);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v44);
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v43);
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v21);
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v48);
        return v42;
      }
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v44);
LABEL_44:
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v43);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v21);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v48);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x390,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
                           v15);
  }
  return result;
}
