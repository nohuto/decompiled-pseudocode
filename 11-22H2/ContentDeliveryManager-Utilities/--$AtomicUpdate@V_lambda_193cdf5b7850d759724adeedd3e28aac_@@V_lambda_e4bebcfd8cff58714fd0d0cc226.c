/*
 * XREFs of ??$AtomicUpdate@V_lambda_193cdf5b7850d759724adeedd3e28aac_@@V_lambda_e4bebcfd8cff58714fd0d0cc226c9862_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_193cdf5b7850d759724adeedd3e28aac_@@AEBV_lambda_e4bebcfd8cff58714fd0d0cc226c9862_@@@Z @ 0x180085890
 * Callers:
 *     ??$Do@V_lambda_c89f9fe7f4bfe274f2b6e74df24dd1f2_@@V_lambda_e4bebcfd8cff58714fd0d0cc226c9862_@@@?$InvalidationChecker@V?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@AEBV_lambda_c89f9fe7f4bfe274f2b6e74df24dd1f2_@@AEBV_lambda_e4bebcfd8cff58714fd0d0cc226c9862_@@@Z @ 0x1800860E8 (--$Do@V_lambda_c89f9fe7f4bfe274f2b6e74df24dd1f2_@@V_lambda_e4bebcfd8cff58714fd0d0cc226c9862_@@@-.c)
 * Callees:
 *     ??R_lambda_e4bebcfd8cff58714fd0d0cc226c9862_@@QEBA@XZ @ 0x180087590 (--R_lambda_e4bebcfd8cff58714fd0d0cc226c9862_@@QEBA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_193cdf5b7850d759724adeedd3e28aac_,_lambda_e4bebcfd8cff58714fd0d0cc226c9862_>(
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
    _lambda_e4bebcfd8cff58714fd0d0cc226c9862_::operator()(a3, v8);
  }
  return (unsigned int)v8;
}
