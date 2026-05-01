/*
 * XREFs of ?InternalRelease@?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EACA0
 * Callers:
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_712fa0ba2d8bf27a4057fb1c931fbf13___ @ 0x180021F34 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_712fa0ba2d8bf27a4057f.c)
 *     ?GetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJIPEAUtagSIZE@@0@Z @ 0x18002C3D0 (-GetSizeConstraintsForDpi@CWinRTApplicationView@@UEAAJIPEAUtagSIZE@@0@Z.c)
 *     ?v_PublishServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1800CA310 (-v_PublishServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 *     ??$MakeAndInitialize@VCGlobals@ApplicationViewManagement@@V12@AEAPEAVCApplicationViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCGlobals@ApplicationViewManagement@@AEAPEAVCApplicationViewManager@@@Z @ 0x1800CA3A4 (--$MakeAndInitialize@VCGlobals@ApplicationViewManagement@@V12@AEAPEAVCApplicationViewManager@@@D.c)
 *     ?QuerySizeConstraintsFromApp@CWin32ApplicationView@@UEAAJXZ @ 0x1800E7040 (-QuerySizeConstraintsFromApp@CWin32ApplicationView@@UEAAJXZ.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_75666d3f525b2f2bac154c43ea5df633___ @ 0x1800E72E8 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_75666d3f525b2f2bac154.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_0067f30f54eb0de3635ee7c500c831b5___ @ 0x1800E9D34 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_0067f30f54eb0de3635ee.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_996cccf22044f7b06fef961424ec8d78___ @ 0x1800EAF68 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_996cccf22044f7b06fef9.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_1b0c182535871ea6c5139e310f080a01___ @ 0x1800ECAF8 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_1b0c182535871ea6c5139.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_d38650e98aaa1c01633db47e65347927___ @ 0x180190E44 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_d38650e98aaa1c01633db.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_807778e6719fb664354e7e91ff2b2b86___ @ 0x180311A90 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_807778e6719fb664354e7.c)
 *     ?SetPosition@CWin32ApplicationView@@UEAAJPEAUIApplicationViewPosition@@@Z @ 0x180313640 (-SetPosition@CWin32ApplicationView@@UEAAJPEAUIApplicationViewPosition@@@Z.c)
 *     ?SetWindowPosition@CWin32ApplicationView@@AEAAJPEAUHWND__@@AEBUtagWINDOWPLACEMENT@@@Z @ 0x180313B34 (-SetWindowPosition@CWin32ApplicationView@@AEAAJPEAUHWND__@@AEBUtagWINDOWPLACEMENT@@@Z.c)
 *     ?AdjustSizeForChrome@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@I@Z @ 0x180313FAC (-AdjustSizeForChrome@CWinRTApplicationView@@AEAAJPEAUtagSIZE@@I@Z.c)
 *     ?InsertAfterWindow@CApplicationViewBase@@UEAAJPEAUHWND__@@@Z @ 0x180314FF0 (-InsertAfterWindow@CApplicationViewBase@@UEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalRelease(
        volatile signed __int32 **a1)
{
  unsigned int v1; // ebx
  volatile signed __int32 *v2; // r8
  signed __int32 v3; // edx
  unsigned __int32 v4; // edi

  v1 = 0;
  v2 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    do
      v3 = *((_DWORD *)v2 + 9);
    while ( v3 != 0x7FFFFFFF && v3 != _InterlockedCompareExchange(v2 + 9, v3 - 1, v3) );
    v4 = v3 - 1;
    if ( v3 == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 72LL))(v2, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    return v4;
  }
  return v1;
}
