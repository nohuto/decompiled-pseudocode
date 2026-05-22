/*
 * XREFs of ??R_lambda_f813e42821691754fe37a5d1c3b7107b_@@QEBAJXZ @ 0x1801850CC
 * Callers:
 *     ?MoveNext@?$SimpleVectorIterator@PEAUHSTRING__@@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x180189D50 (-MoveNext@-$SimpleVectorIterator@PEAUHSTRING__@@V-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredi.c)
 * Callees:
 *     ??$AtomicUpdate@V_lambda_e0774cbc35ab04c06dd6c99a10e6839d_@@V_lambda_a0cda285280cf77a5f4fdd8a40eba148_@@@AtomicUpdates@detail@XWinRT@@SAJPEAIAEBV_lambda_e0774cbc35ab04c06dd6c99a10e6839d_@@AEBV_lambda_a0cda285280cf77a5f4fdd8a40eba148_@@@Z @ 0x180180794 (--$AtomicUpdate@V_lambda_e0774cbc35ab04c06dd6c99a10e6839d_@@V_lambda_a0cda285280cf77a5f4fdd8a40e.c)
 *     ??R_lambda_e0774cbc35ab04c06dd6c99a10e6839d_@@QEBAJIPEAI@Z @ 0x180185078 (--R_lambda_e0774cbc35ab04c06dd6c99a10e6839d_@@QEBAJIPEAI@Z.c)
 */

__int64 __fastcall _lambda_f813e42821691754fe37a5d1c3b7107b_::operator()(__int64 *a1)
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
    return XWinRT::detail::AtomicUpdates::AtomicUpdate<_lambda_e0774cbc35ab04c06dd6c99a10e6839d_,_lambda_a0cda285280cf77a5f4fdd8a40eba148_>(
             v3,
             (__int64)v6,
             v2);
  else
    return _lambda_e0774cbc35ab04c06dd6c99a10e6839d_::operator()((__int64)v6, *v3, (_DWORD *)(v1 + 40));
}
