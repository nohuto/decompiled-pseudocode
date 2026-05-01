/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x1801569AC
 * Callers:
 *     _lambda_574b9ee63444c44a46a862f04548e180_::operator() @ 0x180191E90 (_lambda_574b9ee63444c44a46a862f04548e180_--operator().c)
 *     _lambda_c9e41158417a66ad4ebde63763de7538_::operator() @ 0x1801946AC (_lambda_c9e41158417a66ad4ebde63763de7538_--operator().c)
 *     _lambda_6e59436657fdc730ce46c13d2be9f9a3_::operator() @ 0x18019C240 (_lambda_6e59436657fdc730ce46c13d2be9f9a3_--operator().c)
 *     _lambda_731699364cbddcd54af95a8546718700_::operator() @ 0x18019C3DC (_lambda_731699364cbddcd54af95a8546718700_--operator().c)
 *     _lambda_b9b326c89cb8166a780ad4ef449f4933_::operator() @ 0x18019C64C (_lambda_b9b326c89cb8166a780ad4ef449f4933_--operator().c)
 *     _lambda_fbed9b0dbceac467dbc3ac26d82f2743_::operator() @ 0x18019D284 (_lambda_fbed9b0dbceac467dbc3ac26d82f2743_--operator().c)
 *     ?ResetWindowRegion@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180338790 (-ResetWindowRegion@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?SetCombinedWindowRegion@GamingOverlayExperienceManager@@UEAAJIPEAURect@Foundation@Windows@@@Z @ 0x1803392E0 (-SetCombinedWindowRegion@GamingOverlayExperienceManager@@UEAAJIPEAURect@Foundation@Windows@@@Z.c)
 *     ?SetWindowRegionAsync@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHWND__@@PEAUHRGN__@@H@Z @ 0x180391A60 (-SetWindowRegionAsync@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHWND__@@PEAUHRGN__@@H@Z.c)
 *     ?ApplyCortanaWindowRegion@SearchAppDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x180398798 (-ApplyCortanaWindowRegion@SearchAppDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@.c)
 *     ?ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x1803A5988 (-ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z.c)
 *     ?ApplyCortanaWindowRegionWithCustomRects@CortanaDesktopExperienceView@@AEAAJURect@Foundation@Windows@@@Z @ 0x1803A5D04 (-ApplyCortanaWindowRegionWithCustomRects@CortanaDesktopExperienceView@@AEAAJURect@Foundation@Win.c)
 *     ?ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z @ 0x18045C7D4 (-ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
        void **a1,
        void *a2)
{
  void *v4; // rsi
  DWORD LastError; // ebx

  v4 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    DeleteObject(v4);
    SetLastError(LastError);
  }
  *a1 = a2;
}
