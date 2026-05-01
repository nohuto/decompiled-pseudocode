/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_ee2a45cc5bdcc8019082ab40d4404685___ @ 0x1804870F8
 * Callers:
 *     ?SetWindowPosition@AccessibilityExperienceManager@@UEAAJIIII@Z @ 0x1804885C0 (-SetWindowPosition@AccessibilityExperienceManager@@UEAAJIIII@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EEE90 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1ec5a9652c39672d7f6d58af325930b6___::CTaskWrapper__lambda_1ec5a9652c39672d7f6d58af325930b6_____lambda_1ec5a9652c39672d7f6d58af325930b6___ @ 0x180486D8C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1ec5a9652c39672d7f6d58af325930b6___--CTaskW.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_ee2a45cc5bdcc8019082ab40d4404685___(
        __int64 a1,
        volatile int *a2)
{
  volatile int *v2; // r10
  __int64 v3; // r9
  Microsoft::WRL::Details *v4; // rcx
  void *v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // edi
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]
  __int64 v11; // [rsp+48h] [rbp-10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  v2 = a2;
  v3 = a1;
  v12 = a1;
  v4 = (Microsoft::WRL::Details *)(a1 + 44);
  if ( v3 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference(v4, a2);
  v9 = *(_OWORD *)v2;
  v10 = *((_QWORD *)v2 + 2);
  v11 = v3;
  if ( v3 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference(v4, a2);
  v5 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
    v6 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1ec5a9652c39672d7f6d58af325930b6___::CTaskWrapper__lambda_1ec5a9652c39672d7f6d58af325930b6_____lambda_1ec5a9652c39672d7f6d58af325930b6___(
           (__int64)v5,
           (__int64)&v9);
  else
    v6 = 0LL;
  v7 = SHTaskPoolQueueTask(3LL, 0LL, 0LL, 0LL, v6, 0LL);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v11);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v12);
  return v7;
}
