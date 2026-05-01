/*
 * XREFs of ??R_lambda_7cd8e48f1046f9f212bf729a42a2f303_@@QEBAJXZ @ 0x18046F98C
 * Callers:
 *     ?MoveNext@?$SimpleVectorIterator@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@V?$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@U?$DefaultVectorOptions@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x180472170 (-MoveNext@-$SimpleVectorIterator@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@V-$V.c)
 * Callees:
 *     ??R_lambda_60cffcfe8b0715df3af987611c13edce_@@QEBAJIPEAI@Z @ 0x180456284 (--R_lambda_60cffcfe8b0715df3af987611c13edce_@@QEBAJIPEAI@Z.c)
 *     ??$AtomicUpdate@V_lambda_18282b2f0ac8aaf246187af752d3ab7c_@@V_lambda_fb680c64840628c038ffa316ee154016_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_18282b2f0ac8aaf246187af752d3ab7c_@@AEBV_lambda_fb680c64840628c038ffa316ee154016_@@@Z @ 0x18046BCD4 (--$AtomicUpdate@V_lambda_18282b2f0ac8aaf246187af752d3ab7c_@@V_lambda_fb680c64840628c038ffa316ee1.c)
 */

__int64 __fastcall _lambda_7cd8e48f1046f9f212bf729a42a2f303_::operator()(__int64 *a1)
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
    return XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_18282b2f0ac8aaf246187af752d3ab7c_,_lambda_fb680c64840628c038ffa316ee154016_>(
             v3,
             (__int64)v6,
             v2);
  else
    return _lambda_60cffcfe8b0715df3af987611c13edce_::operator()((__int64)v6, *v3, (_DWORD *)(v1 + 40));
}
