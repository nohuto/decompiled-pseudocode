/*
 * XREFs of ??$_DoWithInvalidationCheck@V_lambda_9ee670deb118c68b1a4749b5b877e7fe_@@V_lambda_7cb87bf4bdfa3f48fb11502d87680757_@@@?$SimpleVectorIterator@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@V?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$DefaultVectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@AEAAJAEBV_lambda_9ee670deb118c68b1a4749b5b877e7fe_@@AEBV_lambda_7cb87bf4bdfa3f48fb11502d87680757_@@@Z @ 0x180086A58
 * Callers:
 *     ?GetMany@?$SimpleVectorIterator@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@V?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$DefaultVectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@PEAI@Z @ 0x180088240 (-GetMany@-$SimpleVectorIterator@PEAVTargetedContentTriggerStateTransition@Internal@TargetedConte.c)
 * Callees:
 *     ??R_lambda_e4bebcfd8cff58714fd0d0cc226c9862_@@QEBA@XZ @ 0x180087590 (--R_lambda_e4bebcfd8cff58714fd0d0cc226c9862_@@QEBA@XZ.c)
 *     ??R_lambda_9ee670deb118c68b1a4749b5b877e7fe_@@QEBAJXZ @ 0x180087670 (--R_lambda_9ee670deb118c68b1a4749b5b877e7fe_@@QEBAJXZ.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,XWinRT::IntVersionTag,0>::_DoWithInvalidationCheck<_lambda_9ee670deb118c68b1a4749b5b877e7fe_,_lambda_7cb87bf4bdfa3f48fb11502d87680757_>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v3; // ebx
  __int64 v5; // rbp
  int v7; // eax
  __int64 v8; // rdx

  v3 = *(_DWORD *)(a1 + 48);
  v5 = *(_QWORD *)(a1 + 32);
  if ( v3 >= 0 )
  {
    v7 = _lambda_9ee670deb118c68b1a4749b5b877e7fe_::operator()(a2);
    v3 = v7;
    if ( *(_DWORD *)(a1 + 52) != *(_DWORD *)(v5 + 88) )
    {
      *(_DWORD *)(a1 + 48) = -2147483636;
      if ( v7 < 0 )
      {
        RoTransformError((unsigned int)v7, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        _lambda_e4bebcfd8cff58714fd0d0cc226c9862_::operator()(a3, v8);
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v3, 0LL);
  }
  return (unsigned int)v3;
}
