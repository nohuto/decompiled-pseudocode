/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_9e570927e665d205f933b0ae213f3c70___ @ 0x1801E677C
 * Callers:
 *     ?TrySetWebSearchEnabledStateOnUpdate@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1801EFCC4 (-TrySetWebSearchEnabledStateOnUpdate@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____ @ 0x1801D079C (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b773.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9e570927e665d205f933b0ae213f3c70___::CTaskWrapper__lambda_9e570927e665d205f933b0ae213f3c70_____lambda_9e570927e665d205f933b0ae213f3c70___ @ 0x1801E59C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9e570927e665d205f933b0ae213f3c70___--CTaskW.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_9e570927e665d205f933b0ae213f3c70___(
        __int64 a1,
        __int64 a2)
{
  void *v3; // rax
  __int64 v4; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi
  void *v8; // [rsp+50h] [rbp+18h] BYREF

  v3 = operator new(0x158uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v3;
  v4 = 0LL;
  if ( v3 )
  {
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9e570927e665d205f933b0ae213f3c70___::CTaskWrapper__lambda_9e570927e665d205f933b0ae213f3c70_____lambda_9e570927e665d205f933b0ae213f3c70___(
           (__int64)v3,
           a2);
    v8 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____(&v8);
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v6;
}
