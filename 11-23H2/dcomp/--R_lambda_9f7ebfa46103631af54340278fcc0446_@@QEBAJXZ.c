/*
 * XREFs of ??R_lambda_9f7ebfa46103631af54340278fcc0446_@@QEBAJXZ @ 0x1801A097C
 * Callers:
 *     ?MoveNext@?$SimpleVectorIterator@PEAVCompositionShape@Composition@UI@Windows@@U?$IVector@PEAVCompositionShape@Composition@UI@Windows@@@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVCompositionShape@Composition@UI@Windows@@@Internal@674@UNoVersionTag@9674@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x1801A1420 (-MoveNext@-$SimpleVectorIterator@PEAVCompositionShape@Composition@UI@Windows@@U-$IVector@PEAVCom.c)
 * Callees:
 *     ??R_lambda_082c10bd67fcd6d68ed1c502f74d032a_@@QEBAJIPEAI@Z @ 0x180141514 (--R_lambda_082c10bd67fcd6d68ed1c502f74d032a_@@QEBAJIPEAI@Z.c)
 *     ??$AtomicUpdate@V_lambda_6f7b9b02c1f72892bdbd71f7b6e9478a_@@V_lambda_73ccd5de7d2ce9965ce65d6983f66b4a_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_6f7b9b02c1f72892bdbd71f7b6e9478a_@@AEBV_lambda_73ccd5de7d2ce9965ce65d6983f66b4a_@@@Z @ 0x1801A0208 (--$AtomicUpdate@V_lambda_6f7b9b02c1f72892bdbd71f7b6e9478a_@@V_lambda_73ccd5de7d2ce9965ce65d6983f.c)
 */

__int64 __fastcall _lambda_9f7ebfa46103631af54340278fcc0446_::operator()(__int64 *a1)
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
    return XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_6f7b9b02c1f72892bdbd71f7b6e9478a_,_lambda_73ccd5de7d2ce9965ce65d6983f66b4a_>(
             v3,
             (__int64)v6,
             v2);
  else
    return _lambda_082c10bd67fcd6d68ed1c502f74d032a_::operator()((__int64)v6, *v3, (_DWORD *)(v1 + 40));
}
