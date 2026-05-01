/*
 * XREFs of ??$Make@VCCortanaShownEventArgs@@AEAURect@Foundation@Windows@@AEA_N@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCCortanaShownEventArgs@@@12@AEAURect@Foundation@Windows@@AEA_N@Z @ 0x180199928
 * Callers:
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActivationMode@Shell@UI@WindowsUdk@3@PEBG@Z @ 0x18019D9F4 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActiv.c)
 * Callees:
 *     ?Attach@?$ComPtr@VCCortanaShownEventArgs@@@WRL@Microsoft@@QEAAXPEAVCCortanaShownEventArgs@@@Z @ 0x1800463FC (-Attach@-$ComPtr@VCCortanaShownEventArgs@@@WRL@Microsoft@@QEAAXPEAVCCortanaShownEventArgs@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CCortanaShownEventArgs@@QEAA@URect@Foundation@Windows@@_N@Z @ 0x18019B854 (--0CCortanaShownEventArgs@@QEAA@URect@Foundation@Windows@@_N@Z.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make<CCortanaShownEventArgs,Windows::Foundation::Rect &,bool &>(
        __int64 *a1,
        __int128 *a2,
        _BYTE *a3)
{
  void *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rax
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  *a1 = 0LL;
  v6 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    LOBYTE(v7) = *a3;
    v10 = *a2;
    v8 = CCortanaShownEventArgs::CCortanaShownEventArgs(v6, &v10, v7);
    Microsoft::WRL::ComPtr<CCortanaShownEventArgs>::Attach(a1, v8);
  }
  return a1;
}
