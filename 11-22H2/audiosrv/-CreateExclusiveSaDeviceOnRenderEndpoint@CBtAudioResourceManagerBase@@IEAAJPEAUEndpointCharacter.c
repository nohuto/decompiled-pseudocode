/*
 * XREFs of ?CreateExclusiveSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800F5B84
 * Callers:
 *     ?GetSaDeviceForExclusiveStream@CBtAudioResourceManagerBase@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800F8DF0 (-GetSaDeviceForExclusiveStream@CBtAudioResourceManagerBase@@UEAAJPEAUEndpointCharacteristicsDesc.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180021F60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180027120 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180045A40 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCritic.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DoMicrophoneSaDevicesExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpointStore@@@Z @ 0x1800F73AC (-DoMicrophoneSaDevicesExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpointStore@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CBtAudioResourceManagerBase::CreateExclusiveSaDeviceOnRenderEndpoint(
        CBtAudioResourceManagerBase *this,
        struct EndpointCharacteristicsDescriptor *a2,
        struct SaDeviceParams *a3,
        unsigned int a4,
        enum _AUDCLNT_SHAREMODE a5,
        struct SaDeviceResourceParams *a6,
        struct ISaDeviceProxy **a7)
{
  bool v11; // r14
  struct _RTL_CRITICAL_SECTION *v12; // rbx
  const unsigned __int16 *v13; // rdx
  int EndpointStore; // eax
  unsigned int v15; // edi
  const char *v16; // r9
  __int64 result; // rax
  struct CEndpointStore *v18; // rdi
  struct _RTL_CRITICAL_SECTION **v19; // r14
  CBtAudioResourceManagerBase *v20; // rcx
  int v21; // eax
  unsigned int v22; // edi
  struct CEndpointStore *v23; // rdi
  __int64 v24; // rax
  int v25; // eax
  unsigned int v26; // esi
  int v27; // eax
  unsigned int v28; // esi
  struct CEndpointStore *v29; // [rsp+50h] [rbp-48h] BYREF
  struct _RTL_CRITICAL_SECTION *v30; // [rsp+58h] [rbp-40h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+60h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  LPCRITICAL_SECTION v33; // [rsp+A0h] [rbp+8h] BYREF

  try
  {
    v11 = 0;
    v12 = 0LL;
    v30 = 0LL;
    v13 = (const unsigned __int16 *)*((_QWORD *)this + 7);
    if ( v13 )
    {
      v29 = 0LL;
      EndpointStore = CEndpointStoreCache::GetEndpointStore(this, v13, &v29);
      v15 = EndpointStore;
      if ( EndpointStore < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x379,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
          (const char *)(unsigned int)EndpointStore);
        if ( v29 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v29);
        return v15;
      }
      v18 = v29;
      v19 = (struct _RTL_CRITICAL_SECTION **)(*(__int64 (__fastcall **)(_QWORD, LPCRITICAL_SECTION *))(**((_QWORD **)v29 + 13) + 120LL))(
                                               *((_QWORD *)v29 + 13),
                                               lpCriticalSection);
      if ( &v30 != v19 )
      {
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::reset(
          &v30,
          *v19);
        *v19 = 0LL;
        v12 = v30;
      }
      v20 = (CBtAudioResourceManagerBase *)lpCriticalSection[0];
      if ( lpCriticalSection[0] )
        LeaveCriticalSection(lpCriticalSection[0]);
      v11 = CBtAudioResourceManagerBase::DoMicrophoneSaDevicesExist(v20, v18);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v18);
    }
    v29 = 0LL;
    v21 = CEndpointStoreCache::GetEndpointStore(this, *((const unsigned __int16 **)this + 6), &v29);
    v22 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x382,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
        (const char *)(unsigned int)v21);
      if ( v29 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v29);
      if ( v12 )
        LeaveCriticalSection(v12);
      return v22;
    }
    v23 = v29;
    (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *))(**((_QWORD **)v29 + 13) + 120LL))(
      *((_QWORD *)v29 + 13),
      &v33);
    v24 = *(_QWORD *)this;
    if ( v11 )
    {
      *(_OWORD *)lpCriticalSection = *((_OWORD *)a3 + 3);
      if ( (*(unsigned __int8 (__fastcall **)(CBtAudioResourceManagerBase *, LPCRITICAL_SECTION *))(v24 + 144))(
             this,
             lpCriticalSection) )
      {
        v25 = (*(__int64 (__fastcall **)(CBtAudioResourceManagerBase *, struct EndpointCharacteristicsDescriptor *, struct SaDeviceParams *, _QWORD, enum _AUDCLNT_SHAREMODE, struct SaDeviceResourceParams *, _QWORD, _QWORD, struct ISaDeviceProxy **))(*(_QWORD *)this + 152LL))(
                this,
                a2,
                a3,
                a4,
                a5,
                a6,
                0LL,
                0LL,
                a7);
        v26 = v25;
        if ( v25 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x38D,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
            (const char *)(unsigned int)v25);
          if ( v33 )
            LeaveCriticalSection(v33);
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v23);
          if ( v12 )
            LeaveCriticalSection(v12);
          return v26;
        }
        goto LABEL_37;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x392,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
        (const char *)0x887C007ALL);
      if ( v33 )
        LeaveCriticalSection(v33);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v23);
      if ( v12 )
        LeaveCriticalSection(v12);
      result = 2289827962LL;
    }
    else
    {
      v27 = (*(__int64 (__fastcall **)(CBtAudioResourceManagerBase *, struct EndpointCharacteristicsDescriptor *, struct SaDeviceParams *, _QWORD, enum _AUDCLNT_SHAREMODE, struct SaDeviceResourceParams *, _QWORD, _QWORD, struct ISaDeviceProxy **))(v24 + 152))(
              this,
              a2,
              a3,
              a4,
              a5,
              a6,
              0LL,
              0LL,
              a7);
      v28 = v27;
      if ( v27 >= 0 )
      {
LABEL_37:
        if ( v33 )
          LeaveCriticalSection(v33);
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v23);
        if ( v12 )
          LeaveCriticalSection(v12);
        return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x399,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
        (const char *)(unsigned int)v27);
      if ( v33 )
        LeaveCriticalSection(v33);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v23);
      if ( v12 )
        LeaveCriticalSection(v12);
      result = v28;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x39E,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
                           v16);
  }
  return result;
}
