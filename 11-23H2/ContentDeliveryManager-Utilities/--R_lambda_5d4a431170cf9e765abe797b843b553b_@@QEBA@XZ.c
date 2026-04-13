/*
 * XREFs of ??R_lambda_5d4a431170cf9e765abe797b843b553b_@@QEBA@XZ @ 0x180090624
 * Callers:
 *     ??$AtomicUpdate@V_lambda_6da5d50197c687db247b6d706d272348_@@V_lambda_5d4a431170cf9e765abe797b843b553b_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_6da5d50197c687db247b6d706d272348_@@AEBV_lambda_5d4a431170cf9e765abe797b843b553b_@@@Z @ 0x18008C204 (--$AtomicUpdate@V_lambda_6da5d50197c687db247b6d706d272348_@@V_lambda_5d4a431170cf9e765abe797b843.c)
 *     ??$Do@V_lambda_cf00cbf1c1a7f44b0986c29904714c0c_@@V_lambda_5d4a431170cf9e765abe797b843b553b_@@@?$InvalidationChecker@V?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@AEBV_lambda_cf00cbf1c1a7f44b0986c29904714c0c_@@AEBV_lambda_5d4a431170cf9e765abe797b843b553b_@@@Z @ 0x18008C740 (--$Do@V_lambda_cf00cbf1c1a7f44b0986c29904714c0c_@@V_lambda_5d4a431170cf9e765abe797b843b553b_@@@-.c)
 * Callees:
 *     ??$Destroy@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Z @ 0x18008C2B0 (--$Destroy@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Interfac.c)
 */

_DWORD **__fastcall _lambda_5d4a431170cf9e765abe797b843b553b_::operator()(_QWORD **a1)
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
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal>((__int64 *)(*a1[1] + 8 * v2));
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
