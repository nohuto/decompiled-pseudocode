/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_72859ebc22ba6b41914b9cba0f951dda____0 @ 0x180214B8C
 * Callers:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_72859ebc22ba6b41914b9cba0f951dda___ @ 0x180214B60 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_72859ebc22ba6b41914b9cba0f951dda.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____ @ 0x1801D079C (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b773.c)
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_72859ebc22ba6b41914b9cba0f951dda___::CResultTaskWrapper__lambda_72859ebc22ba6b41914b9cba0f951dda_____lambda_72859ebc22ba6b41914b9cba0f951dda___ @ 0x180214988 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_72859ebc22ba6b41914b9cba0f951dda___--.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_72859ebc22ba6b41914b9cba0f951dda____0(
        unsigned int a1,
        unsigned int a2,
        __int64 a3)
{
  unsigned int v5; // ebx
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  int v8; // ebx
  int v10; // [rsp+30h] [rbp-28h] BYREF
  void *v11; // [rsp+38h] [rbp-20h] BYREF
  unsigned int v12; // [rsp+60h] [rbp+8h] BYREF
  int v13; // [rsp+78h] [rbp+20h] BYREF

  v12 = a1;
  if ( CoGetApartmentType((APTTYPE *)&v13, (APTTYPEQUALIFIER *)&v10) < 0 || !v13 || v13 == 3 )
    v5 = 0;
  else
    v5 = 4;
  v12 = 0;
  v6 = operator new(0x160uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v6;
  v7 = 0LL;
  if ( v6 )
  {
    v7 = Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_72859ebc22ba6b41914b9cba0f951dda___::CResultTaskWrapper__lambda_72859ebc22ba6b41914b9cba0f951dda_____lambda_72859ebc22ba6b41914b9cba0f951dda___(
           v6,
           (__int64)&v12,
           a3);
    v11 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6_____(&v11);
  v8 = SHTaskPoolQueueTask(v5, 32LL, a2);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  if ( v8 >= 0 )
    return v12;
  return (unsigned int)v8;
}
