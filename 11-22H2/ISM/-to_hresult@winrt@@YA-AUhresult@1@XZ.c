/*
 * XREFs of ?to_hresult@winrt@@YA?AUhresult@1@XZ @ 0x1800AD058
 * Callers:
 *     _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs___lambda_66ed2df52651243ff863a12d97446406___::Invoke_::_1_::catch$8 @ 0x18007FC62 (_winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Internal--A.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher_winrt::Windows::Foundation::IInspectable___lambda_1fc43c971fd1247187255afbf1b5936c___::Invoke_::_1_::catch$6 @ 0x1800AB6FB (_winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows_ea_1800AB6FB.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher_winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalPropertyChangedEventArgs___lambda_be02bfc96701eec5f3a0245d87020f54___::Invoke_::_1_::catch$7 @ 0x1800AE68B (_winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows_ea_1800AE68B.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher_winrt::Windows::Foundation::IInspectable___lambda_60bc5d93aa36c864d5d47e476cd7d1f3___::Invoke_::_1_::catch$6 @ 0x1800AE75B (_winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows_ea_1800AE75B.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs___lambda_8796a88b72841d6ebf3a72c1da83edbf___::Invoke_::_1_::catch$8 @ 0x1800AE82B (_winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows_ea_1800AE82B.c)
 *     _winrt::impl::delegate_winrt::Windows::System::Threading::WorkItemHandler__lambda_d47f631da3751d72c8a8e135519addbc___::Invoke_::_1_::catch$0 @ 0x1800F263B (_winrt--impl--delegate_winrt--Windows--System--Threading--WorkItemHandler__lambda_d47f631da3751d.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher_winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalPropertyChangedEventArgs___lambda_f7189cc794088eeaf33bed95e453010f___::Invoke_::_1_::catch$0 @ 0x18011B57E (_winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows_ea_18011B57E.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180057B56 (_CxxThrowException_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

_DWORD *__fastcall winrt::to_hresult(_DWORD *a1)
{
  _BYTE *v3; // rbp
  _BYTE *v4; // rbp
  _BYTE *v5; // rbp
  __int64 v6; // rax
  _BYTE *v7; // rdx
  _BYTE *v8; // rdx
  _BYTE *v9; // rdx
  _BYTE *v10; // rdx
  _BYTE *v11; // rdx
  _BYTE v12[32]; // [rsp+0h] [rbp-88h] BYREF
  const winrt::hresult_error *v13; // [rsp+20h] [rbp-68h] BYREF
  const std::out_of_range *v14; // [rsp+28h] [rbp-60h] BYREF
  const std::invalid_argument *v15; // [rsp+30h] [rbp-58h] BYREF
  const std::exception *v16; // [rsp+38h] [rbp-50h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v18; // [rsp+90h] [rbp+8h]

  if ( !winrt_to_hresult_handler )
  {
    try
    {
      throw;
    }
    catch ( const winrt::hresult_error *v13 )
    {
      v7 = v12;
      winrt::hresult_error::to_abi(*((_QWORD *)v7 + 4), *((_DWORD **)v7 + 18));
      return (_DWORD *)v18;
    }
    catch ( std::bad_alloc )
    {
      v8 = v12;
      **((_DWORD **)v8 + 18) = -2147024882;
      return (_DWORD *)v18;
    }
    catch ( const std::out_of_range *v14 )
    {
      v9 = v12;
      v3 = v9;
      *((_QWORD *)v9 + 19) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v9 + 5) + 8LL))(*((_QWORD *)v9 + 5));
      *((_QWORD *)v3 + 11) = *winrt::to_hstring<char const *,0>(
                                (struct winrt::impl::shared_hstring_header **)v3 + 20,
                                (const CHAR **)v3 + 19);
      winrt::hresult_error::hresult_error((__int64)(v3 + 64), winrt::impl::error_out_of_bounds, (_QWORD *)v3 + 11);
      winrt::hresult_error::to_abi((__int64)(v3 + 64), *((_DWORD **)v3 + 18));
      if ( *((_QWORD *)v3 + 10) )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)v3 + 10);
      winrt::handle_type<winrt::impl::bstr_traits>::close((OLECHAR **)v3 + 8);
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)v3 + 20);
      return (_DWORD *)v18;
    }
    catch ( const std::invalid_argument *v15 )
    {
      v10 = v12;
      v4 = v10;
      *((_QWORD *)v10 + 19) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v10 + 6) + 8LL))(*((_QWORD *)v10 + 6));
      *((_QWORD *)v4 + 11) = *winrt::to_hstring<char const *,0>(
                                (struct winrt::impl::shared_hstring_header **)v4 + 20,
                                (const CHAR **)v4 + 19);
      winrt::hresult_error::hresult_error((__int64)(v4 + 64), winrt::impl::error_invalid_argument, (_QWORD *)v4 + 11);
      winrt::hresult_error::to_abi((__int64)(v4 + 64), *((_DWORD **)v4 + 18));
      if ( *((_QWORD *)v4 + 10) )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)v4 + 10);
      winrt::handle_type<winrt::impl::bstr_traits>::close((OLECHAR **)v4 + 8);
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)v4 + 20);
      return (_DWORD *)v18;
    }
    catch ( const std::exception *v16 )
    {
      v11 = v12;
      v5 = v11;
      *((_QWORD *)v11 + 19) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v11 + 7) + 8LL))(*((_QWORD *)v11 + 7));
      *((_QWORD *)v5 + 11) = *winrt::to_hstring<char const *,0>(
                                (struct winrt::impl::shared_hstring_header **)v5 + 20,
                                (const CHAR **)v5 + 19);
      v6 = winrt::hresult_error::hresult_error((__int64)(v5 + 64), winrt::impl::error_fail, (_QWORD *)v5 + 11);
      winrt::hresult_error::to_abi(v6, *((_DWORD **)v5 + 18));
      if ( *((_QWORD *)v5 + 10) )
        winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)v5 + 10);
      winrt::handle_type<winrt::impl::bstr_traits>::close((OLECHAR **)v5 + 8);
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)v5 + 20);
      return (_DWORD *)v18;
    }
  }
  *a1 = winrt_to_hresult_handler(retaddr);
  return a1;
}
