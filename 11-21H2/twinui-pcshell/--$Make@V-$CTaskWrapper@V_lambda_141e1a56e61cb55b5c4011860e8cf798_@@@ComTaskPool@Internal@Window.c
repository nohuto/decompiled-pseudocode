/*
 * XREFs of ??$Make@V?$CTaskWrapper@V_lambda_141e1a56e61cb55b5c4011860e8cf798_@@@ComTaskPool@Internal@Windows@@V_lambda_141e1a56e61cb55b5c4011860e8cf798_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_141e1a56e61cb55b5c4011860e8cf798_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_141e1a56e61cb55b5c4011860e8cf798_@@@Z @ 0x18053DF98
 * Callers:
 *     ??$QueueTask@V_lambda_141e1a56e61cb55b5c4011860e8cf798_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_141e1a56e61cb55b5c4011860e8cf798_@@@Z @ 0x18053E0C4 (--$QueueTask@V_lambda_141e1a56e61cb55b5c4011860e8cf798_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180126630 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_141e1a56e61cb55b5c4011860e8cf798_>,_lambda_141e1a56e61cb55b5c4011860e8cf798_>(
        volatile signed __int32 **a1,
        __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rcx

  *a1 = 0LL;
  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v4);
    v6 = (_QWORD *)(a2 + 8);
    v5[2] = *(_QWORD *)a2;
    v5[3] = 0LL;
    if ( v5 + 3 != (_QWORD *)(a2 + 8) )
    {
      v5[3] = *v6;
      *v6 = 0LL;
    }
    *((_DWORD *)v5 + 8) = *(_DWORD *)(a2 + 16);
    *v5 = &Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_141e1a56e61cb55b5c4011860e8cf798_>::`vftable';
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(*a1);
    *a1 = (volatile signed __int32 *)v5;
  }
  return a1;
}
