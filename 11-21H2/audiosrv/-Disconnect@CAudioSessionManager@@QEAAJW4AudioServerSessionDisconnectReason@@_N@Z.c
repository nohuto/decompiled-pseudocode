/*
 * XREFs of ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800DFDF8
 * Callers:
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x1800C45D4 (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     std::_Func_impl_no_alloc__lambda_575e561af4240623508f6fe68ec23261__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__&_::_Do_call @ 0x1800E2D70 (std--_Func_impl_no_alloc__lambda_575e561af4240623508f6fe68ec23261__long_wil--com_pt_ea_1800E2D70.c)
 *     std::_Func_impl_no_alloc__lambda_ddaf1e9eb7e2eca453b2b4697b517284__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__&_::_Do_call @ 0x1800E2E30 (std--_Func_impl_no_alloc__lambda_ddaf1e9eb7e2eca453b2b4697b517284__long_wil--com_pt_ea_1800E2E30.c)
 *     ?DisconnectHelper@CPolicyConfig@@SAXPEBG@Z @ 0x1800E9748 (-DisconnectHelper@CPolicyConfig@@SAXPEBG@Z.c)
 *     ?SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z @ 0x1800EA9B0 (-SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z.c)
 *     ?RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x180101728 (-RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUISaD.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800029FC (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C58 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180002CD8 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EFC8 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180025468 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180025560 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B4B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180041DEC (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBVCAudioSessionInstanceId@@V-$com_ptr_t@.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@@Z @ 0x1800426C8 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??0?$unordered_map@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@5@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@std@@QEAA@XZ @ 0x18004AD30 (--0-$unordered_map@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x18005D5D8 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_S @ 0x1800C6210 (WPP_SF_S.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800DE2DC (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800DE450 (--$_Emplace_reallocate@AEBV-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UISt.c)
 *     ??$emplace@AEBU?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@1@@Z @ 0x1800DE9D8 (--$emplace@AEBU-$pair@$$CBVCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Uerr_returncode.c)
 *     ?_Move_assign@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@AEAAXAEAV12@U_Equal_allocators@2@@Z @ 0x1800E17D4 (-_Move_assign@-$_Hash@V-$_Umap_traits@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Uer.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x1800E1BC4 (-clear@-$_Hash@V-$_Umap_traits@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Uerr_retur.c)
 *     ?FreeResourcesAndLockForStreamGroupConnectionDisconnection@CAudioResourceManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIDeviceGraphObjectsStore@@@Z @ 0x180100160 (-FreeResourcesAndLockForStreamGroupConnectionDisconnection@CAudioResourceManager@@QEAA-AV-$uniqu.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CAudioSessionManager::Disconnect(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v3; // r12d
  __int64 v4; // r13
  __int64 v5; // rdi
  RTL_SRWLOCK *v6; // rcx
  const wchar_t *v7; // r9
  __int64 *v8; // r15
  const unsigned __int16 *v9; // rdx
  int EndpointStore; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  _QWORD *v14; // rbx
  _QWORD *v15; // rax
  __int64 *v16; // r14
  __int64 v17; // r8
  __int64 v18; // rdi
  _QWORD **v19; // rdi
  _QWORD *i; // rbx
  _QWORD *v21; // rax
  __int64 v22; // r8
  _QWORD *v23; // rdi
  _QWORD *j; // rbx
  _QWORD **v25; // rdi
  _QWORD *k; // rbx
  __int64 v27; // rcx
  __int64 *v28; // rbx
  __int64 *m; // rdi
  __int64 v30; // rcx
  __int64 (__fastcall ***v31)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-118h] BYREF
  struct CEndpointStore *v32; // [rsp+28h] [rbp-110h] BYREF
  __int128 v33; // [rsp+30h] [rbp-108h] BYREF
  __int64 *v34; // [rsp+40h] [rbp-F8h]
  _QWORD *v35; // [rsp+48h] [rbp-F0h]
  _QWORD *v36; // [rsp+50h] [rbp-E8h]
  __int64 v37; // [rsp+60h] [rbp-D8h] BYREF
  _QWORD **v38; // [rsp+68h] [rbp-D0h]
  __int64 v39; // [rsp+70h] [rbp-C8h]
  void *v40; // [rsp+78h] [rbp-C0h] BYREF
  __int128 v41; // [rsp+80h] [rbp-B8h]
  __int64 v42; // [rsp+90h] [rbp-A8h]
  __int64 v43; // [rsp+98h] [rbp-A0h]
  __int64 v44; // [rsp+A0h] [rbp-98h]
  struct _RTL_CRITICAL_SECTION *v45[3]; // [rsp+A8h] [rbp-90h] BYREF
  char v46[8]; // [rsp+C0h] [rbp-78h] BYREF
  _QWORD **v47; // [rsp+C8h] [rbp-70h]
  void *v48; // [rsp+D8h] [rbp-60h]
  __int128 v49; // [rsp+E0h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v54; // [rsp+158h] [rbp+20h] BYREF

  v3 = a2;
  v4 = a1;
  v5 = a1;
  v44 = a1;
  v6 = (RTL_SRWLOCK *)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v7 = (const wchar_t *)(v5 + 240);
    if ( *(_QWORD *)(v5 + 264) >= 8uLL )
      v7 = *(const wchar_t **)v7;
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x22u, (__int64)&WPP_a8e1b94a3e7033841a5ad9e612e202df_Traceguids, v7);
  }
  v33 = 0LL;
  v8 = 0LL;
  v34 = 0LL;
  v32 = 0LL;
  v9 = (const unsigned __int16 *)(v4 + 240);
  if ( *(_QWORD *)(v4 + 264) >= 8uLL )
    v9 = *(const unsigned __int16 **)v9;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(v6, v9, &v32);
  v12 = EndpointStore;
  if ( EndpointStore >= 0 )
  {
    if ( v3 == 1 || v3 == 6 )
    {
      v16 = (__int64 *)*((_QWORD *)&v33 + 1);
    }
    else
    {
      CAudioResourceManager::FreeResourcesAndLockForStreamGroupConnectionDisconnection(v11, &v54, *((_QWORD *)v32 + 13));
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v54);
      EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 112));
      v45[0] = (struct _RTL_CRITICAL_SECTION *)(v4 + 112);
      v14 = *(_QWORD **)(v4 + 152);
      v15 = *(_QWORD **)(v4 + 160);
      v36 = v15;
      v16 = (__int64 *)*((_QWORD *)&v33 + 1);
      while ( 1 )
      {
        v35 = v14;
        if ( v14 == v15 )
          break;
        v31 = 0LL;
        if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(v14, &v31) >= 0 && v31 )
        {
          v54 = 0LL;
          if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v31, (__int64 *)&v54) >= 0 )
          {
            ((void (*)(void))v54->DebugInfo[7].ProcessLocksList.Blink)();
            if ( v16 == v8 )
            {
              try
              {
                std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IStreamGroupProxy> const &>(
                  (__int64 *)&v33,
                  (__int64)v16,
                  (__int64 *)&v54);
                v8 = v34;
                v16 = (__int64 *)*((_QWORD *)&v33 + 1);
              }
              catch ( std::bad_alloc )
              {
                v4 = a1;
                v3 = a2;
                v8 = v34;
                v16 = (__int64 *)*((_QWORD *)&v33 + 1);
                v14 = v35;
                v5 = v44;
              }
            }
            else
            {
              *v16 = (__int64)v54;
              Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v16++);
              *((_QWORD *)&v33 + 1) = v16;
            }
          }
          Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)&v54);
        }
        Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease((__int64 *)&v31);
        ++v14;
        v15 = v36;
      }
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(v45);
    }
    std::unordered_map<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>::unordered_map<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>((__int64)v46);
    EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 8));
    v54 = (struct _RTL_CRITICAL_SECTION *)(v4 + 8);
    v18 = v5 + 48;
    if ( v3 == 1 )
    {
      if ( v46 != (char *)v18 )
        std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::_Move_assign(v46);
      v19 = v47;
      for ( i = *v47; i != v19; i = (_QWORD *)*i )
      {
        LOBYTE(v17) = a3;
        (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)i[12] + 72LL))(i[12], 1LL, v17);
        (*(void (__fastcall **)(_QWORD, struct ISessionInternalEvents *))(*(_QWORD *)i[12] + 160LL))(
          i[12],
          g_PolicyEventsHandler);
      }
    }
    else
    {
      LODWORD(v37) = *(_DWORD *)v18;
      v38 = 0LL;
      v39 = 0LL;
      v21 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x68uLL);
      *v21 = v21;
      v21[1] = v21;
      v38 = (_QWORD **)v21;
      v40 = 0LL;
      v41 = 0LL;
      v42 = *(_QWORD *)(v18 + 48);
      v43 = *(_QWORD *)(v18 + 56);
      std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>>>>>>::_Assign_grow(
        (__int64)&v40,
        (__int64)(*(_QWORD *)(v18 + 32) - *(_QWORD *)(v18 + 24)) >> 3,
        (unsigned __int64)v21);
      v23 = *(_QWORD **)(v18 + 8);
      for ( j = (_QWORD *)*v23; j != v23; j = (_QWORD *)*j )
        std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::emplace<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>> const &>(
          &v37,
          (__int64)v45,
          j + 2);
      v25 = v38;
      for ( k = *v38; k != v25; k = (_QWORD *)*k )
      {
        LOBYTE(v22) = a3;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)k[12] + 72LL))(k[12], v3, v22);
      }
      std::_Deallocate<16,0>(v40, (v41 - (_QWORD)v40) & 0xFFFFFFFFFFFFFFF8uLL);
      v40 = 0LL;
      v41 = 0LL;
      std::_List_node<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>,void *>>>(
        v27,
        v38);
      std::_Deallocate<16,0>(v38, 0x68uLL);
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v54);
    std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::clear(v46);
    if ( v3 == 1 || v3 == 6 )
    {
      v28 = (__int64 *)v33;
    }
    else
    {
      v28 = (__int64 *)v33;
      for ( m = (__int64 *)v33; m != v16; ++m )
        (*(void (**)(void))(*(_QWORD *)*m + 368LL))();
    }
    std::_Deallocate<16,0>(v48, (v49 - (_QWORD)v48) & 0xFFFFFFFFFFFFFFF8uLL);
    v48 = 0LL;
    v49 = 0LL;
    std::_List_node<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>,void *>>>(
      v30,
      v47);
    std::_Deallocate<16,0>(v47, 0x68uLL);
    if ( v32 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v32);
    if ( v28 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v28, v16);
      std::_Deallocate<16,0>(v28, ((char *)v8 - (char *)v28) & 0xFFFFFFFFFFFFFFF8uLL);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F2,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)EndpointStore);
    if ( v32 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v32);
    return v12;
  }
}
