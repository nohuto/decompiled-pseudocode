/*
 * XREFs of ?GetSaDeviceForOffloadStream@CBtAudioResourceManagerBase@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEBU_GUID@@4PEAPEAUISaDeviceProxy@@@Z @ 0x1800F8FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180021F60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180027120 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180045A40 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCritic.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CBtAudioResourceManagerBase::GetSaDeviceForOffloadStream(
        LPCWCH *this,
        struct EndpointCharacteristicsDescriptor *a2,
        struct SaDeviceParams *a3,
        unsigned int a4,
        enum _AUDCLNT_SHAREMODE a5,
        struct SaDeviceResourceParams *a6,
        const struct _GUID *a7,
        const struct _GUID *a8,
        struct ISaDeviceProxy **a9)
{
  int v13; // eax
  CEndpointStoreCache *v14; // rcx
  __int64 result; // rax
  struct _RTL_CRITICAL_SECTION *v16; // rbx
  const unsigned __int16 *v17; // rdx
  int EndpointStore; // eax
  unsigned int v19; // edi
  const char *v20; // r9
  struct CEndpointStore *v21; // rdi
  struct _RTL_CRITICAL_SECTION **v22; // r14
  int v23; // eax
  unsigned int v24; // edi
  struct CEndpointStore *v25; // rdi
  int v26; // eax
  unsigned int v27; // esi
  LPCRITICAL_SECTION v28; // [rsp+50h] [rbp-38h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  struct CEndpointStore *v31; // [rsp+90h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v32; // [rsp+98h] [rbp+10h] BYREF

  v13 = CompareStringOrdinal(this[6], -1, *(LPCWCH *)(*(_QWORD *)a2 + 48LL), -1, 1);
  if ( v13 != 2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFA,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  try
  {
    v16 = 0LL;
    v32 = 0LL;
    v17 = this[7];
    if ( v17 )
    {
      v31 = 0LL;
      EndpointStore = CEndpointStoreCache::GetEndpointStore(v14, v17, &v31);
      v19 = EndpointStore;
      if ( EndpointStore < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x101,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
          (const char *)(unsigned int)EndpointStore);
        if ( v31 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v31);
        return v19;
      }
      v21 = v31;
      v22 = (struct _RTL_CRITICAL_SECTION **)(*(__int64 (__fastcall **)(_QWORD, LPCRITICAL_SECTION *))(**((_QWORD **)v31 + 13) + 120LL))(
                                               *((_QWORD *)v31 + 13),
                                               &lpCriticalSection);
      if ( &v32 != v22 )
      {
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::reset(
          &v32,
          *v22);
        *v22 = 0LL;
        v16 = v32;
      }
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v21);
    }
    v31 = 0LL;
    v23 = CEndpointStoreCache::GetEndpointStore(v14, this[6], &v31);
    v24 = v23;
    if ( v23 >= 0 )
    {
      v25 = v31;
      (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *))(**((_QWORD **)v31 + 13) + 120LL))(
        *((_QWORD *)v31 + 13),
        &v28);
      if ( (*((unsigned __int8 (__fastcall **)(LPCWCH *))*this + 11))(this) )
      {
        v26 = (*((__int64 (__fastcall **)(LPCWCH *, struct EndpointCharacteristicsDescriptor *, struct SaDeviceParams *, _QWORD, enum _AUDCLNT_SHAREMODE, struct SaDeviceResourceParams *, const struct _GUID *, const struct _GUID *, struct ISaDeviceProxy **))*this
               + 19))(
                this,
                a2,
                a3,
                a4,
                a5,
                a6,
                a7,
                a8,
                a9);
        v27 = v26;
        if ( v26 >= 0 )
        {
          if ( v28 )
            LeaveCriticalSection(v28);
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v25);
          if ( v16 )
            LeaveCriticalSection(v16);
          result = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x111,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
            (const char *)(unsigned int)v26);
          if ( v28 )
            LeaveCriticalSection(v28);
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v25);
          if ( v16 )
            LeaveCriticalSection(v16);
          result = v27;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x10E,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
          (const char *)0x887C0056LL);
        if ( v28 )
          LeaveCriticalSection(v28);
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v25);
        if ( v16 )
          LeaveCriticalSection(v16);
        result = 2289827926LL;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x108,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
        (const char *)(unsigned int)v23);
      if ( v31 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v31);
      if ( v16 )
        LeaveCriticalSection(v16);
      result = v24;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x115,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
                           v20);
  }
  return result;
}
