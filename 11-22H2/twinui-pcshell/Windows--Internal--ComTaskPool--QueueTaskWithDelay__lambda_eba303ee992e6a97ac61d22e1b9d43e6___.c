/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_eba303ee992e6a97ac61d22e1b9d43e6___ @ 0x1801E0EE8
 * Callers:
 *     ?Hide@CStartExperienceManager@@UEAAJI@Z @ 0x18002BEC0 (-Hide@CStartExperienceManager@@UEAAJI@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____ @ 0x1801D079C (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b773.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_eba303ee992e6a97ac61d22e1b9d43e6___::CTaskWrapper__lambda_eba303ee992e6a97ac61d22e1b9d43e6_____lambda_eba303ee992e6a97ac61d22e1b9d43e6___ @ 0x1801E0E88 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_eba303ee992e6a97ac61d22e1b9d43e6___--CTaskW.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_eba303ee992e6a97ac61d22e1b9d43e6___(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4)
{
  void *v5; // rax
  __int64 v6; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v8; // edi
  void *v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  v5 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v5;
  v6 = 0LL;
  if ( v5 )
  {
    v6 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_eba303ee992e6a97ac61d22e1b9d43e6___::CTaskWrapper__lambda_eba303ee992e6a97ac61d22e1b9d43e6_____lambda_eba303ee992e6a97ac61d22e1b9d43e6___(
           (__int64)v5,
           a4);
    v10 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____(&v10);
  CurrentThreadId = GetCurrentThreadId();
  v8 = SHTaskPoolQueueTask(2LL, 0LL, CurrentThreadId);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v8;
}
