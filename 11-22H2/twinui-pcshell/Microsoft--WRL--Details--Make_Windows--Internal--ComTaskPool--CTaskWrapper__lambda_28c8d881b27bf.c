/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_28c8d881b27bf1ac2cdae8c290af34c5_____lambda_28c8d881b27bf1ac2cdae8c290af34c5___ @ 0x18024E2E8
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_28c8d881b27bf1ac2cdae8c290af34c5___ @ 0x18024E7D8 (Windows--Internal--ComTaskPool--QueueTask__lambda_28c8d881b27bf1ac2cdae8c290af34c5___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801484D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c9b45bb761211b190adbb06a9db82044_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c9b45bb761211b190adbb06a9db82044_____ @ 0x18024F6E0 (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c9b4.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_28c8d881b27bf1ac2cdae8c290af34c5_____lambda_28c8d881b27bf1ac2cdae8c290af34c5___(
        volatile signed __int32 **a1,
        __int64 a2)
{
  void *v4; // rax
  _OWORD *v5; // rbx
  void *v7; // [rsp+20h] [rbp-18h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v4;
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v4);
    v5[1] = *(_OWORD *)a2;
    v5[2] = *(_OWORD *)(a2 + 16);
    *((_QWORD *)v5 + 6) = *(_QWORD *)(a2 + 32);
    *(_QWORD *)v5 = off_1807C9E08;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(*a1);
    v7 = 0LL;
    *a1 = (volatile signed __int32 *)v5;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c9b45bb761211b190adbb06a9db82044_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c9b45bb761211b190adbb06a9db82044_____(&v7);
  return a1;
}
