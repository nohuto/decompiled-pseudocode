/*
 * XREFs of ??R_lambda_d182d3414fe79c86c04964364aeaace7_@@QEBAJXZ @ 0x18017337C
 * Callers:
 *     ?MoveNext@?$SimpleVectorIterator@PEAVCompositionColorGradientStop@Composition@UI@Windows@@U?$IVector@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVCompositionColorGradientStop@Composition@UI@Windows@@@Internal@674@UNoVersionTag@9674@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x180173E00 (-MoveNext@-$SimpleVectorIterator@PEAVCompositionColorGradientStop@Composition@UI@Windows@@U-$IVe.c)
 * Callees:
 *     ??R_lambda_082c10bd67fcd6d68ed1c502f74d032a_@@QEBAJIPEAI@Z @ 0x180141514 (--R_lambda_082c10bd67fcd6d68ed1c502f74d032a_@@QEBAJIPEAI@Z.c)
 *     ??$AtomicUpdate@V_lambda_52093a543d930a23227038ef4477ab24_@@V_lambda_5d7378cbef73702dd538c6a7e108f3f5_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_52093a543d930a23227038ef4477ab24_@@AEBV_lambda_5d7378cbef73702dd538c6a7e108f3f5_@@@Z @ 0x180172C08 (--$AtomicUpdate@V_lambda_52093a543d930a23227038ef4477ab24_@@V_lambda_5d7378cbef73702dd538c6a7e10.c)
 */

__int64 __fastcall _lambda_d182d3414fe79c86c04964364aeaace7_::operator()(__int64 *a1)
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
    return XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_52093a543d930a23227038ef4477ab24_,_lambda_5d7378cbef73702dd538c6a7e108f3f5_>(
             v3,
             (__int64)v6,
             v2);
  else
    return _lambda_082c10bd67fcd6d68ed1c502f74d032a_::operator()((__int64)v6, *v3, (_DWORD *)(v1 + 40));
}
