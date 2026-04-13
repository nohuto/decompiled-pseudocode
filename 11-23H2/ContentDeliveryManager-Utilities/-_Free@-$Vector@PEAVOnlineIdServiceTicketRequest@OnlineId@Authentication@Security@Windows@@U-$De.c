/*
 * XREFs of ?_Free@?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@Windows@@CAXPEAPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@5@I@Z @ 0x180042C9C
 * Callers:
 *     ?Clear@?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x180030140 (-Clear@-$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U-$De.c)
 *     ?_EraseAll@?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@Windows@@AEAAXPEAPEAPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@5@PEAI@Z @ 0x180042AF8 (-_EraseAll@-$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U.c)
 * Callees:
 *     ??$Destroy@UIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Z @ 0x180025B48 (--$Destroy@UIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@InterfaceLi.c)
 */

void __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>::_Free(
        __int64 *Block,
        unsigned int a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rsi

  if ( Block )
  {
    if ( a2 )
    {
      v3 = Block;
      v4 = a2;
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest>(v3++);
        --v4;
      }
      while ( v4 );
    }
    free(Block);
  }
}
