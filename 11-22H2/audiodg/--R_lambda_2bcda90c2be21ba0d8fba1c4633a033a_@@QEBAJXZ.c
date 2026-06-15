/*
 * XREFs of ??R_lambda_2bcda90c2be21ba0d8fba1c4633a033a_@@QEBAJXZ @ 0x140081228
 * Callers:
 *     ?MoveNext@?$SimpleVectorIterator@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@V?$Vector@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@U?$DefaultVectorOptions@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@2785@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x1400889F0 (-MoveNext@-$SimpleVectorIterator@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@V-$.c)
 * Callees:
 *     ??$AtomicUpdate@V_lambda_ff31f237a5f513eedfcdc5d7eb333a7b_@@V_lambda_0cfc5fd44ccd4c79b3f4a5312d4a07b3_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_ff31f237a5f513eedfcdc5d7eb333a7b_@@AEBV_lambda_0cfc5fd44ccd4c79b3f4a5312d4a07b3_@@@Z @ 0x14007CB94 (--$AtomicUpdate@V_lambda_ff31f237a5f513eedfcdc5d7eb333a7b_@@V_lambda_0cfc5fd44ccd4c79b3f4a5312d4.c)
 *     ??R_lambda_e3c6fb090615ba5f6d24ed4c991f4fba_@@QEBAJIPEAI@Z @ 0x140081758 (--R_lambda_e3c6fb090615ba5f6d24ed4c991f4fba_@@QEBAJIPEAI@Z.c)
 */

__int64 __fastcall _lambda_2bcda90c2be21ba0d8fba1c4633a033a_::operator()(__int64 *a1)
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
    return XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_ff31f237a5f513eedfcdc5d7eb333a7b_,_lambda_0cfc5fd44ccd4c79b3f4a5312d4a07b3_>(
             v3,
             (__int64)v6,
             v2);
  else
    return _lambda_e3c6fb090615ba5f6d24ed4c991f4fba_::operator()(v6, *(unsigned int *)v3, v1 + 40);
}
