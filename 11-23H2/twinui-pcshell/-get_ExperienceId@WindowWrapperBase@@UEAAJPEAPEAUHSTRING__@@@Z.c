/*
 * XREFs of ?get_ExperienceId@WindowWrapperBase@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1802D9540
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_6bf811421de4cca79780f9844d73ade4___ @ 0x1804E43E4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_6bf811421de4cca79780f9844d73ade4.c)
 */

__int64 __fastcall WindowWrapperBase::get_ExperienceId(WindowWrapperBase *this, HSTRING *a2)
{
  DWORD CurrentThreadId; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF
  HSTRING *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 34) + 208LL))(*((_QWORD *)this + 34), &SRWLock);
  v7[0] = (char *)this - 8;
  v7[1] = &v9;
  CurrentThreadId = GetCurrentThreadId();
  v5 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_6bf811421de4cca79780f9844d73ade4___(
         v4,
         CurrentThreadId,
         v7);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v5;
}
