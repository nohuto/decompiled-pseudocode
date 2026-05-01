/*
 * XREFs of ?add_DismissRequested@CStartExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1801353C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x1800A09B0 (-AddInternal@-$EventSource@U-$ITypedEventHandler@PEAVStartExperienceManager@Experie_ea_1800A09B0.c)
 */

__int64 __fastcall CStartExperienceManager::add_DismissRequested(
        RTL_SRWLOCK *a1,
        Microsoft::WRL::Details::EventTargetArray *a2,
        Microsoft::WRL::Details::EventTargetArray **a3)
{
  int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    v3 = -2147024809;
    goto LABEL_5;
  }
  v3 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::AddInternal(
         a1 + 20,
         a2,
         *(_QWORD *)(*(_QWORD *)a2 + 24LL),
         a3);
  if ( v3 < 0 )
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E1,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  return (unsigned int)v3;
}
