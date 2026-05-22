/*
 * XREFs of ??R_lambda_42cf37998c643a75e85d92a62c47960a_@@QEBAJXZ @ 0x1801702C8
 * Callers:
 *     ?MoveNext@?$SimpleVectorIterator@MU?$IVector@M@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@M@Internal@234@UNoVersionTag@6234@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x180171330 (-MoveNext@-$SimpleVectorIterator@MU-$IVector@M@Collections@Foundation@Windows@@U-$DefaultLifetim.c)
 * Callees:
 *     ??R_lambda_082c10bd67fcd6d68ed1c502f74d032a_@@QEBAJIPEAI@Z @ 0x180141514 (--R_lambda_082c10bd67fcd6d68ed1c502f74d032a_@@QEBAJIPEAI@Z.c)
 *     ??$AtomicUpdate@V_lambda_09c9abe5d14f7257ba06feb90d45d0ab_@@V_lambda_3e2781199ebf22e7901e8a895445d5e7_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_09c9abe5d14f7257ba06feb90d45d0ab_@@AEBV_lambda_3e2781199ebf22e7901e8a895445d5e7_@@@Z @ 0x18016FB54 (--$AtomicUpdate@V_lambda_09c9abe5d14f7257ba06feb90d45d0ab_@@V_lambda_3e2781199ebf22e7901e8a89544.c)
 */

__int64 __fastcall _lambda_42cf37998c643a75e85d92a62c47960a_::operator()(__int64 *a1)
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
    return XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_09c9abe5d14f7257ba06feb90d45d0ab_,_lambda_3e2781199ebf22e7901e8a895445d5e7_>(
             v3,
             (__int64)v6,
             v2);
  else
    return _lambda_082c10bd67fcd6d68ed1c502f74d032a_::operator()((__int64)v6, *v3, (_DWORD *)(v1 + 40));
}
