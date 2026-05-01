/*
 * XREFs of ??1CalculateSecondaryViews@JointResizeTelemetry@@QEAA@XZ @ 0x180527C8C
 * Callers:
 *     ?CalculateSecondaryViews@JointResize@@AEAAJXZ @ 0x180528084 (-CalculateSecondaryViews@JointResize@@AEAAJXZ.c)
 *     _JointResize::CalculateSecondaryViews_::_1_::dtor$0 @ 0x18052875E (_JointResize--CalculateSecondaryViews_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180528DF4 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0CAAAAAA@U_TlgReflectorTag_Param0I.c)
 */

void __fastcall JointResizeTelemetry::CalculateSecondaryViews::~CalculateSecondaryViews(
        JointResizeTelemetry::CalculateSecondaryViews *this)
{
  *(_QWORD *)this = &JointResizeTelemetry::CalculateSecondaryViews::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<WindowManagementLogging,0,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,33554432,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
