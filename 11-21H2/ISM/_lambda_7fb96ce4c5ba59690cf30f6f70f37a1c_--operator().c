/*
 * XREFs of _lambda_7fb96ce4c5ba59690cf30f6f70f37a1c_::operator() @ 0x18009CF54
 * Callers:
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIMPCTarget@@@Z @ 0x18009DF08 (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall lambda_7fb96ce4c5ba59690cf30f6f70f37a1c_::operator()(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v5; // rax
  __int64 v6; // r8
  unsigned int v7; // eax
  _QWORD *v8; // rax
  unsigned int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *a1;
  *(_BYTE *)(a2 + 3002) = 0;
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 3288) + 48LL))(*(_QWORD *)(v2 + 3288));
  v6 = v5;
  if ( v5 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 24LL))(v5, a2);
    if ( ((v7 + 0x80000000) & 0x80000000) == 0 && v7 != -2147417853 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        755LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)v7);
  }
  v8 = (_QWORD *)a1[1];
  *(_BYTE *)(a2 + 3002) = 1;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*v8 + 24LL))(*v8, a2, v6);
  if ( ((v9 + 0x80000000) & 0x80000000) == 0 && v9 != -2147417853 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      764LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)v9);
}
