/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18022CC64
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$1 @ 0x1801BC650 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePreviewAsync$_Resu.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_ResumeCoro$1 @ 0x1801BDA00 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TrySetWindowThumbnailAsync$_Res.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1803865F8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1-DeleteObject@.c)
 *     ?HICONFromBitmap@SearchAppDesktopExperienceView@@CAPEAUHICON__@@PEAUHBITMAP__@@@Z @ 0x180387724 (-HICONFromBitmap@SearchAppDesktopExperienceView@@CAPEAUHICON__@@PEAUHBITMAP__@@@Z.c)
 *     ?SetDefaultIconForProxyWindowThumbnail@CortanaStoreAppExperienceManager@@CAJPEAUHWND__@@@Z @ 0x1803882E4 (-SetDefaultIconForProxyWindowThumbnail@CortanaStoreAppExperienceManager@@CAJPEAUHWND__@@@Z.c)
 *     ?SetDefaultIconForProxyWindowThumbnail@SearchAppDesktopExperienceView@@CAJPEAUHWND__@@@Z @ 0x18039DC68 (-SetDefaultIconForProxyWindowThumbnail@SearchAppDesktopExperienceView@@CAJPEAUHWND__@@@Z.c)
 *     ?SetDefaultIconForProxyWindowThumbnail@CortanaDesktopExperienceView@@CAJPEAUHWND__@@@Z @ 0x1803AC3A0 (-SetDefaultIconForProxyWindowThumbnail@CortanaDesktopExperienceView@@CAJPEAUHWND__@@@Z.c)
 *     ?IconLoaded@AppViewIconLoader@@UEAAXPEAUHBITMAP__@@@Z @ 0x180454810 (-IconLoaded@AppViewIconLoader@@UEAAXPEAUHBITMAP__@@@Z.c)
 *     CreationThreadDispatcher::RunSync__lambda_5ea9e0d66c10f711b3db559ea9842d24___ @ 0x18049EB08 (CreationThreadDispatcher--RunSync__lambda_5ea9e0d66c10f711b3db559ea9842d24___.c)
 *     _lambda_5ea9e0d66c10f711b3db559ea9842d24_::__lambda_5ea9e0d66c10f711b3db559ea9842d24_ @ 0x18049ECF0 (_lambda_5ea9e0d66c10f711b3db559ea9842d24_--__lambda_5ea9e0d66c10f711b3db559ea9842d24_.c)
 *     _lambda_33b4202f4967ef1cd2a31cded00016d1_::operator() @ 0x18049ED18 (_lambda_33b4202f4967ef1cd2a31cded00016d1_--operator().c)
 *     CAsyncCallbackWithLambda__lambda_2509a4ecc3ed89a3306d425d8ffcf7d3___::_scalar_deleting_destructor_ @ 0x18049EEE0 (CAsyncCallbackWithLambda__lambda_2509a4ecc3ed89a3306d425d8ffcf7d3___--_scalar_deleting_destructo.c)
 *     ?_TagDividerBitmap@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1804E14D4 (-_TagDividerBitmap@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 *     ?GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHICON__@@P6AHPEAU1@@Z$1?DestroyIcon@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@UtagSIZE@@@Z @ 0x18057B628 (-GetIconFromGlyphForSize@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$un.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>(
        void **a1)
{
  void *v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return DeleteObject(v1);
  return result;
}
