/*
 * XREFs of ??$Do@V_lambda_e05f9f26ecb030e7518fad67ee518488_@@V_lambda_dda171e06a660fb5e4c1117ecfd6af5f_@@@?$InvalidationChecker@V?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@Windows@@AEBV_lambda_e05f9f26ecb030e7518fad67ee518488_@@AEBV_lambda_dda171e06a660fb5e4c1117ecfd6af5f_@@@Z @ 0x180025FE0
 * Callers:
 *     ?MoveNext@?$SimpleVectorIterator@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@V?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x1800394D0 (-MoveNext@-$SimpleVectorIterator@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Securi.c)
 * Callees:
 *     ??R_lambda_afe82f95bd395c8d703223e35ad8c849_@@QEBAJIPEAI@Z @ 0x18002E2B4 (--R_lambda_afe82f95bd395c8d703223e35ad8c849_@@QEBAJIPEAI@Z.c)
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>,XWinRT::IntVersionTag>::Do<_lambda_e05f9f26ecb030e7518fad67ee518488_,_lambda_dda171e06a660fb5e4c1117ecfd6af5f_>(
        int *a1,
        __int64 a2,
        __int64 *a3,
        _BYTE ***a4)
{
  int v4; // ebx
  __int64 v8; // rax
  _BYTE ***v9; // r12
  bool v10; // zf
  volatile signed __int32 *v11; // r14
  unsigned __int32 v12; // edi
  __int64 v13; // rdx
  unsigned __int32 v14; // eax
  __int64 v16; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v17[3]; // [rsp+28h] [rbp-40h] BYREF
  signed __int32 v18; // [rsp+70h] [rbp+8h] BYREF

  v4 = *a1;
  if ( *a1 >= 0 )
  {
    v8 = a3[1];
    v9 = (_BYTE ***)a3[2];
    v16 = *a3;
    v10 = *(_BYTE *)(v16 + 56) == 0;
    v11 = (volatile signed __int32 *)(v16 + 40);
    v12 = *(_DWORD *)(v16 + 40);
    v17[0] = v8;
    v13 = v12;
    v17[1] = &v16;
    if ( v10 )
    {
      while ( 1 )
      {
        v4 = _lambda_afe82f95bd395c8d703223e35ad8c849_::operator()(v17, v13, &v18);
        if ( v4 < 0 )
          break;
        v14 = _InterlockedCompareExchange(v11, v18, v12);
        v10 = v12 == v14;
        v12 = v14;
        if ( v10 )
          break;
        v13 = v14;
        ***v9 = 0;
      }
    }
    else
    {
      v4 = _lambda_afe82f95bd395c8d703223e35ad8c849_::operator()(v17, v12, v16 + 40);
    }
    if ( a1[1] != *(_DWORD *)(a2 + 88) )
    {
      *a1 = -2147483636;
      if ( v4 < 0 )
      {
        RoTransformError((unsigned int)v4, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        ***a4 = 0;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v4, 0LL);
  }
  return (unsigned int)v4;
}
