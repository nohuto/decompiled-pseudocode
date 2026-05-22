/*
 * XREFs of ?DemotePrimaryProviderInternal@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x1800B476C
 * Callers:
 *     ?DemoteProviderPrimary@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x1800B47D8 (-DemoteProviderPrimary@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_03f4dc41ea8f14b1d8dc5b14e548ce90__void_IMPCInputProviderBase___::_Do_call @ 0x1800B8BC0 (std--_Func_impl_no_alloc__lambda_03f4dc41ea8f14b1d8dc5b14e548ce90__void_IMPCInputPr_ea_1800B8BC0.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProviderBase@@@Z @ 0x1800A8378 (--0-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProvid.c)
 *     ?DetachProvider@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800A860C (-DetachProvider@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800A8A04 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?ProcessProviderDemoted@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x1800BD1B0 (-ProcessProviderDemoted@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@@Z.c)
 */

void __fastcall MPCHolographicInputManager::DemotePrimaryProviderInternal(
        MPCCursorManager **this,
        struct IMPCInputProviderBase *a2)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  MPCGestureHandlerManager *Instance; // rbx
  unsigned __int64 *v7; // rax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = MPCCursorManager::ProcessProviderDemoted(this[423], a2);
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x270,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v3,
      v8);
  Instance = MPCGestureHandlerManager::GetInstance(v5, v4);
  v7 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
         &v10,
         (__int64)a2);
  MPCGestureHandlerManager::DetachProvider(Instance, v7);
}
