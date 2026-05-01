/*
 * XREFs of ?ApplyPriorityBoostIfNeeded@CTaskContinuityActivitiesExperienceManager@@AEAAJXZ @ 0x18036100C
 * Callers:
 *     ?OnPriorityBoostRequested@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803614B0 (-OnPriorityBoostRequested@CTaskContinuityActivitiesExperienceManager@@MEAAJPEAVCSingleViewShellE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18009C9E8 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTaskContinuityActivitiesExperienceManager::ApplyPriorityBoostIfNeeded(
        CTaskContinuityActivitiesExperienceManager *this)
{
  unsigned int v1; // ebx
  __int64 (__fastcall ****v2)(_QWORD, GUID *, __int64 *); // rcx
  int v3; // eax
  wil::details::in1diag3 *v4; // rcx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( !*((_DWORD *)this + 14) )
    return v1;
  v2 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))((char *)this + 96);
  if ( !*v2 )
    return v1;
  v8 = 0LL;
  v3 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
         v2,
         &v8);
  v1 = v3;
  v4 = retaddr;
  if ( v3 >= 0 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 48LL))(v8);
    v1 = v3;
    v4 = retaddr;
    if ( v3 >= 0 )
      goto LABEL_8;
    v5 = 140LL;
  }
  else
  {
    v5 = 137LL;
  }
  wil::details::in1diag3::_Log_Hr(
    v4,
    (void *)v5,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
LABEL_8:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v8);
  if ( (v1 & 0x80000000) != 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x90,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\taskcontinuityactivitiesexperiencemanager.cpp",
      (const char *)v1);
  return v1;
}
