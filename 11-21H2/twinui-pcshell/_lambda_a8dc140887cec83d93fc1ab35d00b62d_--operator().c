/*
 * XREFs of _lambda_a8dc140887cec83d93fc1ab35d00b62d_::operator() @ 0x1801B07A8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a8dc140887cec83d93fc1ab35d00b62d___::Run @ 0x1801B1220 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a8dc140887cec83d93fc1ab35d00b62d___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800752E4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x18009A154 (-_Incref_nz@_Ref_count_base@std@@QEAA_NXZ.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x18009F864 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800BF9E8 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x18017928C (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180190C7C (-ContinueOnCurrentThread@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x18022EBB4 (-InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x180469948 (-TouchKeyboardExperienceManagerDestroyed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     ?ViewCreationTaskFailed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x18046A288 (-ViewCreationTaskFailed@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 *     ?ViewInfoDuplicated@TouchKeyboardExperienceTelemetryLogger@@SAXXZ @ 0x18046A320 (-ViewInfoDuplicated@TouchKeyboardExperienceTelemetryLogger@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall lambda_a8dc140887cec83d93fc1ab35d00b62d_::operator()(_QWORD *a1)
{
  __int64 v2; // r12
  std::_Ref_count_base *v3; // rcx
  struct KBViewInfo *v4; // rsi
  std::_Ref_count_base *v5; // r14
  char v6; // r15
  int v7; // eax
  int v8; // eax
  unsigned int v9; // edi
  int v10; // r13d
  __int64 v11; // rax
  struct IUnknown ***v12; // rdi
  struct IUnknown ***v13; // r12
  int v14; // eax
  _BYTE v16[128]; // [rsp+40h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  __int64 v18; // [rsp+D0h] [rbp+67h] BYREF
  RTL_SRWLOCK *v19; // [rsp+D8h] [rbp+6Fh] BYREF

  v2 = (__int64)(a1 + 5);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 5),
    (wil::ActivityThreadWatcher *)v16);
  v3 = (std::_Ref_count_base *)a1[4];
  if ( v3 && std::_Ref_count_base::_Incref_nz(v3) )
  {
    v4 = (struct KBViewInfo *)a1[3];
    v5 = (std::_Ref_count_base *)a1[4];
  }
  else
  {
    v5 = 0LL;
    v4 = 0LL;
  }
  if ( !v4 )
  {
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v2,
      0);
    v9 = 0;
    goto LABEL_27;
  }
  v6 = 1;
  v18 = 0LL;
  v7 = Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)(a1 + 1), (__int64)&v18);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x161A,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
  if ( v18 )
  {
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(a1[2] + 424LL, (__int64)&v19);
    v8 = TouchKeyboardExperienceManager::InitializeViewInfoIfNeeded((TouchKeyboardExperienceManager *)a1[2], v4);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1625,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v19);
      goto LABEL_21;
    }
    v10 = 0;
    v11 = a1[2];
    v12 = *(struct IUnknown ****)(v11 + 432);
    if ( v12 != *(struct IUnknown ****)(v11 + 440) )
    {
      v13 = *(struct IUnknown ****)(v11 + 440);
      do
      {
        if ( (unsigned int)SHIsSameObject(**v12, *(struct IUnknown **)v4) )
          ++v10;
        v12 += 2;
      }
      while ( v12 != v13 );
      v2 = (__int64)(a1 + 5);
      if ( v10 > 1 )
        TouchKeyboardExperienceTelemetryLogger::ViewInfoDuplicated();
    }
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v19);
    v6 = 0;
  }
  else
  {
    TouchKeyboardExperienceTelemetryLogger::TouchKeyboardExperienceManagerDestroyed();
  }
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v2,
    0);
  v9 = 0;
LABEL_21:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
  if ( v6 )
  {
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 344LL))(*a1, 0LL);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1615,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v14);
    TouchKeyboardExperienceTelemetryLogger::ViewCreationTaskFailed();
  }
LABEL_27:
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v16);
  return v9;
}
