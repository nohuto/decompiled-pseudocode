/*
 * XREFs of ?AllowOffloadStreamCreation@CBtAudioResourceManagerBase@@UEAA_NXZ @ 0x1800F5890
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180021F60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180027120 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180045A40 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCritic.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004BB14 (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DoMicrophoneSaDevicesExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpointStore@@@Z @ 0x1800F735C (-DoMicrophoneSaDevicesExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpointStore@@@Z.c)
 *     ?DoSecondaryProfileSharedModeRenderSaDevicesExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpointStore@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800F7640 (-DoSecondaryProfileSharedModeRenderSaDevicesExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpoi.c)
 */

char __fastcall CBtAudioResourceManagerBase::AllowOffloadStreamCreation(CBtAudioResourceManagerBase *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rsi
  CEndpointStoreCache *v3; // rcx
  const unsigned __int16 *v4; // rdx
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  int EndpointStore; // eax
  volatile signed __int32 *v7; // rdi
  struct _RTL_CRITICAL_SECTION **v8; // r15
  CBtAudioResourceManagerBase *v9; // rcx
  const unsigned __int16 *v10; // rdx
  int v11; // eax
  struct CEndpointStore *v12; // rdi
  struct CEndpointStore *v14; // [rsp+50h] [rbp+30h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp+38h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 144);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  v4 = (const unsigned __int16 *)*((_QWORD *)this + 7);
  v5 = 0LL;
  v14 = 0LL;
  if ( v4 )
  {
    lpCriticalSection = 0LL;
    EndpointStore = CEndpointStoreCache::GetEndpointStore(v3, v4, (struct CEndpointStore **)&lpCriticalSection);
    v7 = (volatile signed __int32 *)lpCriticalSection;
    if ( EndpointStore >= 0 )
    {
      v8 = (struct _RTL_CRITICAL_SECTION **)(*(__int64 (__fastcall **)(HANDLE, LPCRITICAL_SECTION *))(*(_QWORD *)lpCriticalSection[2].LockSemaphore + 120LL))(
                                              lpCriticalSection[2].LockSemaphore,
                                              &lpCriticalSection);
      if ( &v14 != (struct CEndpointStore **)v8 )
      {
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::reset(
          (struct _RTL_CRITICAL_SECTION **)&v14,
          *v8);
        *v8 = 0LL;
        v5 = (struct _RTL_CRITICAL_SECTION *)v14;
      }
      v9 = (CBtAudioResourceManagerBase *)lpCriticalSection;
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      if ( CBtAudioResourceManagerBase::DoMicrophoneSaDevicesExist(v9, (struct CEndpointStore *)v7) )
      {
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v7);
LABEL_16:
        if ( v5 )
          LeaveCriticalSection(v5);
        if ( v1 )
          LeaveCriticalSection(v1);
        return 0;
      }
    }
    if ( v7 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v7);
  }
  v10 = (const unsigned __int16 *)*((_QWORD *)this + 6);
  v14 = 0LL;
  v11 = CEndpointStoreCache::GetEndpointStore(v3, v10, &v14);
  v12 = v14;
  if ( v11 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *))(**((_QWORD **)v14 + 13) + 120LL))(
      *((_QWORD *)v14 + 13),
      &lpCriticalSection);
    if ( CBtAudioResourceManagerBase::DoSecondaryProfileSharedModeRenderSaDevicesExist(this, v12, 0LL) )
    {
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v14);
      goto LABEL_16;
    }
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
  }
  if ( v12 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v12);
  if ( v5 )
    LeaveCriticalSection(v5);
  if ( v1 )
    LeaveCriticalSection(v1);
  return 1;
}
