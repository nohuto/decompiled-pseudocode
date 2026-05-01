/*
 * XREFs of ??R_lambda_a6988e4df8e85096e45cabd6772edee5_@@QEBAJXZ @ 0x180790620
 * Callers:
 *     ?MoveNext@?$SimpleVectorIterator@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@V?$Vector@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x180791080 (-MoveNext@-$SimpleVectorIterator@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@.c)
 * Callees:
 *     ??R_lambda_60cffcfe8b0715df3af987611c13edce_@@QEBAJIPEAI@Z @ 0x18052173C (--R_lambda_60cffcfe8b0715df3af987611c13edce_@@QEBAJIPEAI@Z.c)
 *     ??$AtomicUpdate@V_lambda_6a9dd1dc6dff05669faeedd3f5172f36_@@V_lambda_5d21d1e0a4387289d9a035c09b198600_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_6a9dd1dc6dff05669faeedd3f5172f36_@@AEBV_lambda_5d21d1e0a4387289d9a035c09b198600_@@@Z @ 0x18078FD68 (--$AtomicUpdate@V_lambda_6a9dd1dc6dff05669faeedd3f5172f36_@@V_lambda_5d21d1e0a4387289d9a035c09b1.c)
 */

__int64 __fastcall _lambda_a6988e4df8e85096e45cabd6772edee5_::operator()(__int64 *a1)
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
    return XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_6a9dd1dc6dff05669faeedd3f5172f36_,_lambda_5d21d1e0a4387289d9a035c09b198600_>(
             v3,
             (__int64)v6,
             v2);
  else
    return _lambda_60cffcfe8b0715df3af987611c13edce_::operator()((__int64)v6, *v3, (_DWORD *)(v1 + 40));
}
