/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_25a52f7b70a5b2ddb41b08d731639da5_____lambda_25a52f7b70a5b2ddb41b08d731639da5___ @ 0x180040C5C
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_25a52f7b70a5b2ddb41b08d731639da5___ @ 0x180040BC8 (Windows--Internal--ComTaskPool--QueueTask__lambda_25a52f7b70a5b2ddb41b08d731639da5___.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003EC90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180040CF8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_25a52f7b70a5b2ddb41b08d731639da5_____lambda_25a52f7b70a5b2ddb41b08d731639da5___(
        __int64 *a1,
        __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  volatile int *v6; // rdx

  *a1 = 0LL;
  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v4);
    v6 = *(volatile int **)a2;
    *(_QWORD *)a2 = 0LL;
    v5[2] = v6;
    v5[3] = *(_QWORD *)(a2 + 8);
    v5[4] = *(_QWORD *)(a2 + 16);
    v5[5] = *(_QWORD *)(a2 + 24);
    *((_BYTE *)v5 + 48) = *(_BYTE *)(a2 + 32);
    *v5 = &off_18016AFE8;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
        *a1,
        v6);
    *a1 = (__int64)v5;
  }
  return a1;
}
