/*
 * XREFs of ?HideExperience@CControlCenterExperienceManager@@AEAAJXZ @ 0x18004DAFC
 * Callers:
 *     ?Hide@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@E@Z @ 0x18004F0C0 (-Hide@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@E@Z.c)
 * Callees:
 *     ?RaisePropertyChangedEvent@CControlCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x18004CF88 (-RaisePropertyChangedEvent@CControlCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004E05C (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ??$com_weak_query@PEAVCControlCenterExperienceManager@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVCControlCenterExperienceManager@@@Z @ 0x18004E13C (--$com_weak_query@PEAVCControlCenterExperienceManager@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@@U.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1801492F0 (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     _lambda_47c0868eeef6d2db2a8f89db045b20e4_::__lambda_47c0868eeef6d2db2a8f89db045b20e4_ @ 0x180191D70 (_lambda_47c0868eeef6d2db2a8f89db045b20e4_--__lambda_47c0868eeef6d2db2a8f89db045b20e4_.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_3f9345ade4d310716fee31be19549ce9___ @ 0x180194000 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_3f9345ade4d310716fee31be19549ce9___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CControlCenterExperienceManager::HideExperience(CControlCenterExperienceManager *this)
{
  int v2; // eax
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // ebx
  CControlCenterExperienceManager *v10; // [rsp+20h] [rbp-10h] BYREF
  _BYTE v11[8]; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  __int64 v13; // [rsp+40h] [rbp+10h] BYREF
  CControlCenterExperienceManager *v14; // [rsp+48h] [rbp+18h] BYREF
  char v15; // [rsp+50h] [rbp+20h] BYREF

  if ( *((_DWORD *)this + 40) == 2 )
  {
    v2 = CControlCenterExperienceManager::RaisePropertyChangedEvent(
           this,
           L"HideExperienceRequested",
           *((_BYTE *)this + 704));
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3D4,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v2,
        (int)v10);
    *((_BYTE *)this + 390) = 1;
    v13 = 0LL;
    v14 = this;
    v3 = (__int64 *)wil::com_weak_query<CControlCenterExperienceManager *>(&v15, &v14);
    v4 = *v3;
    *v3 = 0LL;
    v13 = v4;
    wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(&v15);
    v10 = this;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(v11, &v13);
    v8 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_3f9345ade4d310716fee31be19549ce9___(
           v6,
           v5,
           v7,
           &v10);
    lambda_47c0868eeef6d2db2a8f89db045b20e4_::__lambda_47c0868eeef6d2db2a8f89db045b20e4_(&v10);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3EA,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v8,
        (int)v10);
    wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>(&v13);
  }
  return 0LL;
}
