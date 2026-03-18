/*
 * XREFs of ?SysMmClosePhysicalObject@@YAXPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1C002B780
 * Callers:
 *     ?PinFrameBufferForSave@DXGADAPTER@@QEAAJI_KIPEAPEAU_MDL@@PEAPEAU_DXGK_ADL@@@Z @ 0x1C02B86EC (-PinFrameBufferForSave@DXGADAPTER@@QEAAJI_KIPEAPEAU_MDL@@PEAPEAU_DXGK_ADL@@@Z.c)
 *     ?UnpinFrameBufferForSave@DXGADAPTER@@QEAAJI@Z @ 0x1C02BAA6C (-UnpinFrameBufferForSave@DXGADAPTER@@QEAAJI@Z.c)
 * Callees:
 *     SmmClosePhysicalObject @ 0x1C0012C88 (SmmClosePhysicalObject.c)
 */

void __fastcall SysMmClosePhysicalObject(struct SYSMM_ADAPTER_OBJECT *a1, __int64 a2, int a3)
{
  SmmClosePhysicalObject((__int64 *)a1, a2, a3);
}
