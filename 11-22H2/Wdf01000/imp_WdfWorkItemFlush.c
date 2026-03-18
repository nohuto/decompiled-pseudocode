/*
 * XREFs of imp_WdfWorkItemFlush @ 0x1C0008790
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0006288 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C0017D64 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0045B6C (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall imp_WdfWorkItemFlush(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 WorkItem)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rbx
  _FX_DRIVER_GLOBALS *v4; // rdi
  _FX_DRIVER_GLOBALS *v5; // rdi
  NTSTATUS v6; // edi
  KIRQL CurrentIrql; // al
  unsigned __int16 v8; // ax
  const void *_a1; // rbx
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int64 v11; // r8
  _KTHREAD *_a2; // [rsp+30h] [rbp-28h]
  FxWorkItem *pFxWorkItem; // [rsp+68h] [rbp+10h] BYREF
  _LARGE_INTEGER Timeout; // [rsp+70h] [rbp+18h] BYREF

  pFxWorkItem = 0LL;
  if ( !WorkItem )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1025uLL);
  LOWORD(v2) = 0;
  v3 = ~WorkItem & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (WorkItem & 1) != 0 )
  {
    v2 = *(unsigned __int16 *)v3;
    v3 -= v2;
  }
  if ( *(_WORD *)(v3 + 8) == 4133 )
  {
    pFxWorkItem = (FxWorkItem *)v3;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v3, (void **)&pFxWorkItem, (void *)WorkItem, 0x1025u, v2);
    v3 = (unsigned __int64)pFxWorkItem;
  }
  v4 = *(_FX_DRIVER_GLOBALS **)(v3 + 16);
  if ( v4->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(v4, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      FxVerifierDbgBreakPoint(v4);
      return;
    }
    v3 = (unsigned __int64)pFxWorkItem;
  }
  v5 = *(_FX_DRIVER_GLOBALS **)(v3 + 16);
  if ( *(struct _KTHREAD **)(v3 + 200) == KeGetCurrentThread() )
  {
    v8 = *(_WORD *)(v3 + 10);
    _a2 = *(_KTHREAD **)(v3 + 200);
    _a1 = (const void *)(v3 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v8 )
      _a1 = 0LL;
    WPP_IFR_SF_qq(v5, 2u, 0x12u, 0x10u, WPP_FxWorkItem_cpp_Traceguids, _a1, _a2);
    FxVerifierDbgBreakPoint(v5);
  }
  else
  {
    Timeout.QuadPart = -600000000LL;
    while ( 1 )
    {
      KeEnterCriticalRegion();
      v6 = KeWaitForSingleObject((PVOID)(v3 + 168), Executive, 0, 0, &Timeout);
      KeLeaveCriticalRegion();
      if ( v6 != 258 )
        break;
      CurrentThread = KeGetCurrentThread();
      v11 = v3 ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !*(_WORD *)(v3 + 10) )
        v11 = 0LL;
      DbgPrint("Thread 0x%p is waiting on WDFWORKITEM 0x%p\n", CurrentThread, v11);
    }
  }
}
