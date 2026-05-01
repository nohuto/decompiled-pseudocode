/*
 * XREFs of ??R_lambda_e323e37eb6a7c14a55f28542b981c184_@@QEBAJXZ @ 0x18048A2A0
 * Callers:
 *     ?MoveNext@?$SimpleVectorIterator@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@V?$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x18048B4B0 (-MoveNext@-$SimpleVectorIterator@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windo.c)
 * Callees:
 *     ??R_lambda_60cffcfe8b0715df3af987611c13edce_@@QEBAJIPEAI@Z @ 0x180456284 (--R_lambda_60cffcfe8b0715df3af987611c13edce_@@QEBAJIPEAI@Z.c)
 *     ??$AtomicUpdate@V_lambda_60cffcfe8b0715df3af987611c13edce_@@V_lambda_4d0109064d4e478866fb97661f906aa0_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_60cffcfe8b0715df3af987611c13edce_@@AEBV_lambda_4d0109064d4e478866fb97661f906aa0_@@@Z @ 0x180489700 (--$AtomicUpdate@V_lambda_60cffcfe8b0715df3af987611c13edce_@@V_lambda_4d0109064d4e478866fb97661f9.c)
 */

__int64 __fastcall _lambda_e323e37eb6a7c14a55f28542b981c184_::operator()(__int64 *a1)
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
    return XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_60cffcfe8b0715df3af987611c13edce_,_lambda_4d0109064d4e478866fb97661f906aa0_>(
             v3,
             (__int64)v6,
             v2);
  else
    return _lambda_60cffcfe8b0715df3af987611c13edce_::operator()((__int64)v6, *v3, (_DWORD *)(v1 + 40));
}
