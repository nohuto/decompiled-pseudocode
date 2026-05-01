/*
 * XREFs of ??1EnumSnappedWindows@CSnapComponentTelemetry@@QEAA@XZ @ 0x180598B6C
 * Callers:
 *     ?_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@@Z @ 0x180599D64 (-_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@@Z.c)
 *     _CSnappedWindowModel::_EnumSnappedWindows_::_1_::dtor$0 @ 0x18059A2F7 (_CSnappedWindowModel--_EnumSnappedWindows_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800C4214 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall CSnapComponentTelemetry::EnumSnappedWindows::~EnumSnappedWindows(
        CSnapComponentTelemetry::EnumSnappedWindows *this)
{
  *(_QWORD *)this = &CSnapComponentTelemetry::EnumSnappedWindows::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
