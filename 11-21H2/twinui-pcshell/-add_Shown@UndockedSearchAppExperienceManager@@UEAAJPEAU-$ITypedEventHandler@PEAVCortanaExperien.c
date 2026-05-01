/*
 * XREFs of ?add_Shown@UndockedSearchAppExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18009ED70
 * Callers:
 *     <none>
 * Callees:
 *     ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@2345@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x18002A530 (-AddInternal@-$EventSource@U-$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@I.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::add_Shown(__int64 a1, struct IUnknown *a2, struct IUnknown **a3)
{
  int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    v3 = -2147024809;
    goto LABEL_5;
  }
  v3 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::ICortanaShownEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::AddInternal(
         (_QWORD *)(a1 + 248),
         a2,
         a2->lpVtbl[1].QueryInterface,
         a3);
  if ( v3 < 0 )
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x483,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  return (unsigned int)v3;
}
