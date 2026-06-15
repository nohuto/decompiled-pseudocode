/*
 * XREFs of ??R_lambda_a16af002d07ace4fe9b089da77d4d3b3_@@QEBAJXZ @ 0x140081700
 * Callers:
 *     ?MoveNext@?$SimpleVectorIterator@UEventRegistrationToken@@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UPodLifetimeTraits@XWinRT@@UIntVersionTag@8@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x140088B70 (-MoveNext@-$SimpleVectorIterator@UEventRegistrationToken@@V-$Vector@UEventRegistrationToken@@UEv.c)
 * Callees:
 *     ??$AtomicUpdate@V_lambda_e68733d78a9cd18cced38060ce28385c_@@V_lambda_e7f9a9833f543183a86b640d7a18f225_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_e68733d78a9cd18cced38060ce28385c_@@AEBV_lambda_e7f9a9833f543183a86b640d7a18f225_@@@Z @ 0x14007CB24 (--$AtomicUpdate@V_lambda_e68733d78a9cd18cced38060ce28385c_@@V_lambda_e7f9a9833f543183a86b640d7a1.c)
 *     ??R_lambda_e3c6fb090615ba5f6d24ed4c991f4fba_@@QEBAJIPEAI@Z @ 0x140081758 (--R_lambda_e3c6fb090615ba5f6d24ed4c991f4fba_@@QEBAJIPEAI@Z.c)
 */

__int64 __fastcall _lambda_a16af002d07ace4fe9b089da77d4d3b3_::operator()(__int64 *a1)
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
    return XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_e68733d78a9cd18cced38060ce28385c_,_lambda_e7f9a9833f543183a86b640d7a18f225_>(
             v3,
             (__int64)v6,
             v2);
  else
    return _lambda_e3c6fb090615ba5f6d24ed4c991f4fba_::operator()(v6, *(unsigned int *)v3, v1 + 40);
}
