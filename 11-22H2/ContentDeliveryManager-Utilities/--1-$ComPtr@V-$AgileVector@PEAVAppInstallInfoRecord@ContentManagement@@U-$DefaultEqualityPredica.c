/*
 * XREFs of ??1?$ComPtr@V?$AgileVector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180048328
 * Callers:
 *     _ContentManagement::AppManager::ConvertFromStoreRecords_::_1_::dtor$0 @ 0x1800D854C (_ContentManagement--AppManager--ConvertFromStoreRecords_--_1_--dtor$0.c)
 *     __lambda_4f27881777b3828299edd9a0e9cb6746_::operator()_::_1_::dtor$6 @ 0x1800D8B8D (__lambda_4f27881777b3828299edd9a0e9cb6746_--operator()_--_1_--dtor$6.c)
 *     _Windows::Services::TargetedContent::Internal::GetTriggerStateTransitionsFromSetting_::_1_::dtor$1 @ 0x1800D9D7D (_Windows--Services--TargetedContent--Internal--GetTriggerStateTransitionsFromSettin_ea_1800D9D7D.c)
 *     _Windows::Services::TargetedContent::Internal::GetTriggerStateTransitionsFromSetting_::_1_::dtor$2 @ 0x1800D9D8F (_Windows--Services--TargetedContent--Internal--GetTriggerStateTransitionsFromSettin_ea_1800D9D8F.c)
 *     _Windows::Services::TargetedContent::Internal::GetTriggeredRegistration_::_1_::dtor$1 @ 0x1800D9E01 (_Windows--Services--TargetedContent--Internal--GetTriggeredRegistration_--_1_--dtor$1.c)
 *     _Windows::Services::TargetedContent::Internal::GetTriggeredRegistration_::_1_::dtor$2 @ 0x1800D9E13 (_Windows--Services--TargetedContent--Internal--GetTriggeredRegistration_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::AgileVector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,0>>::~ComPtr<Windows::Foundation::Collections::Internal::AgileVector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,0>>()
{
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::AgileVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,0>>::InternalRelease();
}
