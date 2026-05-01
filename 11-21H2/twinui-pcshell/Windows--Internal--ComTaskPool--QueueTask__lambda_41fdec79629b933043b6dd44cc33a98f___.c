/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_41fdec79629b933043b6dd44cc33a98f___ @ 0x1801AEA30
 * Callers:
 *     ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@UViewOptions@@@Z @ 0x180463074 (-OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@UViewOptions@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dc9a4f30738474328512289af513d076_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dc9a4f30738474328512289af513d076_____ @ 0x180191DB4 (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_dc9a.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_41fdec79629b933043b6dd44cc33a98f___::CTaskWrapper__lambda_41fdec79629b933043b6dd44cc33a98f_____lambda_41fdec79629b933043b6dd44cc33a98f___ @ 0x1801AE184 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_41fdec79629b933043b6dd44cc33a98f___--CTaskW.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_41fdec79629b933043b6dd44cc33a98f___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  void *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi
  void *v10; // [rsp+30h] [rbp-18h] BYREF

  v6 = operator new(0x1B0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v6;
  v7 = 0LL;
  if ( v6 )
  {
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_41fdec79629b933043b6dd44cc33a98f___::CTaskWrapper__lambda_41fdec79629b933043b6dd44cc33a98f_____lambda_41fdec79629b933043b6dd44cc33a98f___(
           (__int64)v6,
           a4);
    v10 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dc9a4f30738474328512289af513d076_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dc9a4f30738474328512289af513d076_____(&v10);
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
