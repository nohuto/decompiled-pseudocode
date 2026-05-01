/*
 * XREFs of _lambda_9bbbb8ba2cef3a068d713ac02fea55ed_::operator() @ 0x1804F0990
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_9bbbb8ba2cef3a068d713ac02fea55ed___::Run @ 0x1804F1930 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_9bbbb8ba2cef3a068d713ac02fea55ed___--.c)
 * Callees:
 *     ?SetDesiredPosition@UwpWindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18009FD50 (-SetDesiredPosition@UwpWindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_9bbbb8ba2cef3a068d713ac02fea55ed_::operator()(__int64 *a1)
{
  int *v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx
  const char *v5; // r9
  __int64 result; // rax
  float v7[4]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v8; // [rsp+30h] [rbp-38h] BYREF
  __int128 v9; // [rsp+40h] [rbp-28h]
  __int64 v10; // [rsp+50h] [rbp-18h]
  int v11; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+70h] [rbp+8h]

  v2 = (int *)*a1;
  v7[0] = (float)*(int *)(*a1 + 16);
  v7[1] = (float)v2[5];
  v7[2] = (float)*v2;
  v7[3] = (float)v2[1];
  v3 = a1[1];
  v8 = *(_OWORD *)(v3 + 512);
  v9 = *(_OWORD *)(v3 + 528);
  v10 = *(_QWORD *)(v3 + 544);
  v11 = *(_DWORD *)(v3 + 552);
  DWORD2(v9) = v2[8];
  v4 = *(_QWORD *)(v3 + 280);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 208LL))(v4);
    UwpWindowWrapperBase::SetDesiredPosition(a1[1], (__int64)v7, 3u, (__int64)&v8);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x27A,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v5);
  }
  return result;
}
