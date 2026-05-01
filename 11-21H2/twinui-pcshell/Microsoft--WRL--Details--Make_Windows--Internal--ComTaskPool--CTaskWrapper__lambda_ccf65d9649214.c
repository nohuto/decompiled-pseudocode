/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ccf65d9649214ffd774f2e628ae5cb52_____lambda_ccf65d9649214ffd774f2e628ae5cb52___ @ 0x180199560
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_ccf65d9649214ffd774f2e628ae5cb52___ @ 0x180199EA4 (Windows--Internal--ComTaskPool--QueueTask__lambda_ccf65d9649214ffd774f2e628ae5cb52___.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180126630 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dc9a4f30738474328512289af513d076_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dc9a4f30738474328512289af513d076_____ @ 0x180191DB4 (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_dc9a.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ccf65d9649214ffd774f2e628ae5cb52___::CTaskWrapper__lambda_ccf65d9649214ffd774f2e628ae5cb52_____lambda_ccf65d9649214ffd774f2e628ae5cb52___ @ 0x180198C14 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ccf65d9649214ffd774f2e628ae5cb52___--CTaskW.c)
 */

// Hidden C++ exception states: #wind=3
volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ccf65d9649214ffd774f2e628ae5cb52_____lambda_ccf65d9649214ffd774f2e628ae5cb52___(
        volatile signed __int32 **a1,
        __int64 a2)
{
  void *v4; // rax
  __int64 v5; // rdi
  void *v7; // [rsp+50h] [rbp+18h] BYREF
  void *v8; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v4 = operator new(0x170uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v4;
  v8 = v4;
  if ( v4 )
  {
    v5 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ccf65d9649214ffd774f2e628ae5cb52___::CTaskWrapper__lambda_ccf65d9649214ffd774f2e628ae5cb52_____lambda_ccf65d9649214ffd774f2e628ae5cb52___(
           (__int64)v4,
           a2);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(*a1);
    *a1 = (volatile signed __int32 *)v5;
    v7 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dc9a4f30738474328512289af513d076_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dc9a4f30738474328512289af513d076_____(&v7);
  return a1;
}
