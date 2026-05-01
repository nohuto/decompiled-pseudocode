/*
 * XREFs of ?OnTerminateTimer@Win32AppStateManager@@AEAAXXZ @ 0x180625E68
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::System::Threading::ITimerElapsedHandler::_)(Windows::System::Threading::IThreadPoolTimer__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::System::Threading::ITimerElapsedHandler_Microsoft::WRL::FtmBase___lambda_47c0868eeef6d2db2a8f89db045b20e4___1_Windows::System::Threading::IThreadPoolTimer___::Invoke @ 0x180625C90 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--System--Threading_ea_180625C90.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800731C4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800B49D8 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?get@?$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z @ 0x1801993D0 (-get@-$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUhstring@winrt@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801E8DE0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUhstring@win.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180462268 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1804A508C (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKV-$ComPtr@UIApplicationFrame@@@WRL@Micr.c)
 *     ?TerminateAppOnce@Win32AppStateManager@@AEAA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N@Z @ 0x180626888 (-TerminateAppOnce@Win32AppStateManager@@AEAA_NAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Win32AppStateManager::OnTerminateTimer(Win32AppStateManager *this)
{
  _DWORD *v2; // rcx
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // r8
  char v6; // di
  __int64 v7; // rbx
  _QWORD *v8; // r15
  unsigned int v9; // r13d
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _DWORD *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // rbx
  _DWORD *v18; // rcx
  __int64 v19; // r9
  __int64 v20; // [rsp+90h] [rbp+48h] BYREF
  __int64 v21; // [rsp+98h] [rbp+50h] BYREF
  __int64 v22; // [rsp+A0h] [rbp+58h] BYREF
  char *v23; // [rsp+A8h] [rbp+60h]

  v2 = (_DWORD *)wil::details::static_lazy<AppUsageTelemetry>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_4d19eb78d2d318fd81ccffb962d1d1a6_::_lambda_invoker_cdecl_)[1];
  if ( *v2 > 5u )
  {
    v20 = (__int64)L"Termination timer event fired";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
      (int)v2,
      (int)&dword_18086F82D,
      0,
      v3,
      (const WCHAR **)&v20);
  }
  AcquireSRWLockExclusive((PSRWLOCK)this + 7);
  v23 = (char *)this + 56;
  v6 = 0;
  v7 = **((_QWORD **)this + 10);
LABEL_4:
  v20 = v7;
  while ( v7 != *((_QWORD *)this + 10) )
  {
    v8 = (_QWORD *)(v7 + 32);
    v9 = *(_DWORD *)(v7 + 64);
    *(_DWORD *)(v7 + 64) = v9 + 1;
    if ( v9 > *((_DWORD *)this + 41) )
    {
      v6 = 0;
      if ( *(_QWORD *)(v7 + 56) >= 8uLL )
        v8 = (_QWORD *)*v8;
      v13 = (_DWORD *)wil::details::static_lazy<AppUsageTelemetry>::get(
                        v4,
                        (void (__cdecl *)())_lambda_4d19eb78d2d318fd81ccffb962d1d1a6_::_lambda_invoker_cdecl_)[1];
      if ( *v13 > 5u && tlgKeywordOn((__int64)v13, 0x400000000000LL) )
      {
        v21 = 0x2000000LL;
        LODWORD(v20) = v9;
        v22 = (__int64)v8;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          v14,
          (unsigned __int8 *)dword_18086F84B,
          v11,
          v12,
          (const WCHAR **)&v22,
          (__int64)&v20,
          (__int64)&v21);
      }
LABEL_18:
      v20 = v7;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,winrt::hstring>>>,std::_Iterator_base0>::operator++(
        &v20,
        v10,
        v11,
        v12);
      v17 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>>::_Extract(
              (_QWORD *)this + 10,
              v7,
              v15,
              v16);
      std::wstring::_Tidy_deallocate((__int64)(v17 + 4));
      std::_Deallocate<16,0>(v17, 0x48uLL);
      v7 = v20;
      goto LABEL_4;
    }
    LOBYTE(v5) = v9 == *((_DWORD *)this + 41) || *(_DWORD *)(v7 + 68) == 1;
    v6 = Win32AppStateManager::TerminateAppOnce(this, v7 + 32, v5);
    if ( !v6 )
      goto LABEL_18;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,winrt::hstring>>>,std::_Iterator_base0>::operator++(
      &v20,
      v10,
      v11,
      v12);
    v7 = v20;
  }
  if ( !v6 && *((_QWORD *)this + 19) )
  {
    v18 = (_DWORD *)wil::details::static_lazy<AppUsageTelemetry>::get(
                      v4,
                      (void (__cdecl *)())_lambda_4d19eb78d2d318fd81ccffb962d1d1a6_::_lambda_invoker_cdecl_)[1];
    if ( *v18 > 5u )
    {
      v20 = (__int64)L"Canceling termination timer on completing callback";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
        (int)v18,
        (int)&dword_18086F82D,
        0,
        v19,
        (const WCHAR **)&v20);
    }
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 64LL))(*((_QWORD *)this + 19));
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 19);
  }
  if ( this != (Win32AppStateManager *)-56LL )
    ReleaseSRWLockExclusive((PSRWLOCK)this + 7);
}
