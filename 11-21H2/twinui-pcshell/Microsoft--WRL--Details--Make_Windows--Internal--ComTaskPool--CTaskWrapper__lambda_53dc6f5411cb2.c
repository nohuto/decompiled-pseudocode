/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_53dc6f5411cb2511b6cb0ef5cd4a893d_____lambda_53dc6f5411cb2511b6cb0ef5cd4a893d___ @ 0x1801B6210
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_53dc6f5411cb2511b6cb0ef5cd4a893d___ @ 0x1801B62A0 (Windows--Internal--ComTaskPool--QueueTask__lambda_53dc6f5411cb2511b6cb0ef5cd4a893d___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180126630 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dc9a4f30738474328512289af513d076_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dc9a4f30738474328512289af513d076_____ @ 0x180191DB4 (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_dc9a.c)
 *     _lambda_53dc6f5411cb2511b6cb0ef5cd4a893d_::_lambda_53dc6f5411cb2511b6cb0ef5cd4a893d_ @ 0x1801B6620 (_lambda_53dc6f5411cb2511b6cb0ef5cd4a893d_--_lambda_53dc6f5411cb2511b6cb0ef5cd4a893d_.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_53dc6f5411cb2511b6cb0ef5cd4a893d_____lambda_53dc6f5411cb2511b6cb0ef5cd4a893d___(
        volatile signed __int32 **a1,
        __int64 a2)
{
  void *v4; // rax
  volatile signed __int32 *v5; // rbx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v4;
  v5 = (volatile signed __int32 *)v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v4);
    lambda_53dc6f5411cb2511b6cb0ef5cd4a893d_::_lambda_53dc6f5411cb2511b6cb0ef5cd4a893d_(v5 + 4, a2);
    *(_QWORD *)v5 = off_180644C70;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(*a1);
    v7 = 0LL;
    *a1 = v5;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dc9a4f30738474328512289af513d076_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dc9a4f30738474328512289af513d076_____(&v7);
  return a1;
}
