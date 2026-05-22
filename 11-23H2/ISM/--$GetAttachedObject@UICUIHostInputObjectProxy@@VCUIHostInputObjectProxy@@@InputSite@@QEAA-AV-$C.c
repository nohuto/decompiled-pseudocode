/*
 * XREFs of ??$GetAttachedObject@UICUIHostInputObjectProxy@@VCUIHostInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@VCUIHostInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x18009AFE8
 * Callers:
 *     ?NotifyWindowOfActivationStateChange@CUIHierarchy@@AEAAXPEAUCUIWindow@@W4CUIActivationState@Input@Internal@UI@Windows@@_K@Z @ 0x18009C470 (-NotifyWindowOfActivationStateChange@CUIHierarchy@@AEAAXPEAUCUIWindow@@W4CUIActivationState@Inpu.c)
 *     ?UpdateInputDisabledStateOnWindowAddition@CUIHierarchy@@AEAAX_K@Z @ 0x18009D95C (-UpdateInputDisabledStateOnWindowAddition@CUIHierarchy@@AEAAX_K@Z.c)
 *     ?TransferForegroundToHost@CUIComponentInputObjectProxy@@MEAAJAEBUTransferForegroundInfo@@@Z @ 0x180142610 (-TransferForegroundToHost@CUIComponentInputObjectProxy@@MEAAJAEBUTransferForegroundInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UICUIHostInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICUIHostInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18009AEE8 (--$As@UICUIHostInputObjectProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPt.c)
 */

_QWORD *__fastcall InputSite::GetAttachedObject<ICUIHostInputObjectProxy,CUIHostInputObjectProxy>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rbp
  void (__fastcall ***v6)(_QWORD); // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  v8 = 0LL;
  v4 = *(_QWORD *)(a1 + 488);
  v5 = *(_QWORD *)(a1 + 496);
  if ( v4 != v5 )
  {
    do
    {
      if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<ICUIHostInputObjectProxy>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v4 + 8),
                  &v8) >= 0 )
        break;
      v4 += 16LL;
    }
    while ( v4 != v5 );
    v3 = v8;
  }
  v6 = (void (__fastcall ***)(_QWORD))((v3 - 8) & -(__int64)(v3 != 0));
  *a2 = v6;
  if ( v6 )
    (**v6)(v6);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v8);
  return a2;
}
