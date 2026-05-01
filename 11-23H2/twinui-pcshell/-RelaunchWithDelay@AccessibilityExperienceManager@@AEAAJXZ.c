/*
 * XREFs of ?RelaunchWithDelay@AccessibilityExperienceManager@@AEAAJXZ @ 0x1800F52D0
 * Callers:
 *     ?SubscribeToServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800E7BB0 (-SubscribeToServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?_OnViewEvent@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18053D800 (-_OnViewEvent@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Int.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJPEAPEAVCMarshalStream@CMarshaledInterface@@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x1800E2B7C (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4M.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_9365875fc030439f6f0f43b5b8276b2a___ @ 0x1800F5414 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_9365875fc030439f6f0f43b5b8276b2a___.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AccessibilityExperienceManager::RelaunchWithDelay(AccessibilityExperienceManager *this)
{
  int v1; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // ebx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  __int64 v11; // [rsp+30h] [rbp+10h] BYREF
  __int64 v12; // [rsp+38h] [rbp+18h] BYREF
  IUnknown *v13; // [rsp+40h] [rbp+20h] BYREF

  v12 = 0LL;
  LODWORD(v11) = 1;
  v13 = (IUnknown *)(((unsigned __int64)this + 136) & -(__int64)(this != 0LL));
  v1 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
         &v12,
         &GUID_326a2a2b_1237_4b24_8d66_3a12716d64fa,
         &v13,
         (int *)&v11);
  if ( v1 < 0 )
  {
    v7 = (unsigned int)v1;
    v8 = 594LL;
LABEL_6:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)v7,
      savedregs);
    goto LABEL_3;
  }
  v11 = v12;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v11);
  v5 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_9365875fc030439f6f0f43b5b8276b2a___(v3, v2, v4, &v11);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
  if ( v5 < 0 )
  {
    v7 = (unsigned int)v5;
    v8 = 614LL;
    goto LABEL_6;
  }
LABEL_3:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
  return 0LL;
}
