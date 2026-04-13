/*
 * XREFs of ??R_lambda_9c8abc1466e0f51228be314e85404bb2_@@QEBA@XZ @ 0x18002D2E8
 * Callers:
 *     ??$_DoWithInvalidationCheck@V_lambda_370198c38e40afa513502561f37c5943_@@V_lambda_9c8abc1466e0f51228be314e85404bb2_@@@?$SimpleVectorIterator@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@V?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@AEAAJAEBV_lambda_370198c38e40afa513502561f37c5943_@@AEBV_lambda_9c8abc1466e0f51228be314e85404bb2_@@@Z @ 0x180029760 (--$_DoWithInvalidationCheck@V_lambda_370198c38e40afa513502561f37c5943_@@V_lambda_9c8abc1466e0f51.c)
 *     ??R_lambda_370198c38e40afa513502561f37c5943_@@QEBAJXZ @ 0x18002CE48 (--R_lambda_370198c38e40afa513502561f37c5943_@@QEBAJXZ.c)
 * Callees:
 *     ??$Destroy@UIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Z @ 0x180025B48 (--$Destroy@UIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@InterfaceLi.c)
 */

_DWORD **__fastcall _lambda_9c8abc1466e0f51228be314e85404bb2_::operator()(_QWORD **a1)
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
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest>((__int64 *)(*a1[1] + 8 * v2));
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
