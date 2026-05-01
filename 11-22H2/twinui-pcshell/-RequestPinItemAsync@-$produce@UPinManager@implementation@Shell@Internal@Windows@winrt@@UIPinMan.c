/*
 * XREFs of ?RequestPinItemAsync@?$produce@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIPinManager@3456@@impl@winrt@@UEAAHPEAX00PEAPEAX@Z @ 0x1806A4F20
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ?RequestPinItemAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@Uhstring@6@0USecondaryTile@StartScreen@UI@56@@Z @ 0x1806A502C (-RequestPinItemAsync@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA-AU-$IAsyncOper.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::PinManager,winrt::Windows::Internal::Shell::IPinManager>::RequestPinItemAsync(
        __int64 a1,
        winrt::impl *a2,
        winrt::impl *a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 v7; // rdi
  struct winrt::impl::hstring_header *v8; // rdx
  unsigned int v9; // r8d
  struct winrt::impl::hstring_header *v10; // rdx
  unsigned int v11; // r8d
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // [rsp+30h] [rbp-58h] BYREF
  struct winrt::impl::hstring_header *v16; // [rsp+38h] [rbp-50h] BYREF
  struct winrt::impl::hstring_header *v17; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v18[8]; // [rsp+48h] [rbp-40h] BYREF

  *a5 = 0LL;
  v7 = (a1 - 8) & -(__int64)(a1 != 0);
  v18[1] = &v15;
  v15 = a4;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v15);
  v18[2] = &v16;
  try
  {
    v16 = winrt::impl::duplicate_hstring(a3, v8, v9);
    v17 = winrt::impl::duplicate_hstring(a2, v10, v11);
    v12 = (__int64 *)winrt::Windows::Internal::Shell::implementation::PinManager::RequestPinItemAsync(
                       v7,
                       v18,
                       &v17,
                       &v16,
                       &v15);
    v13 = *v12;
    *v12 = 0LL;
    *a5 = v13;
    if ( v18[0] )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v18);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v15);
  }
  return result;
}
