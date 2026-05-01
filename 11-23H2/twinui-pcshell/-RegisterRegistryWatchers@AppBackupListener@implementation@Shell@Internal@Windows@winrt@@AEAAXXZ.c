/*
 * XREFs of ?RegisterRegistryWatchers@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806F4D84
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync$_ResumeCoro$1 @ 0x18025A570 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--InitializeAppBa_ea_18025A570.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ @ 0x18006E0D0 (-InternalAddRef@-$ComPtr@UIGlobalInterfaceTable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBG$$QEAV10@@Z @ 0x180096F40 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_180096F40.c)
 *     ??1?$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ @ 0x1800A3E20 (--1-$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ.c)
 *     ?create@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJPEAUHKEY__@@PEBG_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x1800A68EC (-create@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@det.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUregistry_watcher_state@23@@Z @ 0x1800A6BD4 (-reset@-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@.c)
 *     ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1800A6D50 (--_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x1800A6DD0 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?get@?$static_lazy@VCAppBackupListenerLogging@@@details@wil@@QEAAPEAVCAppBackupListenerLogging@@P6AXXZ@Z @ 0x18018F6C4 (-get@-$static_lazy@VCAppBackupListenerLogging@@@details@wil@@QEAAPEAVCAppBackupListenerLogging@@.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18018F764 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$?0PEAG$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEAG0AEBV?$allocator@G@1@@Z @ 0x18019AC30 (--$-0PEAG$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEAG0AEBV-$alloc.c)
 *     ??$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z @ 0x18019AC74 (--$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@@std@@@std@@YAXPEAV?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QEAV12@AEAV?$allocator@V?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@@0@@Z @ 0x1806EF500 (--$_Destroy_range@V-$allocator@V-$unique_any_t@V-$registry_watcher_t@V-$unique_storage@U-$resour.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@V?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1806EF84C (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@V-$unique_any_t@V-$registry_watcher_t@V-$u.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@V?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@@std@@@std@@YAPEAV?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@PEAV12@_KAEAV?$allocator@V?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@@0@@Z @ 0x1806EFD90 (--$_Uninitialized_value_construct_n@V-$allocator@V-$unique_any_t@V-$registry_watcher_t@V-$unique.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegisterRegistryWatchers(
        winrt::Windows::Internal::Shell::implementation::AppBackupListener *this)
{
  char *v2; // rsi
  __int64 v3; // r8
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  signed int v6; // r14d
  HKEY *v7; // r15
  __int64 v8; // r12
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v9; // rax
  wil::details::registry_watcher_state **v10; // rcx
  wil::details::registry_watcher_state *v11; // rbx
  _WORD *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rbx
  _DWORD *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r9
  wil::details::registry_watcher_state *v18; // [rsp+30h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp-C8h] BYREF
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v20; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  HKEY v23; // [rsp+60h] [rbp-A0h]
  const WCHAR *v24; // [rsp+68h] [rbp-98h]
  _QWORD v25[4]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v26[32]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v27[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 (__fastcall **v28)(void *); // [rsp+C8h] [rbp-38h] BYREF
  signed int v29; // [rsp+D0h] [rbp-30h]
  HKEY v30; // [rsp+D8h] [rbp-28h]
  const WCHAR *v31; // [rsp+E0h] [rbp-20h]
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v32; // [rsp+E8h] [rbp-18h]
  winrt::Windows::Internal::Shell::implementation::AppBackupListener *v33; // [rsp+F0h] [rbp-10h]
  __int64 (__fastcall ***v34)(void *); // [rsp+130h] [rbp+30h]
  _WORD v35[3]; // [rsp+16Ah] [rbp+6Ah] BYREF

  v2 = (char *)this + 216;
  v3 = *((_QWORD *)this + 27);
  v4 = (*((_QWORD *)this + 28) - v3) >> 3;
  if ( v4 <= 4 )
  {
    if ( v4 < 4 )
    {
      if ( (unsigned __int64)((*((_QWORD *)v2 + 2) - v3) >> 3) >= 4 )
        *((_QWORD *)v2 + 1) = std::_Uninitialized_value_construct_n<std::allocator<wil::unique_any_t<wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>>>>(
                                *((__int64 **)v2 + 1),
                                4 - v4,
                                (RTL_SRWLOCK *)v3);
      else
        std::vector<wil::unique_any_t<wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>>>::_Resize_reallocate<std::_Value_init_tag>((__int64 **)v2);
    }
  }
  else
  {
    v5 = v3 + 32;
    std::_Destroy_range<std::allocator<wil::unique_any_t<wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>>>>(
      (__int64 *)(v3 + 32),
      *((__int64 **)v2 + 1),
      (RTL_SRWLOCK *)v3);
    *((_QWORD *)v2 + 1) = v5;
  }
  v6 = 0;
  v7 = (HKEY *)&unk_180985690;
  v8 = 0LL;
  do
  {
    v9 = 0LL;
    if ( this )
    {
      v20 = this;
      Microsoft::WRL::ComPtr<IGlobalInterfaceTable>::InternalAddRef((__int64 *)&v20);
      v9 = this;
    }
    v23 = *v7;
    v24 = (const WCHAR *)v7[1];
    v28 = &off_1807CA7D0;
    v29 = v6;
    v30 = v23;
    v31 = v24;
    v32 = this;
    v33 = v9;
    v34 = &v28;
    v18 = 0LL;
    wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
      (__int64)&v18,
      v23,
      v24,
      1,
      (__int64)v27);
    v10 = (wil::details::registry_watcher_state **)(*(_QWORD *)v2 + 8LL * v6);
    if ( v10 == &v18 )
    {
      v11 = v18;
    }
    else
    {
      wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>::reset(
        v10,
        v18);
      v11 = 0LL;
      v18 = 0LL;
    }
    if ( v11 )
    {
      AcquireSRWLockExclusive((PSRWLOCK)v11 + 19);
      SRWLock = (PSRWLOCK)((char *)v11 + 152);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v11 + 37, 0xFFFFFFFF) == 1 )
      {
        wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
          &SRWLock,
          0LL);
        wil::details::registry_watcher_state::`scalar deleting destructor'(v18);
      }
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
    }
    wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v27);
    if ( !*(_QWORD *)(v8 + *(_QWORD *)v2) )
    {
      if ( v6 >= 0 )
      {
        v12 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v35, v6);
      }
      else
      {
        v12 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v35, -v6) - 1;
        *v12 = 45;
      }
      std::wstring::wstring((__int64)v26, v12, v35);
      std::operator+<unsigned short>(v25, (__int64)L"Registry watcher null for ", v26);
      std::wstring::_Tidy_deallocate((__int64)v26);
      v14 = v25;
      if ( v25[3] >= 8uLL )
        v14 = (_QWORD *)v25[0];
      v15 = (_DWORD *)wil::details::static_lazy<CAppBackupListenerLogging>::get(
                        v13,
                        (void (__cdecl *)())_lambda_f0e7b1f4516883ab4fcec3efade13bff_::_lambda_invoker_cdecl_)[1];
      if ( *v15 > 5u )
      {
        if ( tlgKeywordOn((__int64)v15, 0x400000000000LL) )
        {
          v21 = 0x1000000LL;
          v22 = (__int64)v14;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
            v16,
            (unsigned __int8 *)dword_18087BA21,
            0LL,
            v17,
            (const WCHAR **)&v22,
            (__int64)&v21);
        }
      }
      std::wstring::_Tidy_deallocate((__int64)v25);
    }
    ++v6;
    v8 += 8LL;
    v7 += 2;
  }
  while ( v7 != qword_1809856D0 );
}
