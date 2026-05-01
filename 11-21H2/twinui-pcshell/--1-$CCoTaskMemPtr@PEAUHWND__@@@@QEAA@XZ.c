/*
 * XREFs of ??1?$CCoTaskMemPtr@PEAUHWND__@@@@QEAA@XZ @ 0x180302FA4
 * Callers:
 *     __lambda_df8498ad81b9203ecaf5b19db9f78b07_::operator()_::_1_::dtor$0 @ 0x180217EC0 (__lambda_df8498ad81b9203ecaf5b19db9f78b07_--operator()_--_1_--dtor$0.c)
 *     _VirtualDesktopPersistence::RestoreVirtualDesktopState_::_1_::dtor$3 @ 0x18021F7BD (_VirtualDesktopPersistence--RestoreVirtualDesktopState_--_1_--dtor$3.c)
 *     _PenWorkspace::Discover::RecentAppsCache::LoadDataFromDisk_::_1_::dtor$2 @ 0x180222805 (_PenWorkspace--Discover--RecentAppsCache--LoadDataFromDisk_--_1_--dtor$2.c)
 *     _VirtualDesktopHelpers::ConvertDesktopFilter_::_1_::dtor$5 @ 0x18049F97A (_VirtualDesktopHelpers--ConvertDesktopFilter_--_1_--dtor$5.c)
 *     _VirtualDesktopThumbnailWindowFilter::GetFilterForDesktop_::_1_::dtor$0 @ 0x18049FBFF (_VirtualDesktopThumbnailWindowFilter--GetFilterForDesktop_--_1_--dtor$0.c)
 *     _CShellSnapComponent::GetHalfSnappedViewFromToolWindow_::_1_::dtor$6 @ 0x180593981 (_CShellSnapComponent--GetHalfSnappedViewFromToolWindow_--_1_--dtor$6.c)
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
