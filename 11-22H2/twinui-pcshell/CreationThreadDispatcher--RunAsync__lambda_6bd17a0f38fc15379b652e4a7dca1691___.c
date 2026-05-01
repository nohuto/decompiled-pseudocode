/*
 * XREFs of CreationThreadDispatcher::RunAsync__lambda_6bd17a0f38fc15379b652e4a7dca1691___ @ 0x1807882A8
 * Callers:
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@GuidedSnapAssistViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180789C20 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@GuidedSnapAssistViewController@@UE$AAAXPE$A.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180142264 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4___::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____lambda_634a8efdf62851cb3d468a5f6e943be4___ @ 0x180787C2C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4___--CTaskW.c)
 *     _lambda_6bd17a0f38fc15379b652e4a7dca1691_::_lambda_6bd17a0f38fc15379b652e4a7dca1691_ @ 0x180788564 (_lambda_6bd17a0f38fc15379b652e4a7dca1691_--_lambda_6bd17a0f38fc15379b652e4a7dca1691_.c)
 *     _lambda_6bd17a0f38fc15379b652e4a7dca1691_::__lambda_6bd17a0f38fc15379b652e4a7dca1691_ @ 0x180788C34 (_lambda_6bd17a0f38fc15379b652e4a7dca1691_--__lambda_6bd17a0f38fc15379b652e4a7dca1691_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreationThreadDispatcher::RunAsync__lambda_6bd17a0f38fc15379b652e4a7dca1691___(
        __int64 a1,
        volatile int *a2)
{
  volatile int *v4; // rdx
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  unsigned int v7; // edi
  _BYTE v9[24]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+48h] [rbp-10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF

  v11 = a1;
  if ( a1 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 44), a2);
  lambda_6bd17a0f38fc15379b652e4a7dca1691_::_lambda_6bd17a0f38fc15379b652e4a7dca1691_(v9, a2);
  v10 = a1;
  if ( a1 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 44), v4);
  v5 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
    v6 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4___::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____lambda_634a8efdf62851cb3d468a5f6e943be4___(
           v5,
           (__int64)v9);
  else
    v6 = 0LL;
  v7 = SHTaskPoolQueueTask(3LL, 0LL, 0LL);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v10);
  lambda_6bd17a0f38fc15379b652e4a7dca1691_::__lambda_6bd17a0f38fc15379b652e4a7dca1691_(v9);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(&v11);
  lambda_6bd17a0f38fc15379b652e4a7dca1691_::__lambda_6bd17a0f38fc15379b652e4a7dca1691_(a2);
  return v7;
}
