/*
 * XREFs of ?GetAt@?$consume_Windows_Foundation_Collections_IVectorView@UIWwwFormUrlDecoderRuntimeClass@Foundation@Windows@winrt@@UIWwwFormUrlDecoderEntry@234@@impl@winrt@@QEBA@I@Z @ 0x18072B3F0
 * Callers:
 *     ?to_multimap@implementation@Shell@Internal@Windows@winrt@@YA@AEBUWwwFormUrlDecoder@Foundation@45@@Z @ 0x18072BEEC (-to_multimap@implementation@Shell@Internal@Windows@winrt@@YA@AEBUWwwFormUrlDecoder@Foundation@45.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
winrt::Windows::Foundation::IUnknown *__fastcall winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::IWwwFormUrlDecoderRuntimeClass,winrt::Windows::Foundation::IWwwFormUrlDecoderEntry>::GetAt(
        void (__fastcall ****a1)(_QWORD, void *, __int64 *),
        winrt::Windows::Foundation::IUnknown *a2,
        unsigned int a3)
{
  void (__fastcall ***v5)(_QWORD, void *, __int64 *); // rcx
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 (__fastcall *v8)(__int64, _QWORD, winrt::Windows::Foundation::IUnknown *); // rbp
  signed int v9; // eax
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  winrt::Windows::Foundation::IUnknown *v12; // [rsp+68h] [rbp+10h]
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  v12 = a2;
  *(_QWORD *)a2 = 0LL;
  v5 = *a1;
  if ( v5 )
  {
    v11 = 0LL;
    (**v5)(
      v5,
      &winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Foundation::IWwwFormUrlDecoderEntry>>,
      &v11);
    v6 = v11;
    v7 = v11;
  }
  else
  {
    v6 = 0LL;
    v7 = 0LL;
  }
  v13 = v6;
  v8 = *(__int64 (__fastcall **)(__int64, _QWORD, winrt::Windows::Foundation::IUnknown *))(*(_QWORD *)v6 + 48LL);
  if ( *(_QWORD *)a2 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a2);
  v9 = v8(v6, a3, a2);
  if ( v9 < 0 )
    winrt::throw_hresult(v9);
  if ( v7 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v13);
  return a2;
}
