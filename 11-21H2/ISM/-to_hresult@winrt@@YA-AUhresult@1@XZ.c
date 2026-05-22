/*
 * XREFs of ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1800839C8
 * Callers:
 *     _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs___lambda_66ed2df52651243ff863a12d97446406___::Invoke_::_1_::catch$8 @ 0x180054E02 (_winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--A.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher_winrt::Windows::Foundation::IInspectable___lambda_1fc43c971fd1247187255afbf1b5936c___::Invoke_::_1_::catch$6 @ 0x180081F7B (_winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows_ea_180081F7B.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher_winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalPropertyChangedEventArgs___lambda_be02bfc96701eec5f3a0245d87020f54___::Invoke_::_1_::catch$7 @ 0x18008506B (_winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows_ea_18008506B.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher_winrt::Windows::Foundation::IInspectable___lambda_60bc5d93aa36c864d5d47e476cd7d1f3___::Invoke_::_1_::catch$6 @ 0x18008513B (_winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows_ea_18008513B.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs___lambda_8796a88b72841d6ebf3a72c1da83edbf___::Invoke_::_1_::catch$8 @ 0x18008520B (_winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows_ea_18008520B.c)
 *     _winrt::impl::delegate_winrt::Windows::System::Threading::WorkItemHandler__lambda_d47f631da3751d72c8a8e135519addbc___::Invoke_::_1_::catch$0 @ 0x1800CA04B (_winrt--impl--delegate_winrt--Windows--System--Threading--WorkItemHandler__lambda_d47f631da3751d.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x18004AFCA (_CxxThrowException_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

_DWORD *__fastcall winrt::to_hresult(_DWORD *a1)
{
  _BYTE *v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  OLECHAR *v7; // rcx
  _BYTE *v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  OLECHAR *v12; // rcx
  _BYTE *v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  OLECHAR *v18; // rcx
  _BYTE *v19; // rdx
  _BYTE *v20; // rdx
  _BYTE *v21; // rdx
  _BYTE *v22; // rdx
  _BYTE *v23; // rdx
  _BYTE v24[32]; // [rsp+0h] [rbp-88h] BYREF
  const winrt::hresult_error *v25; // [rsp+20h] [rbp-68h] BYREF
  const std::out_of_range *v26; // [rsp+28h] [rbp-60h] BYREF
  const std::invalid_argument *v27; // [rsp+30h] [rbp-58h] BYREF
  const std::exception *v28; // [rsp+38h] [rbp-50h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v30; // [rsp+90h] [rbp+8h]

  if ( !winrt_to_hresult_handler )
  {
    try
    {
      throw;
    }
    catch ( const winrt::hresult_error *v25 )
    {
      v19 = v24;
      winrt::hresult_error::to_abi(*((_QWORD *)v19 + 4), *((_DWORD **)v19 + 18));
      return (_DWORD *)v30;
    }
    catch ( std::bad_alloc )
    {
      v20 = v24;
      **((_DWORD **)v20 + 18) = -2147024882;
      return (_DWORD *)v30;
    }
    catch ( const std::out_of_range *v26 )
    {
      v21 = v24;
      v3 = v21;
      *((_QWORD *)v21 + 19) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v21 + 5) + 8LL))(*((_QWORD *)v21 + 5));
      *((_QWORD *)v3 + 11) = *winrt::to_hstring<char const *,0>(
                                (struct winrt::impl::shared_hstring_header **)v3 + 20,
                                (const CHAR **)v3 + 19);
      winrt::hresult_error::hresult_error((__int64)(v3 + 64), 2147483659LL, (_QWORD *)v3 + 11);
      winrt::hresult_error::to_abi((__int64)(v3 + 64), *((_DWORD **)v3 + 18));
      if ( *((_QWORD *)v3 + 10) )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)v3 + 10);
      v7 = (OLECHAR *)*((_QWORD *)v3 + 8);
      if ( v7 )
        WINRT_IMPL_SysFreeString(v7);
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)v3 + 20, v4, v5, v6);
      return (_DWORD *)v30;
    }
    catch ( const std::invalid_argument *v27 )
    {
      v22 = v24;
      v8 = v22;
      *((_QWORD *)v22 + 19) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v22 + 6) + 8LL))(*((_QWORD *)v22 + 6));
      *((_QWORD *)v8 + 11) = *winrt::to_hstring<char const *,0>(
                                (struct winrt::impl::shared_hstring_header **)v8 + 20,
                                (const CHAR **)v8 + 19);
      winrt::hresult_error::hresult_error((__int64)(v8 + 64), 2147942487LL, (_QWORD *)v8 + 11);
      winrt::hresult_error::to_abi((__int64)(v8 + 64), *((_DWORD **)v8 + 18));
      if ( *((_QWORD *)v8 + 10) )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)v8 + 10);
      v12 = (OLECHAR *)*((_QWORD *)v8 + 8);
      if ( v12 )
        WINRT_IMPL_SysFreeString(v12);
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)v8 + 20, v9, v10, v11);
      return (_DWORD *)v30;
    }
    catch ( const std::exception *v28 )
    {
      v23 = v24;
      v13 = v23;
      *((_QWORD *)v23 + 19) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v23 + 7) + 8LL))(*((_QWORD *)v23 + 7));
      *((_QWORD *)v13 + 11) = *winrt::to_hstring<char const *,0>(
                                 (struct winrt::impl::shared_hstring_header **)v13 + 20,
                                 (const CHAR **)v13 + 19);
      v14 = winrt::hresult_error::hresult_error((__int64)(v13 + 64), 2147500037LL, (_QWORD *)v13 + 11);
      winrt::hresult_error::to_abi(v14, *((_DWORD **)v13 + 18));
      if ( *((_QWORD *)v13 + 10) )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)v13 + 10);
      v18 = (OLECHAR *)*((_QWORD *)v13 + 8);
      if ( v18 )
      {
        WINRT_IMPL_SysFreeString(v18);
        *((_QWORD *)v13 + 8) = 0LL;
      }
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)v13 + 20, v15, v16, v17);
      return (_DWORD *)v30;
    }
  }
  *a1 = winrt_to_hresult_handler(retaddr);
  return a1;
}
