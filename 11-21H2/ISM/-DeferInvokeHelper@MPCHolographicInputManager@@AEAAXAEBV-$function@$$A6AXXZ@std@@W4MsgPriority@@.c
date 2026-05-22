/*
 * XREFs of ?DeferInvokeHelper@MPCHolographicInputManager@@AEAAXAEBV?$function@$$A6AXXZ@std@@W4MsgPriority@@@Z @ 0x18009D15C
 * Callers:
 *     ?DisplayContextChangeCallback@MPCHolographicInputManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18009D380 (-DisplayContextChangeCallback@MPCHolographicInputManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID.c)
 *     ?Input3DSwitchDisableCallback@MPCHolographicInputManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18009E3D0 (-Input3DSwitchDisableCallback@MPCHolographicInputManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MPCHolographicInputManager::DeferInvokeHelper(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdi
  __int64 (__fastcall ***v5)(_QWORD, void *); // rcx
  __int64 result; // rax
  int v7; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = operator new(0x40uLL);
  v4[7] = 0LL;
  v5 = *(__int64 (__fastcall ****)(_QWORD, void *))(a2 + 56);
  if ( v5 )
    v4[7] = (**v5)(v5, v4);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *), _QWORD *, __int64))(**(_QWORD **)(a1 + 3624)
                                                                                                + 152LL))(
             *(_QWORD *)(a1 + 3624),
             lambda_3b64102ac84e73bf6a3808442553243e_::_lambda_invoker_cdecl_,
             v4,
             4LL);
  if ( (int)result < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x47C,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)result,
      v7);
  return result;
}
