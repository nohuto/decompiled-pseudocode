/*
 * XREFs of ??1?$CCoTaskMemPtr@PEAUHWND__@@@@QEAA@XZ @ 0x18021451C
 * Callers:
 *     ?SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x180145BA0 (-SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     __lambda_df8498ad81b9203ecaf5b19db9f78b07_::operator()_::_1_::dtor$0 @ 0x1802BA622 (__lambda_df8498ad81b9203ecaf5b19db9f78b07_--operator()_--_1_--dtor$0.c)
 *     _CVirtualDesktopComponent::SubscribeToServices_::_1_::dtor$13 @ 0x1802C3FE0 (_CVirtualDesktopComponent--SubscribeToServices_--_1_--dtor$13.c)
 *     _VirtualDesktopPersistence::RestoreVirtualDesktopState_::_1_::dtor$3 @ 0x1802C44D1 (_VirtualDesktopPersistence--RestoreVirtualDesktopState_--_1_--dtor$3.c)
 *     _PenWorkspace::Discover::RecentAppsCache::LoadDataFromDisk_::_1_::dtor$2 @ 0x1802C5A56 (_PenWorkspace--Discover--RecentAppsCache--LoadDataFromDisk_--_1_--dtor$2.c)
 *     _TryGetTitleFromExePath_::_1_::dtor$1 @ 0x1803DC580 (_TryGetTitleFromExePath_--_1_--dtor$1.c)
 *     _VirtualDesktopHelpers::ConvertDesktopFilter_::_1_::dtor$5 @ 0x18055F3BD (_VirtualDesktopHelpers--ConvertDesktopFilter_--_1_--dtor$5.c)
 *     _VirtualDesktopThumbnailWindowFilter::GetFilterForDesktop_::_1_::dtor$0 @ 0x18055F64A (_VirtualDesktopThumbnailWindowFilter--GetFilterForDesktop_--_1_--dtor$0.c)
 *     _CShellSnapComponent::GetSnappedViewFromToolWindow_::_1_::dtor$6 @ 0x1806616FE (_CShellSnapComponent--GetSnappedViewFromToolWindow_--_1_--dtor$6.c)
 *     _CPinnedList::InternalModify_::_1_::dtor$1 @ 0x18075804D (_CPinnedList--InternalModify_--_1_--dtor$1.c)
 *     _CPinnedList::InternalModify_::_1_::dtor$22 @ 0x180758125 (_CPinnedList--InternalModify_--_1_--dtor$22.c)
 *     ?PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z @ 0x180759AA0 (-PinShellLink@CPinnedList@@UEAAJPEBGPEAUIShellLinkW@@@Z.c)
 *     _CPinnedList::PinShellLink_::_1_::dtor$2 @ 0x180759E0E (_CPinnedList--PinShellLink_--_1_--dtor$2.c)
 *     _SetPinTimeForPinnedItem_::_1_::dtor$1 @ 0x18075BB7C (_SetPinTimeForPinnedItem_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall CCoTaskMemPtr<HWND__ *>::~CCoTaskMemPtr<HWND__ *>(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  *a1 = 0LL;
  CoTaskMemFree(v2);
}
