/*
 * XREFs of ?GetCommitHandle@CAnimationClock@@QEAAJKPEAPEAX@Z @ 0x1800A2020
 * Callers:
 *     ?OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z @ 0x1800A4E8C (-OnGetSynchronizationCommitHandle@CAnimationClockCoordinator@@QEAAJAEBU_GUID@@KPEAPEAX@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180037414 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180095C14 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??0?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800A1798 (--0-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??1GetCommitHandle@AnimationClockLoggingTelemetry@@QEAA@XZ @ 0x1800A1B00 (--1GetCommitHandle@AnimationClockLoggingTelemetry@@QEAA@XZ.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800A2864 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?StartActivity@GetCommitHandle@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z @ 0x1800A2D4C (-StartActivity@GetCommitHandle@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@@Z.c)
 *     ?Stop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800A2EB4 (-Stop@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationClock::GetCommitHandle(CAnimationClock *this, unsigned int a2, void **a3)
{
  unsigned int v6; // esi
  int SynchronizationObject; // eax
  __int64 v8; // rdx
  int LastError; // eax
  HANDLE CurrentProcess; // rbx
  void *v11; // rdi
  HANDLE v12; // rax
  const char *v13; // r9
  DWORD dwDesiredAccess; // [rsp+20h] [rbp-1A8h]
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+40h] [rbp-188h] BYREF
  struct _GUID v17; // [rsp+50h] [rbp-178h] BYREF
  _QWORD v18[40]; // [rsp+60h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+0h]

  v6 = 0;
  *a3 = 0LL;
  v16 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v18,
    (__int64)"GetCommitHandle");
  v18[0] = &AnimationClockLoggingTelemetry::GetCommitHandle::`vftable';
  v17 = *(struct _GUID *)((char *)this + 120);
  AnimationClockLoggingTelemetry::GetCommitHandle::StartActivity(
    (AnimationClockLoggingTelemetry::GetCommitHandle *)v18,
    &v17);
  if ( (unsigned int)(*((_DWORD *)this + 20) - 1) > 1 )
    goto LABEL_13;
  if ( ((*((_QWORD *)this + 14) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0
    || (wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
          (void **)this + 14,
          0LL),
        SynchronizationObject = NtDCompositionCreateSynchronizationObject((char *)this + 112),
        SynchronizationObject >= 0) )
  {
    if ( !a2 || a2 == GetCurrentProcessId() )
    {
      CurrentProcess = GetCurrentProcess();
      v11 = (void *)*((_QWORD *)this + 14);
      v12 = GetCurrentProcess();
      if ( !DuplicateHandle(v12, v11, CurrentProcess, a3, 0, 0, 2u) )
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x27B,
                      (unsigned int)"clientcore\\windows\\dwm\\udwm\\animationclock.cpp",
                      v13);
        goto LABEL_12;
      }
    }
    else
    {
      SynchronizationObject = NtDCompositionDuplicateHandleToProcess(*((_QWORD *)this + 14), a2, a3);
      if ( SynchronizationObject < 0 )
      {
        v8 = 631LL;
        goto LABEL_9;
      }
    }
LABEL_13:
    wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v18, 0LL);
    goto LABEL_14;
  }
  v8 = 623LL;
LABEL_9:
  LastError = wil::details::in1diag3::Return_NtStatus(
                retaddr,
                (void *)v8,
                (unsigned int)"clientcore\\windows\\dwm\\udwm\\animationclock.cpp",
                (const char *)(unsigned int)SynchronizationObject,
                dwDesiredAccess);
LABEL_12:
  v6 = LastError;
LABEL_14:
  AnimationClockLoggingTelemetry::GetCommitHandle::~GetCommitHandle((AnimationClockLoggingTelemetry::GetCommitHandle *)v18);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v16);
  return v6;
}
