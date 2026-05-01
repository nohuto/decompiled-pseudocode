/*
 * XREFs of _lambda_985bf45478c7a34dc8df2bb17933e869_::operator() @ 0x1801F8070
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_985bf45478c7a34dc8df2bb17933e869___::Run @ 0x1801F98C0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_985bf45478c7a34dc8df2bb17933e869___--.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800D246C (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??$CommitActivationTimeoutPolicy@IAEAW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal@Windows@@@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18011274C (--$CommitActivationTimeoutPolicy@IAEAW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_985bf45478c7a34dc8df2bb17933e869_::operator()(_DWORD **a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rcx
  int *v4; // rdi
  int v5; // edx
  int *v6; // rax
  const char *v7; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v11; // [rsp+38h] [rbp+10h] BYREF

  v2 = *((_QWORD *)*a1 + 35);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 208LL))(v2);
    v3 = *a1;
    v4 = *a1 + 66;
    v5 = *a1[1];
    if ( v5 != *v4 )
    {
      *v4 = v5;
      v6 = (int *)(*(__int64 (__fastcall **)(_QWORD *, int *))(v3[2] + 288LL))(v3 + 2, &v10);
      ViewManagerInteropTraceLogging::CommitActivationTimeoutPolicy<unsigned int,enum Windows::Internal::Shell::ViewManagerInterop::ActivationTimeoutPolicy &>(
        v6,
        v4);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v11);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x9CF,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v7);
  }
  return result;
}
