/*
 * XREFs of ?QueueEventInvocationWorkItem@?$EventInvocationContext@$00@details@wil@@UEAAX$$QEAV?$unique_ptr@UAsyncEventWorkItemBase@details@wil@@U?$default_delete@UAsyncEventWorkItemBase@details@wil@@@wistd@@@wistd@@@Z @ 0x1804ACB60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details::EventInvocationContext<1>::QueueEventInvocationWorkItem(__int64 a1, _QWORD *a2)
{
  RTL_SRWLOCK *v2; // rsi
  void (__fastcall ****v5)(_QWORD, __int64); // r8
  void (__fastcall ***v6)(_QWORD, __int64); // rax
  void (__fastcall ***v7)(_QWORD, __int64); // rcx

  v2 = (RTL_SRWLOCK *)(a1 + 88);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 88));
  v5 = *(void (__fastcall *****)(_QWORD, __int64))(a1 + 104);
  v6 = (void (__fastcall ***)(_QWORD, __int64))*a2;
  *a2 = 0LL;
  v7 = *v5;
  *v5 = v6;
  if ( v7 )
    (**v7)(v7, 1LL);
  *(_QWORD *)(a1 + 104) = **(_QWORD **)(a1 + 104) + 8LL;
  if ( !*(_BYTE *)(a1 + 64) )
  {
    SubmitThreadpoolWork(*(PTP_WORK *)(a1 + 80));
    *(_BYTE *)(a1 + 64) = 1;
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
