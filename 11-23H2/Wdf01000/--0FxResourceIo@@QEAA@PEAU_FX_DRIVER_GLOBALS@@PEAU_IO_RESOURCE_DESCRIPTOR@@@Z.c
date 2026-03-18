/*
 * XREFs of ??0FxResourceIo@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_DESCRIPTOR@@@Z @ 0x1C0048AB4
 * Callers:
 *     FxIoResourceListInsertDescriptor @ 0x1C0048C54 (FxIoResourceListInsertDescriptor.c)
 *     ?BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z @ 0x1C004EA88 (-BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z.c)
 * Callees:
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0001DB4 (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxResourceIo::FxResourceIo(
        FxResourceIo *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _IO_RESOURCE_DESCRIPTOR *Resource)
{
  FxObject::FxObject(this, 0x1016u, 0, FxDriverGlobals);
  this->__vftable = (FxResourceIo_vtbl *)FxResourceCm::`vftable';
  this->m_Descriptor = *Resource;
}
