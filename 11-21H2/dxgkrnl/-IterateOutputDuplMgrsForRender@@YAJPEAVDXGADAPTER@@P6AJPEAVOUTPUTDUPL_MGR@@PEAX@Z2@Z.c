/*
 * XREFs of ?IterateOutputDuplMgrsForRender@@YAJPEAVDXGADAPTER@@P6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z2@Z @ 0x1C016D5C8
 * Callers:
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C016D390 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     OutputDuplProcessDestroyDevice @ 0x1C016E308 (OutputDuplProcessDestroyDevice.c)
 *     OutputDuplProcessTerminateForWddm @ 0x1C01BAF88 (OutputDuplProcessTerminateForWddm.c)
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02C25BC (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z @ 0x1C016D658 (-IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z.c)
 */

__int64 __fastcall IterateOutputDuplMgrsForRender(
        struct DXGADAPTER *a1,
        __int64 (__fastcall *a2)(__int64, void *),
        void *a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax
  DXGGLOBAL *Global; // rax
  _QWORD v10[4]; // [rsp+50h] [rbp-28h] BYREF

  if ( !a1 )
  {
    WdLogSingleEntry1(1LL, 11066LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pAdapter", 11066LL, 0LL, 0LL, 0LL, 0LL);
  }
  v6 = *((_QWORD *)a1 + 349);
  if ( !v6 || (v7 = *(_QWORD *)(v6 + 120)) == 0 || (result = a2(v7, a3), (int)result >= 0) )
  {
    v10[0] = *(_QWORD *)((char *)a1 + 404);
    v10[1] = a2;
    v10[2] = a3;
    Global = DXGGLOBAL_GetGlobal();
    return DXGGLOBAL::IterateOutputDuplMgrsWithCallback(
             Global,
             lambda_e58e30cb45ac044955360754130b33ae_::_lambda_invoker_cdecl_,
             v10);
  }
  return result;
}
