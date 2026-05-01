/*
 * XREFs of ??1RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAA@XZ @ 0x18030FC3C
 * Callers:
 *     _CApplicationViewManager::RaiseApplicationViewChanged_::_1_::dtor$0 @ 0x180218570 (_CApplicationViewManager--RaiseApplicationViewChanged_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18007BC88 (-Destroy@-$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para.c)
 */

void __fastcall ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::~RaiseApplicationViewChange(
        ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *this)
{
  *(_QWORD *)this = &ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::`vftable';
  wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
