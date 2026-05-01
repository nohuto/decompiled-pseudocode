/*
 * XREFs of ??$Make@V?$CTaskWrapper@V_lambda_aa91cdbb300619209848d1d014bee82b_@@@ComTaskPool@Internal@Windows@@V_lambda_aa91cdbb300619209848d1d014bee82b_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_aa91cdbb300619209848d1d014bee82b_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_aa91cdbb300619209848d1d014bee82b_@@@Z @ 0x1804A2E34
 * Callers:
 *     ??$QueueTask@V_lambda_aa91cdbb300619209848d1d014bee82b_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@$$QEAV_lambda_aa91cdbb300619209848d1d014bee82b_@@@Z @ 0x1804A2EC4 (--$QueueTask@V_lambda_aa91cdbb300619209848d1d014bee82b_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180126630 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_aa91cdbb300619209848d1d014bee82b_>,_lambda_aa91cdbb300619209848d1d014bee82b_>(
        volatile signed __int32 **a1,
        _QWORD *a2)
{
  volatile signed __int32 *v4; // rax
  volatile signed __int32 *v5; // rbx
  _QWORD *v6; // rcx

  *a1 = 0LL;
  v4 = (volatile signed __int32 *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v4);
    v6 = a2 + 1;
    *((_QWORD *)v5 + 2) = *a2;
    *((_QWORD *)v5 + 3) = 0LL;
    if ( v5 + 6 != (volatile signed __int32 *)(a2 + 1) )
    {
      *((_QWORD *)v5 + 3) = *v6;
      *v6 = 0LL;
    }
    *(_QWORD *)v5 = &Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_aa91cdbb300619209848d1d014bee82b_>::`vftable';
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(*a1);
    *a1 = v5;
  }
  return a1;
}
