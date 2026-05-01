/*
 * XREFs of ?TerminateInputApp@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x18051B528
 * Callers:
 *     ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1802DAD90 (-EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x180514850 (-OnInputAppChangeApproved@TouchKeyboardExperienceManager@@AEAAJPEBG@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800AFF20 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para.c)
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnregisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18018B6F8 (-UnregisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?UnregisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18018B730 (-UnregisterForViewEvents@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?0$$V@TerminateInputApp@TouchKeyboardExperienceTelemetryLogger@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18050815C (--$-0$$V@TerminateInputApp@TouchKeyboardExperienceTelemetryLogger@@AEAA@U-$integral_constant@D$0.c)
 *     ??$MakeAndInitialize@VStubImmersiveApplication@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVStubImmersiveApplication@@AEAPEBG@Z @ 0x1805089AC (--$MakeAndInitialize@VStubImmersiveApplication@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVStub.c)
 *     ??1TerminateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18050C618 (--1TerminateInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::TerminateInputApp(RTL_SRWLOCK *this, const unsigned __int16 *a2)
{
  PVOID Ptr; // rcx
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  int v11; // eax
  int v12; // edx
  StubImmersiveApplication *v14; // [rsp+30h] [rbp-D0h] BYREF
  int v15; // [rsp+38h] [rbp-C8h] BYREF
  int v16; // [rsp+3Ch] [rbp-C4h] BYREF
  const unsigned __int16 *v17; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v18[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v17 = a2;
  TouchKeyboardExperienceTelemetryLogger::TerminateInputApp::TerminateInputApp((__int64)v18, (char)a2);
  Ptr = this[47].Ptr;
  if ( !Ptr )
  {
    v5 = -2147418113;
    v6 = 2147549183LL;
    v7 = 3848LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)v6);
    goto LABEL_22;
  }
  if ( (*(int (__fastcall **)(PVOID, const unsigned __int16 *, int *))(*(_QWORD *)Ptr + 56LL))(Ptr, a2, &v15) >= 0
    && (unsigned int)(v15 - 1) <= 4 )
  {
    v14 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
    v8 = Microsoft::WRL::Details::MakeAndInitialize<StubImmersiveApplication,StubImmersiveApplication,unsigned short const * &>(
           &v14,
           &v17);
    v5 = v8;
    if ( v8 < 0 )
    {
      v9 = 3854LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
      Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)&v14);
      goto LABEL_22;
    }
    v16 = 0;
    v8 = (*(__int64 (__fastcall **)(PVOID, StubImmersiveApplication *, __int64, int *))(*(_QWORD *)this[47].Ptr + 96LL))(
           this[47].Ptr,
           v14,
           2LL,
           &v16);
    v5 = v8;
    if ( v8 < 0 && v8 != -805306193 && v8 != -2147319765 )
    {
      v9 = 3866LL;
      goto LABEL_11;
    }
    Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)&v14);
  }
  v10 = TouchKeyboardExperienceManager::UnregisterForApplicationStateChanges((TouchKeyboardExperienceManager *)this);
  v5 = v10;
  if ( v10 < 0 )
  {
    v6 = (unsigned int)v10;
    v7 = 3871LL;
    goto LABEL_15;
  }
  if ( !BYTE4(this[126].Ptr) )
  {
    v11 = TouchKeyboardExperienceManager::UnregisterForViewEvents((TouchKeyboardExperienceManager *)this);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xF2B,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v11);
  }
  AcquireSRWLockExclusive(this + 72);
  HIDWORD(this[70].Ptr) = 0;
  LOBYTE(this[71].Ptr) = 0;
  if ( this != (RTL_SRWLOCK *)-576LL )
    ReleaseSRWLockExclusive(this + 72);
  LODWORD(this[77].Ptr) = 0;
  HIDWORD(this[77].Ptr) = 0;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v18, v12);
  v5 = 0;
LABEL_22:
  TouchKeyboardExperienceTelemetryLogger::TerminateInputApp::~TerminateInputApp((TouchKeyboardExperienceTelemetryLogger::TerminateInputApp *)v18);
  return v5;
}
