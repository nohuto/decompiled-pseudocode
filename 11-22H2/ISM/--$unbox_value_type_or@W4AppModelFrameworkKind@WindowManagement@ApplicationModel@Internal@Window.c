/*
 * XREFs of ??$unbox_value_type_or@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$optional@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@AEBUIUnknown@Foundation@56@AEBUnullopt_t@8@@impl@winrt@@YA?AV?$optional@W4AppModelFrameworkKind@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@AEBUIUnknown@Foundation@Windows@1@AEBUnullopt_t@3@@Z @ 0x18011ABD8
 * Callers:
 *     ?OnUniversalPropertyChanged@MPCTarget@@AEAAJUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@34567@@Z @ 0x18011B9E0 (-OnUniversalPropertyChanged@MPCTarget@@AEAAJUIUniversalAppModelWatcher@WindowManagement@Applicat.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001CCDC (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800ACD6C (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::unbox_value_type_or<enum winrt::Windows::Internal::ApplicationModel::WindowManagement::AppModelFrameworkKind,std::optional<enum winrt::Windows::Internal::ApplicationModel::WindowManagement::AppModelFrameworkKind>,winrt::Windows::Foundation::IUnknown const &,std::nullopt_t const &>(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  signed int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  signed int v10; // eax
  __int64 v12; // [rsp+48h] [rbp+28h] BYREF
  __int64 v13; // [rsp+50h] [rbp+30h] BYREF
  __int64 v14; // [rsp+58h] [rbp+38h] BYREF

  v13 = a3;
  v5 = *a2;
  if ( *a2 )
  {
    v12 = 0LL;
    (**(void (__fastcall ***)(__int64, void *, __int64 *))v5)(
      v5,
      &winrt::impl::guid_v<winrt::Windows::Foundation::IReference<enum winrt::Windows::Internal::ApplicationModel::WindowManagement::AppModelFrameworkKind>>,
      &v12);
    v5 = v12;
    v6 = v12;
  }
  else
  {
    v6 = 0LL;
  }
  v14 = v5;
  if ( v6 )
  {
    LODWORD(v13) = 0;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 48LL))(v5, &v13);
    if ( v7 < 0 )
      winrt::throw_hresult(v7);
    *(_DWORD *)a1 = v13;
    *(_BYTE *)(a1 + 4) = 1;
  }
  else
  {
    v8 = *a2;
    if ( *a2 )
    {
      v12 = 0LL;
      (**(void (__fastcall ***)(__int64, void *, __int64 *))v8)(
        v8,
        &winrt::impl::guid_v<winrt::Windows::Foundation::IReference<int>>,
        &v12);
      v8 = v12;
      v9 = v12;
    }
    else
    {
      v9 = 0LL;
    }
    v14 = v8;
    if ( !v9 )
    {
      *(_BYTE *)(a1 + 4) = 0;
      return a1;
    }
    LODWORD(v13) = 0;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 48LL))(v8, &v13);
    if ( v10 < 0 )
      winrt::throw_hresult(v10);
    *(_DWORD *)a1 = v13;
    *(_BYTE *)(a1 + 4) = 1;
  }
  winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v14);
  return a1;
}
