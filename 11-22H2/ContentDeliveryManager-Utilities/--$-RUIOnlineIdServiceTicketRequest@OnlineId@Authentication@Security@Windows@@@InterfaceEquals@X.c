/*
 * XREFs of ??$?RUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@0PEA_N@Z @ 0x1800243C4
 * Callers:
 *     ?IndexOfInternal@?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@Windows@@AEAAJPEAPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@5@IPEAU67895@PEAIPEAE@Z @ 0x1800378D4 (-IndexOfInternal@-$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Wind.c)
 * Callees:
 *     ??$QueryInterface@UIUnknown@@@IUnknown@@QEAAJPEAPEAU0@@Z @ 0x180027D78 (--$QueryInterface@UIUnknown@@@IUnknown@@QEAAJPEAPEAU0@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XWinRT::InterfaceEquals::operator()<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        bool *a4)
{
  int v7; // edi
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v9 = a1;
  *a4 = 0;
  v7 = 0;
  if ( a2 == a3 )
  {
    *a4 = 1;
  }
  else if ( a2 && a3 )
  {
    v10 = 0LL;
    v9 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
    v7 = IUnknown::QueryInterface<IUnknown>(a2, &v10);
    if ( v7 >= 0 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
      v7 = IUnknown::QueryInterface<IUnknown>(a3, &v9);
      if ( v7 >= 0 )
        *a4 = v10 == v9;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  }
  else
  {
    *a4 = 0;
  }
  return (unsigned int)v7;
}
