/*
 * XREFs of ??R_lambda_5cc34000fb8521ff9e21252917e9b3a0_@@QEBAJXZ @ 0x14008146C
 * Callers:
 *     ?MoveNext@?$SimpleVectorIterator@PEAVAudioDeviceModule@Devices@Media@Windows@@V?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x140088AB0 (-MoveNext@-$SimpleVectorIterator@PEAVAudioDeviceModule@Devices@Media@Windows@@V-$Vector@PEAVAudi.c)
 * Callees:
 *     ??$AtomicUpdate@V_lambda_b7de74e39a92cedb1d54df460ea5fc58_@@V_lambda_0696821e1577ed752ca873eaca1551df_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_b7de74e39a92cedb1d54df460ea5fc58_@@AEBV_lambda_0696821e1577ed752ca873eaca1551df_@@@Z @ 0x14007CA44 (--$AtomicUpdate@V_lambda_b7de74e39a92cedb1d54df460ea5fc58_@@V_lambda_0696821e1577ed752ca873eaca1.c)
 *     ??R_lambda_e3c6fb090615ba5f6d24ed4c991f4fba_@@QEBAJIPEAI@Z @ 0x140081758 (--R_lambda_e3c6fb090615ba5f6d24ed4c991f4fba_@@QEBAJIPEAI@Z.c)
 */

__int64 __fastcall _lambda_5cc34000fb8521ff9e21252917e9b3a0_::operator()(__int64 *a1)
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
    return XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_b7de74e39a92cedb1d54df460ea5fc58_,_lambda_0696821e1577ed752ca873eaca1551df_>(
             v3,
             (__int64)v6,
             v2);
  else
    return _lambda_e3c6fb090615ba5f6d24ed4c991f4fba_::operator()(v6, *(unsigned int *)v3, v1 + 40);
}
