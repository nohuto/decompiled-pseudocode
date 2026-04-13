/*
 * XREFs of ?IndexOfInternal@?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@Windows@@AEAAJPEAPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@5@IPEAU67895@PEAIPEAE@Z @ 0x1800378D4
 * Callers:
 *     ?IndexOf@?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@5@PEAIPEAE@Z @ 0x180037780 (-IndexOf@-$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U-$.c)
 * Callees:
 *     ??$?RUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@0PEA_N@Z @ 0x1800243C4 (--$-RUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@InterfaceEquals@X.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>::IndexOfInternal(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5,
        _BYTE *a6)
{
  __int64 v6; // rcx
  __int64 i; // rbx
  int v11; // eax
  bool v13; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  v13 = 0;
  for ( i = 0LL; (unsigned int)i < a3 && (int)v6 >= 0; i = (unsigned int)(i + 1) )
  {
    v11 = XWinRT::InterfaceEquals::operator()<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest>(
            v6,
            a4,
            *(_QWORD *)(a2 + 8 * i),
            &v13);
    v6 = (unsigned int)v11;
    if ( v11 >= 0 && v13 )
    {
      *a6 = 1;
      *a5 = i;
      return (unsigned int)v6;
    }
  }
  return (unsigned int)v6;
}
