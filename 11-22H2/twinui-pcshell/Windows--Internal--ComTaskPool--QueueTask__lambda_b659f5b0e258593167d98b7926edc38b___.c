/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_b659f5b0e258593167d98b7926edc38b___ @ 0x1801E4CA0
 * Callers:
 *     ?ActivateAppAsync@CortanaStoreAppExperienceManager@@AEAAJ_NPEBG@Z @ 0x18045AE44 (-ActivateAppAsync@CortanaStoreAppExperienceManager@@AEAAJ_NPEBG@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____ @ 0x1801D079C (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b773.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b659f5b0e258593167d98b7926edc38b___::CTaskWrapper__lambda_b659f5b0e258593167d98b7926edc38b_____lambda_b659f5b0e258593167d98b7926edc38b___ @ 0x1801E4900 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b659f5b0e258593167d98b7926edc38b___--CTaskW.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_b659f5b0e258593167d98b7926edc38b___(
        __int64 a1,
        __int64 a2)
{
  void *v3; // rax
  __int64 v4; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi
  void *v8; // [rsp+50h] [rbp+18h] BYREF

  v3 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v3;
  v4 = 0LL;
  if ( v3 )
  {
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b659f5b0e258593167d98b7926edc38b___::CTaskWrapper__lambda_b659f5b0e258593167d98b7926edc38b_____lambda_b659f5b0e258593167d98b7926edc38b___(
           (__int64)v3,
           a2);
    v8 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____(&v8);
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(0LL, 0LL, CurrentThreadId);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v6;
}
