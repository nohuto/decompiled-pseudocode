/*
 * XREFs of ?RestoreDisplacedA2dpStreamGroupsIfAppropriate@CBtAudioResourceManager@@AEAAJXZ @ 0x180117558
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_61472fb300ea614269c37d31c921ac45__void_::_Do_call @ 0x180066E80 (std--_Func_impl_no_alloc__lambda_61472fb300ea614269c37d31c921ac45__void_--_Do_call.c)
 * Callees:
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180025560 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B4B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_CRITICAL_SECTION@@@Z @ 0x1800DB54C (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCritic.c)
 *     ?DoHfpRenderStreamGroupsExist@CBtAudioResourceManager@@AEAA_NPEAVCEndpointStore@@@Z @ 0x180114FA4 (-DoHfpRenderStreamGroupsExist@CBtAudioResourceManager@@AEAA_NPEAVCEndpointStore@@@Z.c)
 *     ?DoMicrophoneSaDevicesExist@CBtAudioResourceManager@@AEAA_NPEAVCEndpointStore@@@Z @ 0x1801152DC (-DoMicrophoneSaDevicesExist@CBtAudioResourceManager@@AEAA_NPEAVCEndpointStore@@@Z.c)
 *     ?RestoreDisplacedA2dpStreamGroups@CBtAudioResourceManager@@AEAAJXZ @ 0x180116D54 (-RestoreDisplacedA2dpStreamGroups@CBtAudioResourceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CBtAudioResourceManager::RestoreDisplacedA2dpStreamGroupsIfAppropriate(
        struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  RTL_SRWLOCK *v3; // rcx
  const unsigned __int16 *v4; // rdx
  int EndpointStore; // eax
  unsigned int v6; // edi
  struct CEndpointStore *v7; // rbx
  struct _RTL_CRITICAL_SECTION **v8; // rdi
  CBtAudioResourceManager *v9; // rcx
  const unsigned __int16 *p_Type; // rdx
  int v11; // eax
  CBtAudioResourceManager *v12; // rcx
  int v13; // eax
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+20h]
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+60h] [rbp+28h] BYREF
  struct CEndpointStore *v18; // [rsp+68h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+70h] [rbp+38h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+78h] [rbp+40h] BYREF

  v2 = this + 3;
  EnterCriticalSection(this + 3);
  v15 = v2;
  v17 = 0LL;
  v4 = *(const unsigned __int16 **)&this[1].LockCount;
  if ( v4 )
  {
    v18 = 0LL;
    EndpointStore = CEndpointStoreCache::GetEndpointStore(v3, v4, &v18);
    v6 = EndpointStore;
    v7 = v18;
    if ( EndpointStore < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2BC,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
        (const char *)(unsigned int)EndpointStore);
      goto LABEL_18;
    }
    v8 = (struct _RTL_CRITICAL_SECTION **)(*(__int64 (__fastcall **)(_QWORD, struct _RTL_CRITICAL_SECTION **))(**((_QWORD **)v18 + 13) + 120LL))(
                                            *((_QWORD *)v18 + 13),
                                            &v19);
    if ( &v17 != v8 )
    {
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::reset(
        &v17,
        *v8);
      *v8 = 0LL;
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v19);
    if ( CBtAudioResourceManager::DoMicrophoneSaDevicesExist(v9, v7) )
    {
      v6 = 0;
      goto LABEL_18;
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v7);
  }
  p_Type = &this[1].DebugInfo->Type;
  if ( !p_Type )
  {
    v6 = 0;
    goto LABEL_20;
  }
  v18 = 0LL;
  v11 = CEndpointStoreCache::GetEndpointStore(v3, p_Type, &v18);
  v6 = v11;
  v7 = v18;
  if ( v11 >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, struct _RTL_CRITICAL_SECTION **))(**((_QWORD **)v18 + 13) + 120LL))(
      *((_QWORD *)v18 + 13),
      &v20);
    if ( CBtAudioResourceManager::DoHfpRenderStreamGroupsExist(v12, v7)
      || (v13 = CBtAudioResourceManager::RestoreDisplacedA2dpStreamGroups((const unsigned __int16 **)this),
          v6 = v13,
          v13 >= 0) )
    {
      v6 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2D1,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
        (const char *)(unsigned int)v13);
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v20);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C8,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
      (const char *)(unsigned int)v11);
  }
LABEL_18:
  if ( v7 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v7);
LABEL_20:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v17);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v15);
  return v6;
}
