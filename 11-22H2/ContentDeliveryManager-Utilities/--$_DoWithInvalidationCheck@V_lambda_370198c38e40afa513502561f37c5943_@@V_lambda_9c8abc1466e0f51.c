/*
 * XREFs of ??$_DoWithInvalidationCheck@V_lambda_370198c38e40afa513502561f37c5943_@@V_lambda_9c8abc1466e0f51228be314e85404bb2_@@@?$SimpleVectorIterator@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@V?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@AEAAJAEBV_lambda_370198c38e40afa513502561f37c5943_@@AEBV_lambda_9c8abc1466e0f51228be314e85404bb2_@@@Z @ 0x180029760
 * Callers:
 *     ?GetMany@?$SimpleVectorIterator@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@V?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@5@PEAI@Z @ 0x180035A20 (-GetMany@-$SimpleVectorIterator@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Securit.c)
 * Callees:
 *     ??R_lambda_370198c38e40afa513502561f37c5943_@@QEBAJXZ @ 0x18002CE48 (--R_lambda_370198c38e40afa513502561f37c5943_@@QEBAJXZ.c)
 *     ??R_lambda_9c8abc1466e0f51228be314e85404bb2_@@QEBA@XZ @ 0x18002D2E8 (--R_lambda_9c8abc1466e0f51228be314e85404bb2_@@QEBA@XZ.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,XWinRT::IntVersionTag,0>::_DoWithInvalidationCheck<_lambda_370198c38e40afa513502561f37c5943_,_lambda_9c8abc1466e0f51228be314e85404bb2_>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v3; // ebx
  __int64 v5; // rbp
  int v7; // eax

  v3 = *(_DWORD *)(a1 + 48);
  v5 = *(_QWORD *)(a1 + 32);
  if ( v3 >= 0 )
  {
    v7 = _lambda_370198c38e40afa513502561f37c5943_::operator()(a2);
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
        _lambda_9c8abc1466e0f51228be314e85404bb2_::operator()(a3);
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
