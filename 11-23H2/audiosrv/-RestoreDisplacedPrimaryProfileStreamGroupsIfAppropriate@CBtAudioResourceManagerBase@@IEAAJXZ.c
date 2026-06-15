/*
 * XREFs of ?RestoreDisplacedPrimaryProfileStreamGroupsIfAppropriate@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800FA7BC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_c124e27da5846475f88a9548420e9d24__void_::_Do_call @ 0x180071360 (std--_Func_impl_no_alloc__lambda_c124e27da5846475f88a9548420e9d24__void_--_Do_call.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180021F60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180027120 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180045A40 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCritic.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004BB14 (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DoMicrophoneSaDevicesExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpointStore@@@Z @ 0x1800F735C (-DoMicrophoneSaDevicesExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpointStore@@@Z.c)
 *     ?DoSecondaryProfileRenderStreamGroupsExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpointStore@@@Z @ 0x1800F7418 (-DoSecondaryProfileRenderStreamGroupsExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpointStore.c)
 *     ?RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800F9E24 (-RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroupsIfAppropriate(
        CBtAudioResourceManagerBase *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  CEndpointStoreCache *v3; // rcx
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  const unsigned __int16 *v5; // rdx
  int EndpointStore; // eax
  unsigned int v7; // edi
  struct CEndpointStore *v9; // rdi
  struct _RTL_CRITICAL_SECTION **v10; // r15
  CBtAudioResourceManagerBase *v11; // rcx
  bool v12; // al
  volatile signed __int32 *v13; // rcx
  const unsigned __int16 *v14; // rdx
  int v15; // eax
  struct CEndpointStore *v16; // rdi
  int v17; // eax
  unsigned int v18; // r14d
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+30h]
  struct CEndpointStore *v20; // [rsp+70h] [rbp+38h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+78h] [rbp+40h] BYREF
  LPCRITICAL_SECTION v22; // [rsp+80h] [rbp+48h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+88h] [rbp+50h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 144);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  v4 = 0LL;
  v21 = 0LL;
  v5 = (const unsigned __int16 *)*((_QWORD *)this + 7);
  if ( v5 )
  {
    v20 = 0LL;
    EndpointStore = CEndpointStoreCache::GetEndpointStore(v3, v5, &v20);
    v7 = EndpointStore;
    if ( EndpointStore < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x284,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
        (const char *)(unsigned int)EndpointStore);
      wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v20);
LABEL_4:
      if ( v2 )
        LeaveCriticalSection(v2);
      return v7;
    }
    v9 = v20;
    v10 = (struct _RTL_CRITICAL_SECTION **)(*(__int64 (__fastcall **)(_QWORD, LPCRITICAL_SECTION *))(**((_QWORD **)v20 + 13) + 120LL))(
                                             *((_QWORD *)v20 + 13),
                                             &lpCriticalSection);
    if ( &v21 != v10 )
    {
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::reset(
        &v21,
        *v10);
      *v10 = 0LL;
      v4 = v21;
    }
    v11 = (CBtAudioResourceManagerBase *)lpCriticalSection;
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    v12 = CBtAudioResourceManagerBase::DoMicrophoneSaDevicesExist(v11, v9);
    v13 = (volatile signed __int32 *)v9;
    if ( v12 )
      goto LABEL_32;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v9);
  }
  v14 = (const unsigned __int16 *)*((_QWORD *)this + 6);
  if ( !v14 )
  {
LABEL_33:
    if ( v4 )
      LeaveCriticalSection(v4);
    if ( v2 )
      LeaveCriticalSection(v2);
    return 0LL;
  }
  v20 = 0LL;
  v15 = CEndpointStoreCache::GetEndpointStore(v3, v14, &v20);
  v7 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x290,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
      (const char *)(unsigned int)v15);
    wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v20);
    if ( v4 )
      LeaveCriticalSection(v4);
    goto LABEL_4;
  }
  v16 = v20;
  (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *))(**((_QWORD **)v20 + 13) + 120LL))(*((_QWORD *)v20 + 13), &v22);
  if ( CBtAudioResourceManagerBase::DoSecondaryProfileRenderStreamGroupsExist(this, v16) )
  {
    if ( v22 )
      LeaveCriticalSection(v22);
    wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v20);
    goto LABEL_33;
  }
  v17 = CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroups(this);
  v18 = v17;
  if ( v17 >= 0 )
  {
    if ( v22 )
      LeaveCriticalSection(v22);
    v13 = (volatile signed __int32 *)v16;
LABEL_32:
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v13);
    goto LABEL_33;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x299,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
    (const char *)(unsigned int)v17);
  if ( v22 )
    LeaveCriticalSection(v22);
  wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v20);
  if ( v4 )
    LeaveCriticalSection(v4);
  if ( v2 )
    LeaveCriticalSection(v2);
  return v18;
}
