/*
 * XREFs of ?v_PublishServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1800CA310
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCGlobals@ApplicationViewManagement@@V12@AEAPEAVCApplicationViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCGlobals@ApplicationViewManagement@@AEAPEAVCApplicationViewManager@@@Z @ 0x1800CA3A4 (--$MakeAndInitialize@VCGlobals@ApplicationViewManagement@@V12@AEAPEAVCApplicationViewManager@@@D.c)
 *     ?InternalRelease@?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EACA0 (-InternalRelease@-$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CApplicationViewManager::v_PublishServices(
        CApplicationViewManager *this,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  int v3; // eax
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  char *v10; // [rsp+48h] [rbp+20h] BYREF

  v9 = 0LL;
  v10 = (char *)this - 72;
  Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalRelease(&v9, a2);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<ApplicationViewManagement::CGlobals,ApplicationViewManagement::CGlobals,CApplicationViewManager * &>(
         &v9,
         &v10);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36,
      (__int64)"internal\\shell\\private\\inc\\GlobalsUtil.h",
      (const char *)(unsigned int)v3);
  }
  else
  {
    AcquireSRWLockExclusive(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
    v5 = v9;
    v9 = 0LL;
    GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_pGlobals = v5;
    ReleaseSRWLockExclusive(&GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::_s_lock);
    v4 = 0;
  }
  Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalRelease(&v9, v6);
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v4);
  return (unsigned int)v4;
}
