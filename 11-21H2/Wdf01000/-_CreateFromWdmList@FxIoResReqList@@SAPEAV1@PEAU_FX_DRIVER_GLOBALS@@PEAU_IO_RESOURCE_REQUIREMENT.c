/*
 * XREFs of ?_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENTS_LIST@@E@Z @ 0x1C001DCEC
 * Callers:
 *     ?PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C001D298 (-PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C00065CC (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z @ 0x1C001DE54 (-BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z.c)
 *     ??0FxIoResList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxIoResReqList@@@Z @ 0x1C001DFC0 (--0FxIoResList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxIoResReqList@@@Z.c)
 *     ??0FxIoResReqList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0020940 (--0FxIoResReqList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxIoResReqList::_CreateFromWdmList(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _IO_RESOURCE_REQUIREMENTS_LIST *WdmRequirementsList,
        unsigned __int8 a3)
{
  FxIoResReqList *v5; // rax
  unsigned __int8 v6; // r8
  __int64 v7; // rax
  FxIoResReqList *v8; // rbx
  int v9; // esi
  FxIoResList *v10; // rax
  FxObject *v11; // rax
  FxIoResList *v12; // r14
  FxPoolTypeOrPoolFlags v13; // [rsp+40h] [rbp-10h] BYREF
  _IO_RESOURCE_LIST *pWdmResourceList; // [rsp+98h] [rbp+48h] BYREF

  *(_QWORD *)&v13.UsePoolType = 0LL;
  v13.u.PoolFlags = 64LL;
  v5 = (FxIoResReqList *)FxObjectHandleAllocCommon(FxDriverGlobals, &v13, 0xA0uLL, 0, 0LL, 0, FxObjectTypeExternal);
  if ( v5 )
  {
    FxIoResReqList::FxIoResReqList(v5, FxDriverGlobals, v6);
    v8 = (FxIoResReqList *)v7;
    if ( v7 )
    {
      if ( WdmRequirementsList )
      {
        v9 = 0;
        pWdmResourceList = WdmRequirementsList->List;
        *(_DWORD *)(v7 + 156) = WdmRequirementsList->InterfaceType;
        *(_DWORD *)(v7 + 152) = WdmRequirementsList->SlotNumber;
        if ( WdmRequirementsList->AlternativeLists )
        {
          while ( 1 )
          {
            *(_QWORD *)&v13.UsePoolType = 0LL;
            v13.u.PoolFlags = 64LL;
            v10 = (FxIoResList *)FxObjectHandleAllocCommon(
                                   FxDriverGlobals,
                                   &v13,
                                   0xA0uLL,
                                   0,
                                   0LL,
                                   0,
                                   FxObjectTypeExternal);
            if ( !v10 )
              break;
            FxIoResList::FxIoResList(v10, FxDriverGlobals, v8);
            v12 = (FxIoResList *)v11;
            if ( !v11 )
              break;
            FxObject::AssignParentObject(v11, v8);
            if ( FxIoResList::BuildFromWdmList(v12, &pWdmResourceList) < 0 )
              break;
            if ( ++v9 >= WdmRequirementsList->AlternativeLists )
              return;
          }
          v8->DeleteObject(v8);
        }
      }
    }
  }
}
