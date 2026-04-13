/*
 * XREFs of ??R_lambda_e4bebcfd8cff58714fd0d0cc226c9862_@@QEBA@XZ @ 0x180087540
 * Callers:
 *     ??$AtomicUpdate@V_lambda_193cdf5b7850d759724adeedd3e28aac_@@V_lambda_e4bebcfd8cff58714fd0d0cc226c9862_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_193cdf5b7850d759724adeedd3e28aac_@@AEBV_lambda_e4bebcfd8cff58714fd0d0cc226c9862_@@@Z @ 0x180085840 (--$AtomicUpdate@V_lambda_193cdf5b7850d759724adeedd3e28aac_@@V_lambda_e4bebcfd8cff58714fd0d0cc226.c)
 *     ??$Do@V_lambda_c89f9fe7f4bfe274f2b6e74df24dd1f2_@@V_lambda_e4bebcfd8cff58714fd0d0cc226c9862_@@@?$InvalidationChecker@V?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@AEBV_lambda_c89f9fe7f4bfe274f2b6e74df24dd1f2_@@AEBV_lambda_e4bebcfd8cff58714fd0d0cc226c9862_@@@Z @ 0x180086098 (--$Do@V_lambda_c89f9fe7f4bfe274f2b6e74df24dd1f2_@@V_lambda_e4bebcfd8cff58714fd0d0cc226c9862_@@@-.c)
 *     ??$_DoWithInvalidationCheck@V_lambda_9ee670deb118c68b1a4749b5b877e7fe_@@V_lambda_7cb87bf4bdfa3f48fb11502d87680757_@@@?$SimpleVectorIterator@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@V?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$DefaultVectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@AEAAJAEBV_lambda_9ee670deb118c68b1a4749b5b877e7fe_@@AEBV_lambda_7cb87bf4bdfa3f48fb11502d87680757_@@@Z @ 0x180086A08 (--$_DoWithInvalidationCheck@V_lambda_9ee670deb118c68b1a4749b5b877e7fe_@@V_lambda_7cb87bf4bdfa3f4.c)
 *     ??R_lambda_9ee670deb118c68b1a4749b5b877e7fe_@@QEBAJXZ @ 0x180087620 (--R_lambda_9ee670deb118c68b1a4749b5b877e7fe_@@QEBAJXZ.c)
 * Callees:
 *     ??$Destroy@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@Z @ 0x180085920 (--$Destroy@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@I.c)
 */

_DWORD **__fastcall _lambda_e4bebcfd8cff58714fd0d0cc226c9862_::operator()(_QWORD **a1)
{
  _DWORD **result; // rax
  __int64 v2; // rsi
  _DWORD *v4; // rdx

  result = (_DWORD **)*a1;
  v2 = 0LL;
  v4 = (_DWORD *)**a1;
  if ( *v4 )
  {
    do
    {
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>((__int64 *)(*a1[1] + 8 * v2));
      result = (_DWORD **)*a1;
      *(_QWORD *)(*a1[1] + 8 * v2) = 0LL;
      v2 = (unsigned int)(v2 + 1);
      v4 = *result;
    }
    while ( (unsigned int)v2 < **result );
  }
  *v4 = 0;
  return result;
}
