/*
 * XREFs of ?SetAt@?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@5@@Z @ 0x18003FDD0
 * Callers:
 *     <none>
 * Callees:
 *     ??$?0PEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@?$AutoValue@PEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@@XWinRT@@QEAA@AEBQEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@PEAJ@Z @ 0x180024224 (--$-0PEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@-$AutoValue@PE.c)
 *     ??$Destroy@UIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Z @ 0x180025B48 (--$Destroy@UIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@InterfaceLi.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18002A618 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18003B074 (-RaiseEvent@-$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@Internal@Collections@Foundation@Window.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180042478 (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>::SetAt(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // r14
  int v5; // edi
  __int64 v6; // rbx
  RTL_SRWLOCK *v7; // rcx
  __int64 v9; // [rsp+30h] [rbp-20h] BYREF
  __int64 v10; // [rsp+38h] [rbp-18h] BYREF
  RTL_SRWLOCK *v11; // [rsp+40h] [rbp-10h] BYREF
  __int64 v12; // [rsp+80h] [rbp+30h] BYREF
  __int64 Destination; // [rsp+88h] [rbp+38h] BYREF

  v12 = a3;
  v3 = a2;
  LODWORD(Destination) = 0;
  v10 = 0LL;
  XWinRT::AutoValue<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>::AutoValue<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>(
    &v9,
    &v12,
    (int *)&Destination);
  v5 = Destination;
  if ( (int)Destination >= 0 )
  {
    XWinRT::SerializingLockPolicy::Write(&v11, a1 + 72, &Destination);
    v5 = Destination;
    if ( (int)Destination >= 0 )
    {
      if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 40) )
      {
        v5 = -2147483637;
        RoOriginateError(2147483659LL, 0LL);
      }
      if ( v5 >= 0 )
      {
        XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&Destination);
        v5 = 0;
        if ( memmove_s(&Destination, 8uLL, (const void *const)(*(_QWORD *)(a1 + 56) + 8 * v3), 8uLL) )
        {
          v5 = -2147418113;
          RoOriginateError(2147549183LL, 0LL);
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v3) = v9;
          v9 = 0LL;
          ++*(_DWORD *)(a1 + 88);
          v6 = Destination;
          XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest>(&v10);
          v10 = v6;
        }
      }
    }
    if ( v11 )
    {
      v7 = v11 + 1;
      if ( LODWORD(v11->Ptr) == 1 )
        LODWORD(v7->Ptr) += 0x10000000;
      else
        ReleaseSRWLockExclusive(v7);
    }
  }
  XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest>(&v9);
  XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest>(&v10);
  if ( v5 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>::RaiseEvent();
  return (unsigned int)v5;
}
