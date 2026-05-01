/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_c11c54da2889639c00e05aec0ffbb75c___ @ 0x1801970B4
 * Callers:
 *     ?Hide@CStartExperienceManager@@UEAAJI@Z @ 0x18000C880 (-Hide@CStartExperienceManager@@UEAAJI@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dc9a4f30738474328512289af513d076_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dc9a4f30738474328512289af513d076_____ @ 0x180191DB4 (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_dc9a.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c11c54da2889639c00e05aec0ffbb75c___::CTaskWrapper__lambda_c11c54da2889639c00e05aec0ffbb75c_____lambda_c11c54da2889639c00e05aec0ffbb75c___ @ 0x180197054 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c11c54da2889639c00e05aec0ffbb75c___--CTaskW.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_c11c54da2889639c00e05aec0ffbb75c___(
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
    v6 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c11c54da2889639c00e05aec0ffbb75c___::CTaskWrapper__lambda_c11c54da2889639c00e05aec0ffbb75c_____lambda_c11c54da2889639c00e05aec0ffbb75c___(
           (__int64)v5,
           a4);
    v10 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dc9a4f30738474328512289af513d076_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dc9a4f30738474328512289af513d076_____(&v10);
  CurrentThreadId = GetCurrentThreadId();
  v8 = SHTaskPoolQueueTask(2LL, 0LL, CurrentThreadId, 2000LL, v6, 0LL);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v8;
}
