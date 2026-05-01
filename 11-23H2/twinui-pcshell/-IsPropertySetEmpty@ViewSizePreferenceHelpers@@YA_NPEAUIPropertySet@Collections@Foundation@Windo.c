/*
 * XREFs of ?IsPropertySetEmpty@ViewSizePreferenceHelpers@@YA_NPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1805A0830
 * Callers:
 *     ?ActivateApp@CDelayedTileActivation@@UEAAJPEAUIImmersiveMonitor@@PEAUISplashScreen@@@Z @ 0x18059F8C0 (-ActivateApp@CDelayedTileActivation@@UEAAJPEAUIImmersiveMonitor@@PEAUISplashScreen@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801CF85C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall ViewSizePreferenceHelpers::IsPropertySetEmpty(
        __int64 (__fastcall ***this)(ViewSizePreferenceHelpers *, GUID *, __int64 *),
        struct Windows::Foundation::Collections::IPropertySet *a2)
{
  __int64 (__fastcall *v3)(ViewSizePreferenceHelpers *, GUID *, __int64 *); // rbx
  int v4; // eax
  int v5; // eax
  bool v6; // bl
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = 0LL;
  v3 = **this;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
  v4 = v3((ViewSizePreferenceHelpers *)this, &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca, &v11);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xDA,
      (int)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
      (const char *)(unsigned int)v4,
      v8);
  v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v11 + 56LL))(v11, &v10);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xDC,
      (int)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
      (const char *)(unsigned int)v5,
      v8);
  v6 = v10 == 0;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
  return v6;
}
