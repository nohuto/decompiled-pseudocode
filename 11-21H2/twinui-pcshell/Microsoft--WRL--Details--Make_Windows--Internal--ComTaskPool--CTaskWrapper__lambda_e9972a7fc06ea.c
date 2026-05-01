/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_____lambda_e9972a7fc06ea41c4e23ae797ec0a7d8___ @ 0x1801996F0
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_e9972a7fc06ea41c4e23ae797ec0a7d8___ @ 0x180199F34 (Windows--Internal--ComTaskPool--QueueTask__lambda_e9972a7fc06ea41c4e23ae797ec0a7d8___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180126630 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dc9a4f30738474328512289af513d076_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dc9a4f30738474328512289af513d076_____ @ 0x180191DB4 (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_dc9a.c)
 *     _lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_::_lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_ @ 0x18019B3CC (_lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_--_lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_.c)
 */

// Hidden C++ exception states: #wind=4
volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_____lambda_e9972a7fc06ea41c4e23ae797ec0a7d8___(
        volatile signed __int32 **a1,
        __int64 a2)
{
  volatile signed __int32 *v4; // rax
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v7; // [rsp+60h] [rbp+18h] BYREF
  volatile signed __int32 *v8; // [rsp+68h] [rbp+20h]

  *a1 = 0LL;
  v4 = (volatile signed __int32 *)operator new(0x180uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  v7 = v4;
  v8 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v4);
    lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_::_lambda_e9972a7fc06ea41c4e23ae797ec0a7d8_(v5 + 4, a2);
    *(_QWORD *)v5 = off_180642CB8;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(*a1);
    *a1 = v5;
    v7 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dc9a4f30738474328512289af513d076_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dc9a4f30738474328512289af513d076_____((void **)&v7);
  return a1;
}
