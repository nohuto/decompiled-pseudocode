/*
 * XREFs of ?RemovePendingActivation@WindowEventDispatcher@@UEAAJ_K@Z @ 0x1804C90F0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dd5757d6d511917eda89b6b9685db73c___::Run @ 0x1804C95C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_dd5757d6d511917eda89b6b9685db73c___--Run.c)
 * Callees:
 *     ?QueuePendingActivationForDestruction@WindowEventDispatcher@@AEAAX_K@Z @ 0x1804C7CEC (-QueuePendingActivationForDestruction@WindowEventDispatcher@@AEAAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowEventDispatcher::RemovePendingActivation(RTL_SRWLOCK *this, __int64 a2)
{
  RTL_SRWLOCK *v4; // rbx
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = this + 56;
  AcquireSRWLockExclusive(this + 56);
  try
  {
    WindowEventDispatcher::QueuePendingActivationForDestruction((WindowEventDispatcher *)&this[-3], a2);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x761,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      v5);
  }
  return 0LL;
}
