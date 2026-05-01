/*
 * XREFs of ??$AtomicUpdate@V_lambda_f38d8fc15da79aa093d6e90a21ae8f00_@@V_lambda_66efc83d58e203f59bf12abc409ef662_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_f38d8fc15da79aa093d6e90a21ae8f00_@@AEBV_lambda_66efc83d58e203f59bf12abc409ef662_@@@Z @ 0x180393C00
 * Callers:
 *     ??$Do@V_lambda_ead53c33d6d2c058552ef5f76c0025c6_@@V_lambda_66efc83d58e203f59bf12abc409ef662_@@@?$InvalidationChecker@V?$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@AEBV_lambda_ead53c33d6d2c058552ef5f76c0025c6_@@AEBV_lambda_66efc83d58e203f59bf12abc409ef662_@@@Z @ 0x180394158 (--$Do@V_lambda_ead53c33d6d2c058552ef5f76c0025c6_@@V_lambda_66efc83d58e203f59bf12abc409ef662_@@@-.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??R_lambda_c4a57ea5f66ec02441902ea76b57f667_@@QEBA@XZ @ 0x180397538 (--R_lambda_c4a57ea5f66ec02441902ea76b57f667_@@QEBA@XZ.c)
 */

__int64 __fastcall XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_f38d8fc15da79aa093d6e90a21ae8f00_,_lambda_66efc83d58e203f59bf12abc409ef662_>(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int32 v3; // ebx
  int v7; // eax
  __int64 v8; // rdx
  bool v9; // zf
  signed __int32 v10; // eax

  v3 = *a1;
  while ( 1 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(**(_QWORD **)a2 + 64LL)
                                                                           + 128LL))(
           *(_QWORD *)(**(_QWORD **)a2 + 64LL),
           v3,
           **(unsigned int **)(a2 + 8),
           **(_QWORD **)(a2 + 16),
           **(_QWORD **)(a2 + 24));
    v8 = (unsigned int)v7;
    if ( v7 < 0 )
      break;
    v10 = _InterlockedCompareExchange(a1, v3 + ***(_DWORD ***)(a2 + 24), v3);
    v9 = v3 == v10;
    v3 = v10;
    if ( v9 )
      break;
    _lambda_c4a57ea5f66ec02441902ea76b57f667_::operator()(a3, v8);
  }
  return (unsigned int)v8;
}
