/*
 * XREFs of ??$?0PEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@?$AutoValue@PEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@@XWinRT@@QEAA@AEBQEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@PEAJ@Z @ 0x180024224
 * Callers:
 *     ?InsertAtInternal@?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@5@_N@Z @ 0x180037A50 (-InsertAtInternal@-$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Win.c)
 *     ?SetAt@?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@5@@Z @ 0x18003FDD0 (-SetAt@-$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U-$De.c)
 * Callees:
 *     ??$Construct@UIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@PEAU23456@@Z @ 0x180025AAC (--$Construct@UIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Interface.c)
 */

_QWORD *__fastcall XWinRT::AutoValue<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>::AutoValue<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>(
        _QWORD *a1,
        _QWORD *a2,
        int *a3)
{
  int v5; // eax

  v5 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest>(
         a1,
         *a2);
  *a3 = v5;
  if ( v5 < 0 )
    *a1 = 0LL;
  return a1;
}
