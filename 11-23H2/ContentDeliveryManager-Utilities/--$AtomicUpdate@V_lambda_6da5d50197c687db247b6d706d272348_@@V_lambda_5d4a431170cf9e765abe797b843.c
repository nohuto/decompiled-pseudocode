/*
 * XREFs of ??$AtomicUpdate@V_lambda_6da5d50197c687db247b6d706d272348_@@V_lambda_5d4a431170cf9e765abe797b843b553b_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_6da5d50197c687db247b6d706d272348_@@AEBV_lambda_5d4a431170cf9e765abe797b843b553b_@@@Z @ 0x18008C204
 * Callers:
 *     ??$Do@V_lambda_cf00cbf1c1a7f44b0986c29904714c0c_@@V_lambda_5d4a431170cf9e765abe797b843b553b_@@@?$InvalidationChecker@V?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@AEBV_lambda_cf00cbf1c1a7f44b0986c29904714c0c_@@AEBV_lambda_5d4a431170cf9e765abe797b843b553b_@@@Z @ 0x18008C740 (--$Do@V_lambda_cf00cbf1c1a7f44b0986c29904714c0c_@@V_lambda_5d4a431170cf9e765abe797b843b553b_@@@-.c)
 * Callees:
 *     ??R_lambda_5d4a431170cf9e765abe797b843b553b_@@QEBA@XZ @ 0x180090624 (--R_lambda_5d4a431170cf9e765abe797b843b553b_@@QEBA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_6da5d50197c687db247b6d706d272348_,_lambda_5d4a431170cf9e765abe797b843b553b_>(
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
    _lambda_5d4a431170cf9e765abe797b843b553b_::operator()(a3, v8);
  }
  return (unsigned int)v8;
}
