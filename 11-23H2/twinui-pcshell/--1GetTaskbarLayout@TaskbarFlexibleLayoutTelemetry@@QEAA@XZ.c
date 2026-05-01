/*
 * XREFs of ??1GetTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ @ 0x1803E5F7C
 * Callers:
 *     ?GetTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAPEAUIObjectArray@@@Z @ 0x1803E7300 (-GetTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAPEAUIObjectArray@@@Z.c)
 *     _TaskbarLayoutPolicyManager::GetTaskbarLayout_::_1_::dtor$0 @ 0x1803E74AE (_TaskbarLayoutPolicyManager--GetTaskbarLayout_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801B9424 (-Destroy@-$ActivityBase@VTaskbarLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@.c)
 */

void __fastcall TaskbarFlexibleLayoutTelemetry::GetTaskbarLayout::~GetTaskbarLayout(
        TaskbarFlexibleLayoutTelemetry::GetTaskbarLayout *this)
{
  *(_QWORD *)this = &TaskbarFlexibleLayoutTelemetry::GetTaskbarLayout::`vftable';
  wil::ActivityBase<TaskbarLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<TaskbarLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TaskbarLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
