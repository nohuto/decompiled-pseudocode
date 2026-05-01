/*
 * XREFs of ?remove_Hidden@CortanaSharedExperienceManager@@UEAAJUEventRegistrationToken@@@Z @ 0x1804317B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAUIBaseExperienceManager@Experience@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x1800E115C (-Remove@-$EventSource@U-$ITypedEventHandler@PEAUIBaseExperienceManager@Experience@Shell@Internal.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::remove_Hidden(
        CortanaSharedExperienceManager *this,
        struct EventRegistrationToken a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::Remove(
         (__int64 *)this + 9,
         (struct IUnknown *)a2.value);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25A,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
