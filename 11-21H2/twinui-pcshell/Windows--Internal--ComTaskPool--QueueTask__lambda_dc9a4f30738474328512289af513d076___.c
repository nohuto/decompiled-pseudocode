/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_dc9a4f30738474328512289af513d076___ @ 0x1801EA0C8
 * Callers:
 *     CreationThreadDispatcher::RunAsync__lambda_b057d2eecf04af11f3f014dd266c7d19___ @ 0x1801EA178 (CreationThreadDispatcher--RunAsync__lambda_b057d2eecf04af11f3f014dd266c7d19___.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dc9a4f30738474328512289af513d076_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dc9a4f30738474328512289af513d076_____ @ 0x180191DB4 (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_dc9a.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dc9a4f30738474328512289af513d076___::CTaskWrapper__lambda_dc9a4f30738474328512289af513d076_____lambda_dc9a4f30738474328512289af513d076___ @ 0x1801E9F4C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_dc9a4f30738474328512289af513d076___--CTaskW.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_dc9a4f30738474328512289af513d076___(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // edi
  void *v10; // [rsp+30h] [rbp-18h] BYREF

  v6 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v6;
  v7 = 0LL;
  if ( v6 )
  {
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dc9a4f30738474328512289af513d076___::CTaskWrapper__lambda_dc9a4f30738474328512289af513d076_____lambda_dc9a4f30738474328512289af513d076___(
           v6,
           a4);
    v10 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dc9a4f30738474328512289af513d076_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dc9a4f30738474328512289af513d076_____(&v10);
  v8 = SHTaskPoolQueueTask(3LL, a2, 0LL, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
