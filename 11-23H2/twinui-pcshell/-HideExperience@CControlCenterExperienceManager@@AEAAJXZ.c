/*
 * XREFs of ?HideExperience@CControlCenterExperienceManager@@AEAAJXZ @ 0x18041F6D8
 * Callers:
 *     ?Hide@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@E@Z @ 0x180071C60 (-Hide@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@E@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800B382C (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_weak_query@PEAVCControlCenterExperienceManager@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVCControlCenterExperienceManager@@@Z @ 0x180136FEC (--$com_weak_query@PEAVCControlCenterExperienceManager@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@@U.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_e28d7d1a5cb321cb0de231b4cced5c98___ @ 0x1801DDA88 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_e28d7d1a5cb321cb0de231b4cced5c98___.c)
 *     _lambda_37bafbeb3dd0776f24b59a9d11710915_::__lambda_37bafbeb3dd0776f24b59a9d11710915_ @ 0x1801DDC34 (_lambda_37bafbeb3dd0776f24b59a9d11710915_--__lambda_37bafbeb3dd0776f24b59a9d11710915_.c)
 *     ?RaiseHideExperienceRequestedEvent@CControlCenterExperienceManager@@AEAAJ_N_K11@Z @ 0x18042229C (-RaiseHideExperienceRequestedEvent@CControlCenterExperienceManager@@AEAAJ_N_K11@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CControlCenterExperienceManager::HideExperience(
        CControlCenterExperienceManager *this,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  int v5; // eax
  __int64 *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  volatile signed __int32 *v10; // r8
  int v11; // ebx
  unsigned __int64 v13; // [rsp+20h] [rbp-20h]
  CControlCenterExperienceManager *v14; // [rsp+30h] [rbp-10h] BYREF
  __int64 v15; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  __int64 v17; // [rsp+50h] [rbp+10h] BYREF
  CControlCenterExperienceManager *v18; // [rsp+58h] [rbp+18h] BYREF
  __int64 v19; // [rsp+60h] [rbp+20h] BYREF

  if ( *((_DWORD *)this + 40) == 2 )
  {
    v5 = CControlCenterExperienceManager::RaiseHideExperienceRequestedEvent(this, *((_BYTE *)this + 760), a3, a4, v13);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4B4,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
    *((_BYTE *)this + 446) = 1;
    v17 = 0LL;
    v18 = this;
    v6 = wil::com_weak_query<CControlCenterExperienceManager *>(&v19, (__int64 *)&v18);
    v7 = *v6;
    *v6 = 0LL;
    v17 = v7;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v19);
    v14 = this;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(&v15, &v17);
    v11 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_e28d7d1a5cb321cb0de231b4cced5c98___(
            v9,
            v8,
            v10,
            &v14);
    lambda_37bafbeb3dd0776f24b59a9d11710915_::__lambda_37bafbeb3dd0776f24b59a9d11710915_((__int64)&v14);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4CA,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
        (const char *)(unsigned int)v11);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
  }
  return 0LL;
}
