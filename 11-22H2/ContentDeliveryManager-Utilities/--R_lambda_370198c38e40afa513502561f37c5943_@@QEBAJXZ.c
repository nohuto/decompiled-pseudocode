/*
 * XREFs of ??R_lambda_370198c38e40afa513502561f37c5943_@@QEBAJXZ @ 0x18002CE48
 * Callers:
 *     ??$_DoWithInvalidationCheck@V_lambda_370198c38e40afa513502561f37c5943_@@V_lambda_9c8abc1466e0f51228be314e85404bb2_@@@?$SimpleVectorIterator@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@V?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@AEAAJAEBV_lambda_370198c38e40afa513502561f37c5943_@@AEBV_lambda_9c8abc1466e0f51228be314e85404bb2_@@@Z @ 0x180029760 (--$_DoWithInvalidationCheck@V_lambda_370198c38e40afa513502561f37c5943_@@V_lambda_9c8abc1466e0f51.c)
 * Callees:
 *     ??R_lambda_9c8abc1466e0f51228be314e85404bb2_@@QEBA@XZ @ 0x18002D2E8 (--R_lambda_9c8abc1466e0f51228be314e85404bb2_@@QEBA@XZ.c)
 *     ??R_lambda_e2d957ffa89f3928cbb6bcf4a48b4554_@@QEBAJIPEAI@Z @ 0x18002E4E4 (--R_lambda_e2d957ffa89f3928cbb6bcf4a48b4554_@@QEBAJIPEAI@Z.c)
 */

__int64 __fastcall _lambda_370198c38e40afa513502561f37c5943_::operator()(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  __int64 v3; // rax
  volatile signed __int32 *v4; // rdi
  unsigned __int32 v5; // ebx
  bool v6; // zf
  __int64 v7; // rdx
  int v8; // edx
  signed __int32 v9; // eax
  _QWORD v11[4]; // [rsp+20h] [rbp-20h] BYREF
  signed __int32 v12; // [rsp+60h] [rbp+20h] BYREF
  __int64 v13; // [rsp+68h] [rbp+28h] BYREF

  v1 = *a1;
  v2 = a1[4];
  v11[0] = &v13;
  v3 = a1[1];
  v13 = v1;
  v4 = (volatile signed __int32 *)(v1 + 40);
  v5 = *(_DWORD *)(v1 + 40);
  v6 = *(_BYTE *)(v1 + 56) == 0;
  v7 = v5;
  v11[1] = v3;
  v11[2] = a1[2];
  v11[3] = a1[3];
  if ( v6 )
  {
    while ( 1 )
    {
      v8 = _lambda_e2d957ffa89f3928cbb6bcf4a48b4554_::operator()(v11, v7, &v12);
      if ( v8 < 0 )
        break;
      v9 = _InterlockedCompareExchange(v4, v12, v5);
      v6 = v5 == v9;
      v5 = v9;
      if ( v6 )
        break;
      _lambda_9c8abc1466e0f51228be314e85404bb2_::operator()(v2);
      v7 = v5;
    }
  }
  else
  {
    return (unsigned int)_lambda_e2d957ffa89f3928cbb6bcf4a48b4554_::operator()(v11, v5, v4);
  }
  return (unsigned int)v8;
}
