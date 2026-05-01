/*
 * XREFs of ??$get_begin_iterator@U?$IIterable@UPackageVolume@Deployment@Management@Windows@winrt@@@Collections@Foundation@Windows@winrt@@$0A@@impl@winrt@@YA?AU?$IIterator@UPackageVolume@Deployment@Management@Windows@winrt@@@Collections@Foundation@Windows@1@AEBU?$IIterable@UPackageVolume@Deployment@Management@Windows@winrt@@@3451@@Z @ 0x180230078
 * Callers:
 *     ?begin@?$consume_Windows_Foundation_Collections_IIterable@U?$IIterable@UPackageVolume@Deployment@Management@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UPackageVolume@Deployment@Management@45@@impl@winrt@@QEBA@XZ @ 0x180249128 (-begin@-$consume_Windows_Foundation_Collections_IIterable@U-$IIterable@UPackageVolume@Deployment.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::get_begin_iterator<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Management::Deployment::PackageVolume>,0>(
        _QWORD *a1,
        _QWORD *a2)
{
  int v3; // eax
  __int64 v4; // rdi
  int v5; // eax
  char v7; // [rsp+48h] [rbp+10h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a2 + 48LL))(*a2, &v9);
  if ( v3 < 0 )
    winrt::throw_hresult((unsigned int)v3);
  v4 = v9;
  v8 = v9;
  v7 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 56LL))(v9, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult((unsigned int)v5);
  if ( v7 )
  {
    v8 = 0LL;
    *a1 = v4;
  }
  else
  {
    *a1 = 0LL;
  }
  winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v8);
  return a1;
}
