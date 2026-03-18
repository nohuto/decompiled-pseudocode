/*
 * XREFs of imp_WdfCxVerifierKeBugCheck @ 0x1C00347B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x1C0017B7C (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxVerifierDriverReportedBugcheck@@YAXPEAU_FX_DRIVER_GLOBALS@@K_K111@Z @ 0x1C0045B98 (-FxVerifierDriverReportedBugcheck@@YAXPEAU_FX_DRIVER_GLOBALS@@K_K111@Z.c)
 */

void __fastcall __noreturn imp_WdfCxVerifierKeBugCheck(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Object,
        unsigned int BugCheckCode,
        unsigned __int64 BugCheckParameter1,
        unsigned __int64 BugCheckParameter2,
        unsigned __int64 BugCheckParameter3,
        unsigned __int64 BugCheckParameter4)
{
  _FX_DRIVER_GLOBALS *v7; // rcx
  FxObject *pObject; // [rsp+30h] [rbp-18h] BYREF
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+58h] [rbp+10h] BYREF

  pFxDriverGlobals = 0LL;
  v7 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( Object )
  {
    pObject = 0LL;
    FxObjectHandleGetPtrAndGlobals(v7, Object, 0x1000u, (void **)&pObject, &pFxDriverGlobals);
    v7 = pFxDriverGlobals;
  }
  FxVerifierDriverReportedBugcheck(
    v7,
    BugCheckCode,
    BugCheckParameter1,
    BugCheckParameter2,
    BugCheckParameter3,
    BugCheckParameter4);
}
