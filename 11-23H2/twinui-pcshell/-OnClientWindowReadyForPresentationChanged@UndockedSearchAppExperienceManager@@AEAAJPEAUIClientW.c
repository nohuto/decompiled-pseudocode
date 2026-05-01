/*
 * XREFs of ?OnClientWindowReadyForPresentationChanged@UndockedSearchAppExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x18003DF00
 * Callers:
 *     <none>
 * Callees:
 *     ??$UndockedSearchAppExperienceManager_OnClientWindowReadyForPresentationChanged@AEAE@SearchAppExperienceManagerTelemetry@@SAXAEAE@Z @ 0x18003E030 (--$UndockedSearchAppExperienceManager_OnClientWindowReadyForPresentationChanged@AEAE@SearchAppEx.c)
 *     ??$Make@VCCortanaShownEventArgs@@AEAURect@Foundation@Windows@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCCortanaShownEventArgs@@@12@AEAURect@Foundation@Windows@@@Z @ 0x18003E0BC (--$Make@VCCortanaShownEventArgs@@AEAURect@Foundation@Windows@@@Details@WRL@Microsoft@@YA-AV-$Com.c)
 *     ??$InvokeAll@PEAVUndockedSearchAppExperienceManager@@PEAUICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVUndockedSearchAppExperienceManager@@PEAUICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18003E208 (--$InvokeAll@PEAVUndockedSearchAppExperienceManager@@PEAUICortanaShownEventArgs@Experience@Shell.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800527B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEven.c)
 *     ?BringToForeground@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x18005A874 (-BringToForeground@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UndockedSearchAppExperienceManager::OnClientWindowReadyForPresentationChanged(
        UndockedSearchAppExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *a3)
{
  const char *v5; // r9
  int v6; // ebx
  __int64 v7; // rdx
  __int64 *v9; // rax
  __int64 v10; // rbx
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v13; // [rsp+30h] [rbp+8h] BYREF
  __int64 v14; // [rsp+48h] [rbp+20h] BYREF

  if ( GetCurrentThreadId() != *((_DWORD *)this + 182) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xB54,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      v5);
  v13 = 0;
  v6 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *, char *))(*(_QWORD *)a2 + 72LL))(
         a2,
         &v13);
  if ( v6 < 0 )
  {
    v7 = 2208LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      (const char *)(unsigned int)v6,
      v11);
    return (unsigned int)v6;
  }
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_OnClientWindowReadyForPresentationChanged<unsigned char &>(&v13);
  if ( v13 )
  {
    if ( *((_DWORD *)this + 185) != 2 )
    {
      v6 = UndockedSearchAppExperienceManager::BringToForeground(this);
      if ( v6 < 0 )
      {
        v7 = 2218LL;
        goto LABEL_4;
      }
    }
    v9 = (__int64 *)Microsoft::WRL::Details::Make<CCortanaShownEventArgs,Windows::Foundation::Rect &>(
                      &v14,
                      (char *)this + 128);
    v10 = *v9;
    *v9 = 0LL;
    if ( v14 )
    {
      v14 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>::Release();
    }
    Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<UndockedSearchAppExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>(
      (char *)this + 320,
      this,
      v10);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return 0LL;
}
