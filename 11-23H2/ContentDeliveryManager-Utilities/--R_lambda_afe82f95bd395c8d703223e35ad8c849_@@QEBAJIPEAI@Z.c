/*
 * XREFs of ??R_lambda_afe82f95bd395c8d703223e35ad8c849_@@QEBAJIPEAI@Z @ 0x18002E2B4
 * Callers:
 *     ??$Do@V_lambda_e05f9f26ecb030e7518fad67ee518488_@@V_lambda_dda171e06a660fb5e4c1117ecfd6af5f_@@@?$InvalidationChecker@V?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@Windows@@AEBV_lambda_e05f9f26ecb030e7518fad67ee518488_@@AEBV_lambda_dda171e06a660fb5e4c1117ecfd6af5f_@@@Z @ 0x180025FE0 (--$Do@V_lambda_e05f9f26ecb030e7518fad67ee518488_@@V_lambda_dda171e06a660fb5e4c1117ecfd6af5f_@@@-.c)
 *     ??$Do@V_lambda_96f2e294df3f4a22cc23f2b01ce210f9_@@V_lambda_c31dd76b279d733f2d8fdd67f2b5b928_@@@?$InvalidationChecker@V?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@Internal@Collections@Foundation@Windows@@AEBV_lambda_96f2e294df3f4a22cc23f2b01ce210f9_@@AEBV_lambda_c31dd76b279d733f2d8fdd67f2b5b928_@@@Z @ 0x18007B34C (--$Do@V_lambda_96f2e294df3f4a22cc23f2b01ce210f9_@@V_lambda_c31dd76b279d733f2d8fdd67f2b5b928_@@@-.c)
 *     ??$Do@V_lambda_705307df771ba9d51b1cbf9d7b4f049f_@@V_lambda_511e88ddb26c626a39d80d00abe5e1e2_@@@?$InvalidationChecker@V?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$DefaultVectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$DefaultVectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@@Internal@Collections@Foundation@Windows@@AEBV_lambda_705307df771ba9d51b1cbf9d7b4f049f_@@AEBV_lambda_511e88ddb26c626a39d80d00abe5e1e2_@@@Z @ 0x180085CD4 (--$Do@V_lambda_705307df771ba9d51b1cbf9d7b4f049f_@@V_lambda_511e88ddb26c626a39d80d00abe5e1e2_@@@-.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _lambda_afe82f95bd395c8d703223e35ad8c849_::operator()(__int64 a1, unsigned int a2, _DWORD *a3)
{
  bool **v3; // r9
  __int64 *v4; // rax
  __int64 v5; // rcx

  v3 = *(bool ***)a1;
  ***(_BYTE ***)a1 = 0;
  v4 = *(__int64 **)(a1 + 8);
  v5 = *v4;
  if ( a2 >= *(_DWORD *)(*v4 + 44) )
  {
    RoOriginateError(2147483659LL, 0LL);
    return 2147483659LL;
  }
  else
  {
    *a3 = a2 + 1;
    **v3 = a2 + 1 < *(_DWORD *)(v5 + 44);
    return 0LL;
  }
}
