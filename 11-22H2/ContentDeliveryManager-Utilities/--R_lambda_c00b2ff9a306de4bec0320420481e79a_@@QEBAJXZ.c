/*
 * XREFs of ??R_lambda_c00b2ff9a306de4bec0320420481e79a_@@QEBAJXZ @ 0x18007E894
 * Callers:
 *     ??$_DoWithInvalidationCheck@V_lambda_c00b2ff9a306de4bec0320420481e79a_@@V_lambda_8323a20185fcfae9824fdd1412c0f207_@@@?$SimpleVectorIterator@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@V?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@AEAAJAEBV_lambda_c00b2ff9a306de4bec0320420481e79a_@@AEBV_lambda_8323a20185fcfae9824fdd1412c0f207_@@@Z @ 0x18007C940 (--$_DoWithInvalidationCheck@V_lambda_c00b2ff9a306de4bec0320420481e79a_@@V_lambda_8323a20185fcfae.c)
 * Callees:
 *     ??R_lambda_7f441b3ad0480de7a84e0f5e20914d30_@@QEBAJIPEAI@Z @ 0x18007E6D4 (--R_lambda_7f441b3ad0480de7a84e0f5e20914d30_@@QEBAJIPEAI@Z.c)
 *     ??R_lambda_8323a20185fcfae9824fdd1412c0f207_@@QEBA@XZ @ 0x18007E754 (--R_lambda_8323a20185fcfae9824fdd1412c0f207_@@QEBA@XZ.c)
 */

__int64 __fastcall _lambda_c00b2ff9a306de4bec0320420481e79a_::operator()(__int64 *a1)
{
  __int64 v1; // rdx
  _QWORD **v2; // rsi
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
  v2 = (_QWORD **)a1[4];
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
      v8 = _lambda_7f441b3ad0480de7a84e0f5e20914d30_::operator()((__int64)v11, v7, &v12);
      if ( v8 < 0 )
        break;
      v9 = _InterlockedCompareExchange(v4, v12, v5);
      v6 = v5 == v9;
      v5 = v9;
      if ( v6 )
        break;
      _lambda_8323a20185fcfae9824fdd1412c0f207_::operator()(v2);
      v7 = v5;
    }
  }
  else
  {
    return (unsigned int)_lambda_7f441b3ad0480de7a84e0f5e20914d30_::operator()((__int64)v11, v5, v4);
  }
  return (unsigned int)v8;
}
