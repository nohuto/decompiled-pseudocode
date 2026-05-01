/*
 * XREFs of ??$Make@V?$CTaskWrapper@V_lambda_e618d2e1a4350f330cc93ddf3d982686_@@@ComTaskPool@Internal@Windows@@V_lambda_e618d2e1a4350f330cc93ddf3d982686_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_e618d2e1a4350f330cc93ddf3d982686_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_e618d2e1a4350f330cc93ddf3d982686_@@@Z @ 0x18024E728
 * Callers:
 *     ??$QueueTask@V_lambda_e618d2e1a4350f330cc93ddf3d982686_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_e618d2e1a4350f330cc93ddf3d982686_@@@Z @ 0x18024EB38 (--$QueueTask@V_lambda_e618d2e1a4350f330cc93ddf3d982686_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801484D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_e618d2e1a4350f330cc93ddf3d982686_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18024F700 (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_e618d2e1a4350f330cc93ddf3d982686_@@@ComTaskPool@Inte.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_e618d2e1a4350f330cc93ddf3d982686_>,_lambda_e618d2e1a4350f330cc93ddf3d982686_>(
        volatile signed __int32 **a1,
        __int64 a2)
{
  void *v4; // rax
  _OWORD *v5; // rbx
  void *v7; // [rsp+20h] [rbp-18h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v4;
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v4);
    v5[1] = *(_OWORD *)a2;
    *((_QWORD *)v5 + 4) = *(_QWORD *)(a2 + 16);
    *(_QWORD *)v5 = &Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_e618d2e1a4350f330cc93ddf3d982686_>::`vftable';
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(*a1);
    v7 = 0LL;
    *a1 = (volatile signed __int32 *)v5;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_e618d2e1a4350f330cc93ddf3d982686_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_e618d2e1a4350f330cc93ddf3d982686_>>(&v7);
  return a1;
}
