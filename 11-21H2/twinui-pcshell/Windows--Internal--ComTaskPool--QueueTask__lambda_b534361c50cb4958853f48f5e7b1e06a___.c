/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_b534361c50cb4958853f48f5e7b1e06a___ @ 0x18004C47C
 * Callers:
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x18004C24C (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b534361c50cb4958853f48f5e7b1e06a___::CTaskWrapper__lambda_b534361c50cb4958853f48f5e7b1e06a_____lambda_b534361c50cb4958853f48f5e7b1e06a___ @ 0x18004C510 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b534361c50cb4958853f48f5e7b1e06a___--CTaskW.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_b534361c50cb4958853f48f5e7b1e06a___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  void *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x178uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b534361c50cb4958853f48f5e7b1e06a___::CTaskWrapper__lambda_b534361c50cb4958853f48f5e7b1e06a_____lambda_b534361c50cb4958853f48f5e7b1e06a___(
           v6,
           a4);
  else
    v7 = 0LL;
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
