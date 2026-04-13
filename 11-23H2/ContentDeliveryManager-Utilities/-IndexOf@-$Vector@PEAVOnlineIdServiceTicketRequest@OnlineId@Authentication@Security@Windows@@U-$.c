/*
 * XREFs of ?IndexOf@?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@5@PEAIPEAE@Z @ 0x180037780
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800229D0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$Construct@UIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@PEAU23456@@Z @ 0x180025AAC (--$Construct@UIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Interface.c)
 *     ??$Destroy@UIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Z @ 0x180025B48 (--$Destroy@UIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@InterfaceLi.c)
 *     ?IndexOfInternal@?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@Windows@@AEAAJPEAPEAUIOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@5@IPEAU67895@PEAIPEAE@Z @ 0x1800378D4 (-IndexOfInternal@-$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Wind.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x18003B0B0 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>::IndexOf(
        __int64 a1,
        int a2,
        _DWORD *a3,
        _BYTE *a4)
{
  __int64 *v8; // r14
  __int64 v9; // rsi
  RTL_SRWLOCK *v10; // rcx
  int v11; // ebx
  size_t v12; // rax
  __int64 i; // rbp
  __int64 *v14; // rdi
  int v16; // [rsp+70h] [rbp+8h] BYREF
  RTL_SRWLOCK *v17; // [rsp+80h] [rbp+18h] BYREF

  *a3 = 0;
  *a4 = 0;
  v8 = 0LL;
  v9 = 0LL;
  XWinRT::SerializingLockPolicy::Read(&v17, a1 + 72, &v16);
  v11 = v16;
  if ( v16 >= 0 )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      v12 = 8LL * *(unsigned int *)(a1 + 40);
      if ( !is_mul_ok(*(unsigned int *)(a1 + 40), 8uLL) )
        v12 = -1LL;
      v8 = (__int64 *)operator new[](v12, (const struct std::nothrow_t *)&std::nothrow);
      if ( v8 )
      {
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 40); i = (unsigned int)(i + 1) )
        {
          v11 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest>(
                  &v8[i],
                  *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * i));
          if ( v11 < 0 )
            break;
          v9 = (unsigned int)(v9 + 1);
        }
      }
      else
      {
        v11 = -2147024882;
      }
    }
    else
    {
      v11 = Windows::Foundation::Collections::Internal::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>::IndexOfInternal(
              (_DWORD)v10,
              *(_QWORD *)(a1 + 56),
              *(_DWORD *)(a1 + 40),
              a2,
              (__int64)a3,
              (__int64)a4);
    }
  }
  if ( v17 )
  {
    v10 = v17 + 1;
    if ( LODWORD(v17->Ptr) == 1 )
      --LODWORD(v10->Ptr);
    else
      ReleaseSRWLockShared(v10);
  }
  if ( (_DWORD)v9 )
  {
    if ( v11 >= 0 )
      v11 = Windows::Foundation::Collections::Internal::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>::IndexOfInternal(
              (_DWORD)v10,
              (_DWORD)v8,
              v9,
              a2,
              (__int64)a3,
              (__int64)a4);
    v14 = v8;
    do
    {
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Security::Authentication::OnlineId::IOnlineIdServiceTicketRequest>(v14++);
      --v9;
    }
    while ( v9 );
  }
  operator delete[](v8);
  return (unsigned int)v11;
}
