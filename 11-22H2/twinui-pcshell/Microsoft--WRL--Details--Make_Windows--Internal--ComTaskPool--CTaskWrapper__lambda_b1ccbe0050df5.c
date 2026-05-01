/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b1ccbe0050df59b1c7585372b6aa23ae_____lambda_b1ccbe0050df59b1c7585372b6aa23ae___ @ 0x1804DC42C
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_b1ccbe0050df59b1c7585372b6aa23ae___ @ 0x1804DC4C0 (Windows--Internal--ComTaskPool--QueueTask__lambda_b1ccbe0050df59b1c7585372b6aa23ae___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801484D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b1ccbe0050df59b1c7585372b6aa23ae_____lambda_b1ccbe0050df59b1c7585372b6aa23ae___(
        volatile signed __int32 **a1,
        __int64 *a2)
{
  volatile signed __int32 *v4; // rax
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rdx

  *a1 = 0LL;
  v4 = (volatile signed __int32 *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v4);
    v6 = *a2;
    *a2 = 0LL;
    *((_QWORD *)v5 + 2) = v6;
    *((_QWORD *)v5 + 3) = a2[1];
    *((_QWORD *)v5 + 4) = a2[2];
    *((_QWORD *)v5 + 5) = a2[3];
    *(_QWORD *)v5 = off_1807DDDA0;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(*a1);
    *a1 = v5;
  }
  return a1;
}
