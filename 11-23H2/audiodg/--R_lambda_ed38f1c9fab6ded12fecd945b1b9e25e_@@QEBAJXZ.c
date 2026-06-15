/*
 * XREFs of ??R_lambda_ed38f1c9fab6ded12fecd945b1b9e25e_@@QEBAJXZ @ 0x14008180C
 * Callers:
 *     ?MoveNext@?$SimpleVectorIterator@PEAUIBuffer@Streams@Storage@Windows@@V?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x1400888E0 (-MoveNext@-$SimpleVectorIterator@PEAUIBuffer@Streams@Storage@Windows@@V-$Vector@PEAUIBuffer@Stre.c)
 * Callees:
 *     ??$AtomicUpdate@V_lambda_e3c6fb090615ba5f6d24ed4c991f4fba_@@V_lambda_2b4e95c994fbfcf834a48c0377dad5b5_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_e3c6fb090615ba5f6d24ed4c991f4fba_@@AEBV_lambda_2b4e95c994fbfcf834a48c0377dad5b5_@@@Z @ 0x14007CA64 (--$AtomicUpdate@V_lambda_e3c6fb090615ba5f6d24ed4c991f4fba_@@V_lambda_2b4e95c994fbfcf834a48c0377d.c)
 *     ??R_lambda_e3c6fb090615ba5f6d24ed4c991f4fba_@@QEBAJIPEAI@Z @ 0x140081708 (--R_lambda_e3c6fb090615ba5f6d24ed4c991f4fba_@@QEBAJIPEAI@Z.c)
 */

__int64 __fastcall _lambda_ed38f1c9fab6ded12fecd945b1b9e25e_::operator()(__int64 *a1)
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
    return XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_e3c6fb090615ba5f6d24ed4c991f4fba_,_lambda_2b4e95c994fbfcf834a48c0377dad5b5_>(
             v3,
             (__int64)v6,
             v2);
  else
    return _lambda_e3c6fb090615ba5f6d24ed4c991f4fba_::operator()((__int64)v6, *v3, (_DWORD *)(v1 + 40));
}
