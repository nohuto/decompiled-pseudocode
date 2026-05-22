/*
 * XREFs of ?PresentationMode@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModel@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AW4AppModelHolographicPresentationMode@WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x1800F1A2C
 * Callers:
 *     ?GetPresentationModeFromViewId@ViewHelper@@SA?AW4AppModelHolographicPresentationMode@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@I@Z @ 0x1800F02F4 (-GetPresentationModeFromViewId@ViewHelper@@SA-AW4AppModelHolographicPresentationMode@WindowManag.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800836D4 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModel<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>::PresentationMode(
        __int64 *a1)
{
  __int64 v1; // rcx
  signed int v2; // eax
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0;
  v2 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v1 + 440LL))(v1, &v4);
  if ( v2 < 0 )
    winrt::throw_hresult(v2);
  return v4;
}
