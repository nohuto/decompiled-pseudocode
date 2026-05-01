/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b88b1fef1c8f048fc62b8eb3823c7c67_____lambda_b88b1fef1c8f048fc62b8eb3823c7c67___ @ 0x1802EFC18
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_b88b1fef1c8f048fc62b8eb3823c7c67___ @ 0x1802EFD3C (Windows--Internal--ComTaskPool--QueueTask__lambda_b88b1fef1c8f048fc62b8eb3823c7c67___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180126630 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b88b1fef1c8f048fc62b8eb3823c7c67_____lambda_b88b1fef1c8f048fc62b8eb3823c7c67___(
        volatile signed __int32 **a1,
        char *a2)
{
  char *v4; // rax
  char *v5; // rbx

  *a1 = 0LL;
  v4 = (char *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v4);
    *((_QWORD *)v5 + 2) = 0LL;
    if ( v5 + 16 != a2 )
    {
      *((_QWORD *)v5 + 2) = *(_QWORD *)a2;
      *(_QWORD *)a2 = 0LL;
    }
    *(_OWORD *)(v5 + 24) = *(_OWORD *)(a2 + 8);
    *(_QWORD *)v5 = off_180648788;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(*a1);
    *a1 = (volatile signed __int32 *)v5;
  }
  return a1;
}
