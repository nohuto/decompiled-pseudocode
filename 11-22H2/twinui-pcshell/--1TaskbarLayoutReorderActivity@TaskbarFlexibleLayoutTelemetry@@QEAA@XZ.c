/*
 * XREFs of ??1TaskbarLayoutReorderActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ @ 0x180751BC8
 * Callers:
 *     ?ApplyReorderTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@H@Z @ 0x180752670 (-ApplyReorderTaskbarLayout@CPinnedList@@UEAAJW4TaskbarLayoutType@@H@Z.c)
 *     _CPinnedList::ApplyReorderTaskbarLayout_::_1_::dtor$0 @ 0x1807529FE (_CPinnedList--ApplyReorderTaskbarLayout_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18017CFC4 (-Destroy@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0.c)
 */

void __fastcall TaskbarFlexibleLayoutTelemetry::TaskbarLayoutReorderActivity::~TaskbarLayoutReorderActivity(
        TaskbarFlexibleLayoutTelemetry::TaskbarLayoutReorderActivity *this)
{
  *(_QWORD *)this = &TaskbarFlexibleLayoutTelemetry::TaskbarLayoutReorderActivity::`vftable';
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
