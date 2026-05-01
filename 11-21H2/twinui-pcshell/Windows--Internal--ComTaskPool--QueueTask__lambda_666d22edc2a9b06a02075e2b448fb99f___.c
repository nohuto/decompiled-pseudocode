/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_666d22edc2a9b06a02075e2b448fb99f___ @ 0x1801AEB90
 * Callers:
 *     ?OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x180463360 (-OnPositionChanged@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dc9a4f30738474328512289af513d076_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dc9a4f30738474328512289af513d076_____ @ 0x180191DB4 (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_dc9a.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_666d22edc2a9b06a02075e2b448fb99f___::CTaskWrapper__lambda_666d22edc2a9b06a02075e2b448fb99f_____lambda_666d22edc2a9b06a02075e2b448fb99f___ @ 0x1801AE27C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_666d22edc2a9b06a02075e2b448fb99f___--CTaskW.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_666d22edc2a9b06a02075e2b448fb99f___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // edi
  void *v10; // [rsp+30h] [rbp-18h] BYREF

  v6 = operator new(0x168uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v6;
  v7 = 0LL;
  if ( v6 )
  {
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_666d22edc2a9b06a02075e2b448fb99f___::CTaskWrapper__lambda_666d22edc2a9b06a02075e2b448fb99f_____lambda_666d22edc2a9b06a02075e2b448fb99f___(
           v6,
           a4);
    v10 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dc9a4f30738474328512289af513d076_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dc9a4f30738474328512289af513d076_____(&v10);
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
