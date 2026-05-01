/*
 * XREFs of ?RemovePendingActivation@UwpWindowEventDispatcher@@UEAAJ_K@Z @ 0x1804D2250
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_04d9d8ca76e4934c047f88587232d4c0___::Run @ 0x1804D2300 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_04d9d8ca76e4934c047f88587232d4c0___--Run.c)
 * Callees:
 *     ?QueuePendingActivationForDestruction@UwpWindowEventDispatcher@@AEAAX_K@Z @ 0x1804D204C (-QueuePendingActivationForDestruction@UwpWindowEventDispatcher@@AEAAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowEventDispatcher::RemovePendingActivation(RTL_SRWLOCK *this, __int64 a2)
{
  RTL_SRWLOCK *v4; // rbx
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = this + 58;
  AcquireSRWLockExclusive(this + 58);
  try
  {
    UwpWindowEventDispatcher::QueuePendingActivationForDestruction((UwpWindowEventDispatcher *)&this[-3], a2);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x870,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      v5);
  }
  return 0LL;
}
