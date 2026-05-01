/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x180197958
 * Callers:
 *     _lambda_971feb14f22b89bbdba5f37e4038afc3_::operator() @ 0x1801DBCAC (_lambda_971feb14f22b89bbdba5f37e4038afc3_--operator().c)
 *     _lambda_ce5931352d189bca3a201caf88f3b656_::operator() @ 0x1801DDE10 (_lambda_ce5931352d189bca3a201caf88f3b656_--operator().c)
 *     _lambda_0190d4b48233ee3d7e5c167dfa5e03d8_::operator() @ 0x1801E8E4C (_lambda_0190d4b48233ee3d7e5c167dfa5e03d8_--operator().c)
 *     _lambda_2b1190aa71c35694843c2dd3124163c4_::operator() @ 0x1801E90D8 (_lambda_2b1190aa71c35694843c2dd3124163c4_--operator().c)
 *     ?ResetWindowRegion@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180406430 (-ResetWindowRegion@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?SetCombinedWindowRegion@GamingOverlayExperienceManager@@UEAAJIPEAURect@Foundation@Windows@@@Z @ 0x180406EA0 (-SetCombinedWindowRegion@GamingOverlayExperienceManager@@UEAAJIPEAURect@Foundation@Windows@@@Z.c)
 *     ?SetWindowRegionAsync@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHWND__@@PEAUHRGN__@@H@Z @ 0x18046FE50 (-SetWindowRegionAsync@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHWND__@@PEAUHRGN__@@H@Z.c)
 *     ?ApplyCortanaWindowRegion@SearchAppDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x180477098 (-ApplyCortanaWindowRegion@SearchAppDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@.c)
 *     ?ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x180480D94 (-ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z.c)
 *     ?ApplyCortanaWindowRegionWithCustomRects@CortanaDesktopExperienceView@@AEAAJURect@Foundation@Windows@@@Z @ 0x180481118 (-ApplyCortanaWindowRegionWithCustomRects@CortanaDesktopExperienceView@@AEAAJURect@Foundation@Win.c)
 *     ?ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z @ 0x18050E368 (-ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z.c)
 *     ?swap@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAXAEAV12@@Z @ 0x18051D7DC (-swap@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
        void **a1,
        void *a2)
{
  void *v2; // rsi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    DeleteObject(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
