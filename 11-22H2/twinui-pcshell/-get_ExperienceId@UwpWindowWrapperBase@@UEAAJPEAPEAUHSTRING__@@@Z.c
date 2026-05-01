/*
 * XREFs of ?get_ExperienceId@UwpWindowWrapperBase@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1804F2690
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_af0c6afd3884757453502b957903234c___ @ 0x1801F6C30 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_af0c6afd3884757453502b957903234c.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UwpWindowWrapperBase::get_ExperienceId(UwpWindowWrapperBase *this, HSTRING *a2)
{
  DWORD CurrentThreadId; // eax
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF
  HSTRING *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 34) + 216LL))(*((_QWORD *)this + 34), &SRWLock);
  *(_QWORD *)&v7 = (char *)this - 8;
  *((_QWORD *)&v7 + 1) = &v9;
  CurrentThreadId = GetCurrentThreadId();
  v5 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_af0c6afd3884757453502b957903234c___(
         v4,
         CurrentThreadId,
         &v7);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v5;
}
