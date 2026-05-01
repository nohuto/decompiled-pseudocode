/*
 * XREFs of Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_6a2847f209d66b4d08d504655ca3e0ac___lambda_c0d8e1709f705684b7fc3b88b56d28ed_____lambda_6a2847f209d66b4d08d504655ca3e0ac__&__lambda_c0d8e1709f705684b7fc3b88b56d28ed__&_IDCompBatchAnimationCallback___&_ @ 0x1802165D4
 * Callers:
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_6a2847f209d66b4d08d504655ca3e0ac___lambda_c0d8e1709f705684b7fc3b88b56d28ed___ @ 0x180215E58 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_6a2847f209d66b4d08d504655ca3e.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____ @ 0x1801D079C (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b773.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_6a2847f209d66b4d08d504655ca3e0ac___lambda_c0d8e1709f705684b7fc3b88b56d28ed___::CAnimationCallbackHandler__lambda_6a2847f209d66b4d08d504655ca3e0ac___lambda_c0d8e1709f705684b7fc3b88b56d28ed___ @ 0x180216E14 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_6a2847f209d66b4d08d504655ca3e0ac___lamb.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Microsoft::WRL::Details::Make_DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_6a2847f209d66b4d08d504655ca3e0ac___lambda_c0d8e1709f705684b7fc3b88b56d28ed_____lambda_6a2847f209d66b4d08d504655ca3e0ac_____lambda_c0d8e1709f705684b7fc3b88b56d28ed____IDCompBatchAnimationCallback_____(
        __int64 *a1,
        void *a2,
        __int64 a3,
        _QWORD *a4)
{
  void *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  void *v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = a2;
  *a1 = 0LL;
  v7 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v7;
  if ( v7 )
  {
    v9 = DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_6a2847f209d66b4d08d504655ca3e0ac___lambda_c0d8e1709f705684b7fc3b88b56d28ed___::CAnimationCallbackHandler__lambda_6a2847f209d66b4d08d504655ca3e0ac___lambda_c0d8e1709f705684b7fc3b88b56d28ed___(
           v7,
           v8,
           a3,
           *a4);
    if ( *a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v9;
    v11 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____(&v11);
  return a1;
}
