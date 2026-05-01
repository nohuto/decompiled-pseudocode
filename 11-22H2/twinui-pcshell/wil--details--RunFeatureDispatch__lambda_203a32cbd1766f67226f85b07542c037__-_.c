/*
 * XREFs of wil::details::RunFeatureDispatch__lambda_203a32cbd1766f67226f85b07542c037__&_ @ 0x180105748
 * Callers:
 *     ?CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ @ 0x1801056F0 (-CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ.c)
 * Callees:
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x180106290 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180106324 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::RunFeatureDispatch__lambda_203a32cbd1766f67226f85b07542c037____(
        __int64 a1,
        const struct DiagnosticsInfo *a2,
        __int64 a3,
        char a4)
{
  struct wil::details::IFunctorHost *v4; // r8
  __int64 result; // rax
  _QWORD v6[3]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v7[8]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v8; // [rsp+40h] [rbp-28h]
  int v9; // [rsp+4Ch] [rbp-1Ch]
  unsigned int v10; // [rsp+88h] [rbp+20h] BYREF

  LOBYTE(v10) = a4;
  v6[0] = off_1807CD970;
  v6[1] = a3;
  v6[2] = &v10;
  wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v7, 0x929D9Du, a2);
  wil::details::RunFunctor((wil::details *)v6, (struct wil::details::IFunctor *)v7, v4);
  result = v10;
  if ( v8 )
    *(_DWORD *)(v8 + 16) = v9;
  return result;
}
