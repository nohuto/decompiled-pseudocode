/*
 * XREFs of imp_WdfIoResourceRequirementsListSetSlotNumber @ 0x1C0049A60
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

void __fastcall imp_WdfIoResourceRequirementsListSetSlotNumber(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESREQLIST__ *RequirementsList,
        unsigned int SlotNumber)
{
  FxIoResReqList *v4; // rax
  FxIoResReqList *pIoResReqList; // [rsp+30h] [rbp+8h] BYREF

  pIoResReqList = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)RequirementsList,
    0x1037u,
    (void **)&pIoResReqList);
  v4 = pIoResReqList;
  if ( pIoResReqList->m_SlotNumber != SlotNumber )
  {
    pIoResReqList->m_Changed = 1;
    v4 = pIoResReqList;
  }
  v4->m_SlotNumber = SlotNumber;
}
