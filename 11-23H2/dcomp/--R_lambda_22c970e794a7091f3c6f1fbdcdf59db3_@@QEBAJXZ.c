/*
 * XREFs of ??R_lambda_22c970e794a7091f3c6f1fbdcdf59db3_@@QEBAJXZ @ 0x180141608
 * Callers:
 *     ?MoveNext@?$SimpleVectorIterator@PEAVSceneComponent@Scenes@Composition@UI@Windows@@U?$IVector@PEAVSceneComponent@Scenes@Composition@UI@Windows@@@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVSceneComponent@Scenes@Composition@UI@Windows@@@Internal@785@UNoVersionTag@Internal@785@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x1801439D0 (-MoveNext@-$SimpleVectorIterator@PEAVSceneComponent@Scenes@Composition@UI@Windows@@U-$IVector@PE.c)
 * Callees:
 *     ??$AtomicUpdate@V_lambda_af9785ca4f744620e9a39cf0eebaaf92_@@V_lambda_72b783508d248fabbda0c2bf712630dd_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_af9785ca4f744620e9a39cf0eebaaf92_@@AEBV_lambda_72b783508d248fabbda0c2bf712630dd_@@@Z @ 0x1801401AC (--$AtomicUpdate@V_lambda_af9785ca4f744620e9a39cf0eebaaf92_@@V_lambda_72b783508d248fabbda0c2bf712.c)
 *     ??R_lambda_082c10bd67fcd6d68ed1c502f74d032a_@@QEBAJIPEAI@Z @ 0x180141514 (--R_lambda_082c10bd67fcd6d68ed1c502f74d032a_@@QEBAJIPEAI@Z.c)
 */

__int64 __fastcall _lambda_22c970e794a7091f3c6f1fbdcdf59db3_::operator()(__int64 *a1)
{
  __int64 v1; // r8
  _BYTE ***v2; // rdx
  volatile signed __int32 *v3; // rcx
  bool v4; // zf
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = (_BYTE ***)a1[2];
  v6[0] = a1[1];
  v7 = v1;
  v3 = (volatile signed __int32 *)(v1 + 40);
  v4 = *(_BYTE *)(v1 + 56) == 0;
  v6[1] = &v7;
  if ( v4 )
    return XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_af9785ca4f744620e9a39cf0eebaaf92_,_lambda_72b783508d248fabbda0c2bf712630dd_>(
             v3,
             (__int64)v6,
             v2);
  else
    return _lambda_082c10bd67fcd6d68ed1c502f74d032a_::operator()((__int64)v6, *v3, (_DWORD *)(v1 + 40));
}
