/*
 * XREFs of ??1TaskbarLayoutPrependDefaultActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ @ 0x180751B9C
 * Callers:
 *     ?ApplyPrependDefaultTaskbarLayout@CPinnedList@@UEAAJXZ @ 0x180752350 (-ApplyPrependDefaultTaskbarLayout@CPinnedList@@UEAAJXZ.c)
 *     _CPinnedList::ApplyPrependDefaultTaskbarLayout_::_1_::dtor$0 @ 0x180752630 (_CPinnedList--ApplyPrependDefaultTaskbarLayout_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18017CFC4 (-Destroy@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0.c)
 */

void __fastcall TaskbarFlexibleLayoutTelemetry::TaskbarLayoutPrependDefaultActivity::~TaskbarLayoutPrependDefaultActivity(
        TaskbarFlexibleLayoutTelemetry::TaskbarLayoutPrependDefaultActivity *this)
{
  *(_QWORD *)this = &TaskbarFlexibleLayoutTelemetry::TaskbarLayoutPrependDefaultActivity::`vftable';
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
