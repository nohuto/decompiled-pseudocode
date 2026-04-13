/*
 * XREFs of ??1ValueSetHelper@Triggers@CreativeFramework@@QEAA@XZ @ 0x18005832C
 * Callers:
 *     _ContentManagement::ContentManagementService::SendAppServiceMessage_::_1_::dtor$3 @ 0x1800EFF95 (_ContentManagement--ContentManagementService--SendAppServiceMessage_--_1_--dtor$3.c)
 *     _Windows::Services::TargetedContent::Internal::EnumerateAllTriggersInContainer_::_1_::dtor$11 @ 0x1800F318D (_Windows--Services--TargetedContent--Internal--EnumerateAllTriggersInContainer_--_1_--dtor$11.c)
 *     _Windows::Services::TargetedContent::Internal::SetTriggerRegistration_::_1_::dtor$4 @ 0x1800F35A4 (_Windows--Services--TargetedContent--Internal--SetTriggerRegistration_--_1_--dtor$4.c)
 *     _Windows::Services::TargetedContent::Internal::SetTriggerState_::_1_::dtor$5 @ 0x1800F364F (_Windows--Services--TargetedContent--Internal--SetTriggerState_--_1_--dtor$5.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CreativeFramework::Triggers::ValueSetHelper::~ValueSetHelper(
        CreativeFramework::Triggers::ValueSetHelper *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
