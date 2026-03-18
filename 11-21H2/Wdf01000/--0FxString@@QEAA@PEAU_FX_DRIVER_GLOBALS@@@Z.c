/*
 * XREFs of ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0027568
 * Callers:
 *     ?_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z @ 0x1C001F4E4 (-_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z.c)
 *     imp_WdfPdoInitAddCompatibleID @ 0x1C0027270 (imp_WdfPdoInitAddCompatibleID.c)
 *     imp_WdfRegistryQueryMultiString @ 0x1C002D190 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfPdoInitAddHardwareID @ 0x1C002F4B0 (imp_WdfPdoInitAddHardwareID.c)
 *     imp_WdfStringCreate @ 0x1C002F6E0 (imp_WdfStringCreate.c)
 *     ?AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0030870 (-AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     imp_WdfPdoInitAssignInstanceID @ 0x1C0030930 (imp_WdfPdoInitAssignInstanceID.c)
 *     imp_WdfPdoInitAssignDeviceID @ 0x1C0030A30 (imp_WdfPdoInitAssignDeviceID.c)
 *     imp_WdfDeviceInitAssignSDDLString @ 0x1C00312A0 (imp_WdfDeviceInitAssignSDDLString.c)
 *     imp_WdfPdoInitAssignContainerID @ 0x1C00348A0 (imp_WdfPdoInitAssignContainerID.c)
 * Callees:
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0016188 (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxString::FxString(FxString *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  FxObject::FxObject(this, 0x1007u, 0x78u, FxDriverGlobals);
  this->__vftable = (FxString_vtbl *)FxString::`vftable';
  RtlInitUnicodeString(&this->m_UnicodeString, 0LL);
  this->m_ObjectFlags |= 0x10u;
}
