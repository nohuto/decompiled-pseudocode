/*
 * XREFs of ??$Make@VCCortanaShownEventArgs@@AEAURect@Foundation@Windows@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCCortanaShownEventArgs@@@12@AEAURect@Foundation@Windows@@@Z @ 0x18003E0BC
 * Callers:
 *     ?Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18003DA50 (-Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experie.c)
 *     ?OnClientWindowReadyForPresentationChanged@UndockedSearchAppExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x18003DF00 (-OnClientWindowReadyForPresentationChanged@UndockedSearchAppExperienceManager@@AEAAJPEAUIClientW.c)
 *     ?OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x1800E3CC0 (-OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z.c)
 *     ?OnVisibilityChangedTimeoutTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180469BF8 (-OnVisibilityChangedTimeoutTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??0CCortanaShownEventArgs@@QEAA@URect@Foundation@Windows@@_N@Z @ 0x18003E120 (--0CCortanaShownEventArgs@@QEAA@URect@Foundation@Windows@@_N@Z.c)
 *     ?Attach@?$ComPtr@VCCortanaShownEventArgs@@@WRL@Microsoft@@QEAAXPEAVCCortanaShownEventArgs@@@Z @ 0x18003E1D4 (-Attach@-$ComPtr@VCCortanaShownEventArgs@@@WRL@Microsoft@@QEAAXPEAVCCortanaShownEventArgs@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make<CCortanaShownEventArgs,Windows::Foundation::Rect &>(
        _QWORD *a1,
        __int128 *a2)
{
  void *v4; // rax
  __int64 v5; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v7 = *a2;
    v5 = CCortanaShownEventArgs::CCortanaShownEventArgs(v4, &v7, 0LL);
    Microsoft::WRL::ComPtr<CCortanaShownEventArgs>::Attach(a1, v5);
  }
  return a1;
}
