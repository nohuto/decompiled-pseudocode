/*
 * XREFs of ?TryGetScalar@?$consume_Windows_UI_Composition_ICompositionPropertySet@UICompositionPropertySet@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEAM@Z @ 0x18055CCD4
 * Callers:
 *     _lambda_508ef90450617154956e0b927fb269e2_::operator()_winrt::Windows::Foundation::IInspectable_const_&_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs_const_&_ @ 0x180554670 (_lambda_508ef90450617154956e0b927fb269e2_--operator()_winrt--Windows--Foundation--IInspectable_c.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_UI_Composition_ICompositionPropertySet<winrt::Windows::UI::Composition::ICompositionPropertySet>::TryGetScalar(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v3; // rcx
  signed int v4; // eax
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v6 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, unsigned int *))(*(_QWORD *)v3 + 144LL))(v3, *a2, a3, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  return v6;
}
