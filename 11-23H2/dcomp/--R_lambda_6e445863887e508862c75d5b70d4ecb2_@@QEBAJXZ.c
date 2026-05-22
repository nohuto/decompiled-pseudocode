/*
 * XREFs of ??R_lambda_6e445863887e508862c75d5b70d4ecb2_@@QEBAJXZ @ 0x1801416E0
 * Callers:
 *     ?MoveNext@?$SimpleVectorIterator@PEAVSceneNode@Scenes@Composition@UI@Windows@@U?$IVector@PEAVSceneNode@Scenes@Composition@UI@Windows@@@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVSceneNode@Scenes@Composition@UI@Windows@@@Internal@785@UNoVersionTag@Internal@785@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x180143A40 (-MoveNext@-$SimpleVectorIterator@PEAVSceneNode@Scenes@Composition@UI@Windows@@U-$IVector@PEAVSce.c)
 * Callees:
 *     ??$AtomicUpdate@V_lambda_082c10bd67fcd6d68ed1c502f74d032a_@@V_lambda_d2fe55257c11a53baced69339d9810de_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_082c10bd67fcd6d68ed1c502f74d032a_@@AEBV_lambda_d2fe55257c11a53baced69339d9810de_@@@Z @ 0x18014013C (--$AtomicUpdate@V_lambda_082c10bd67fcd6d68ed1c502f74d032a_@@V_lambda_d2fe55257c11a53baced69339d9.c)
 *     ??R_lambda_082c10bd67fcd6d68ed1c502f74d032a_@@QEBAJIPEAI@Z @ 0x180141514 (--R_lambda_082c10bd67fcd6d68ed1c502f74d032a_@@QEBAJIPEAI@Z.c)
 */

__int64 __fastcall _lambda_6e445863887e508862c75d5b70d4ecb2_::operator()(__int64 *a1)
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
    return XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_082c10bd67fcd6d68ed1c502f74d032a_,_lambda_d2fe55257c11a53baced69339d9810de_>(
             v3,
             (__int64)v6,
             v2);
  else
    return _lambda_082c10bd67fcd6d68ed1c502f74d032a_::operator()((__int64)v6, *v3, (_DWORD *)(v1 + 40));
}
