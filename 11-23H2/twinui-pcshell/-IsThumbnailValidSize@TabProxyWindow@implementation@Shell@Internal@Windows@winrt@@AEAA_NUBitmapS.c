/*
 * XREFs of ?IsThumbnailValidSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA_NUBitmapSize@Imaging@Graphics@56@V?$com_ptr_t@UIWICBitmapSource@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18063B960
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$1 @ 0x18021C660 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePreviewAsync$_Resu.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_ResumeCoro$1 @ 0x18021D770 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TrySetWindowThumbnailAsync$_Res.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAA_NXZ @ 0x180117BCC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::IsThumbnailValidSize(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  unsigned int v4; // ebx
  char v5; // di
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h]
  __int64 *v9; // [rsp+50h] [rbp+18h]
  unsigned int v10; // [rsp+58h] [rbp+20h] BYREF

  v9 = a3;
  v8 = a2;
  v7 = a1;
  v4 = a2;
  v5 = 0;
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_WTMPublic>::GetImpl'::`2'::impl)
    || ((*(void (__fastcall **)(__int64, __int64 *, unsigned int *))(*(_QWORD *)*a3 + 24LL))(*a3, &v7, &v10),
        (unsigned int)v7 <= v4)
    && v10 <= HIDWORD(v8) )
  {
    v5 = 1;
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a3);
  return v5;
}
