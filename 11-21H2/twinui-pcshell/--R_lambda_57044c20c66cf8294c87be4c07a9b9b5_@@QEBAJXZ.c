/*
 * XREFs of ??R_lambda_57044c20c66cf8294c87be4c07a9b9b5_@@QEBAJXZ @ 0x180484EA0
 * Callers:
 *     ??$Do@V_lambda_57044c20c66cf8294c87be4c07a9b9b5_@@V_lambda_123df96a4f524ef8dd161fadb1d10211_@@@?$InvalidationChecker@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@AEBV_lambda_57044c20c66cf8294c87be4c07a9b9b5_@@AEBV_lambda_123df96a4f524ef8dd161fadb1d10211_@@@Z @ 0x180484AF4 (--$Do@V_lambda_57044c20c66cf8294c87be4c07a9b9b5_@@V_lambda_123df96a4f524ef8dd161fadb1d10211_@@@-.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall _lambda_57044c20c66cf8294c87be4c07a9b9b5_::operator()(__int64 a1)
{
  __int64 v1; // rdx
  __int64 *v2; // rbx
  __int128 v3; // xmm1
  __int64 v4; // rax
  __int128 v5; // xmm0
  __int64 (__fastcall *v6)(__int64 *, _OWORD *, _QWORD, _QWORD); // r11
  _QWORD *v7; // rax
  _OWORD v9[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v10; // [rsp+60h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(__int64 **)(*(_QWORD *)a1 + 40LL);
  v3 = *(_OWORD *)(v1 + 16);
  v9[0] = *(_OWORD *)v1;
  v4 = *v2;
  v5 = *(_OWORD *)(v1 + 32);
  v9[1] = v3;
  v6 = *(__int64 (__fastcall **)(__int64 *, _OWORD *, _QWORD, _QWORD))(v4 + 72);
  v7 = *(_QWORD **)(a1 + 24);
  *(_QWORD *)&v3 = *(_QWORD *)(v1 + 48);
  v9[2] = v5;
  v10 = v3;
  return v6(v2, v9, **(_QWORD **)(a1 + 16), *v7);
}
