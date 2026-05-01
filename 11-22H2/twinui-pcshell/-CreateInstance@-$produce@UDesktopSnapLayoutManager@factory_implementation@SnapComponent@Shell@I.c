/*
 * XREFs of ?CreateInstance@?$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIDesktopSnapLayoutManagerFactory@34567@@impl@winrt@@UEAAHPEAX0PEAPEAX1@Z @ 0x1806832F0
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??$as@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x180681E5C (--$as@UDesktopSnapLayoutManager@SnapComponent@Shell@Internal@Windows@winrt@@Utype@-$abi@UIUnknow.c)
 *     ??0DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@AEBUDisplayRegion@WindowManagement@UI@56@@Z @ 0x180682750 (--0DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@AEBU.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManagerFactory>::CreateInstance(
        __int64 (__fastcall ***a1)(_QWORD, void *, __int64 *),
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        _QWORD *a5)
{
  _QWORD *v7; // rsi
  _QWORD *v8; // rbx
  __int64 (__fastcall ***v9)(_QWORD, void *, __int64 *); // rbx
  __int64 (__fastcall ***v10)(_QWORD, void *, __int64 *); // rax
  __int64 result; // rax
  __int64 (__fastcall ***v12)(_QWORD, void *, __int64 *); // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  v12 = a1;
  if ( a4 )
    *a4 = 0LL;
  v12 = 0LL;
  v7 = a5;
  *a5 = 0LL;
  try
  {
    v8 = operator new(0x80uLL);
    a5 = v8;
    winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::DesktopSnapLayoutManager(
      (winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *)v8,
      (const struct winrt::Windows::UI::WindowManagement::DisplayRegion *)&v13);
    *v8 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager>::`vftable';
    v8[3] = a3;
    if ( v8 )
      v8 += 2;
    a5 = v8;
    winrt::Windows::Foundation::IUnknown::operator=(
      (winrt::Windows::Foundation::IUnknown *)&v12,
      (winrt::Windows::Foundation::IUnknown *)&a5);
    if ( a5 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&a5);
    v9 = v12;
    winrt::impl::as<winrt::Windows::Internal::Shell::SnapComponent::DesktopSnapLayoutManager,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
      &a5,
      v12);
    *v7 = a5;
    if ( a4 )
    {
      v10 = v9;
      v9 = 0LL;
      v12 = 0LL;
      *a4 = v10;
    }
    if ( v9 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v12);
  }
  return result;
}
