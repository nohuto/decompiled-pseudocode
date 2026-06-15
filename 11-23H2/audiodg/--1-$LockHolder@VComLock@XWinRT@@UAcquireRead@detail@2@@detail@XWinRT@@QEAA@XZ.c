/*
 * XREFs of ??1?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@XWinRT@@QEAA@XZ @ 0x1400803E0
 * Callers:
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice_____::GetAt_::_1_::dtor$0 @ 0x140036882 (_Windows--Foundation--Collections--Internal--Vector_Windows--Media--Devices--Internal--AudioDevi.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Storage::Streams::IBuffer___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Storage::Streams::IBuffer____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Storage::Streams::IBuffer____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Storage::Streams::IBuffer_____::GetAt_::_1_::dtor$0 @ 0x140084200 (_Windows--Foundation--Collections--Internal--Vector_Windows--Storage--Streams--IBuf_ea_140084200.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Media::Devices::AudioDeviceModule___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Media::Devices::AudioDeviceModule____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::AudioDeviceModule____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Media::Devices::AudioDeviceModule_____::GetAt_::_1_::dtor$0 @ 0x1400842D0 (_Windows--Foundation--Collections--Internal--Vector_Windows--Media--Devices--AudioD_ea_1400842D0.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Storage::Streams::IBuffer___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Storage::Streams::IBuffer____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Storage::Streams::IBuffer____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Storage::Streams::IBuffer_____::GetMany_::_1_::dtor$0 @ 0x1400858A0 (_Windows--Foundation--Collections--Internal--Vector_Windows--Storage--Streams--IBuf_ea_1400858A0.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice_____::GetMany_::_1_::dtor$0 @ 0x140085A90 (_Windows--Foundation--Collections--Internal--Vector_Windows--Media--Devices--Intern_ea_140085A90.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Media::Devices::AudioDeviceModule___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Media::Devices::AudioDeviceModule____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::AudioDeviceModule____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Media::Devices::AudioDeviceModule_____::GetMany_::_1_::dtor$0 @ 0x140085C80 (_Windows--Foundation--Collections--Internal--Vector_Windows--Media--Devices--AudioD_ea_140085C80.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Storage::Streams::IBuffer___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Storage::Streams::IBuffer____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Storage::Streams::IBuffer____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Storage::Streams::IBuffer_____::IndexOf_::_1_::dtor$0 @ 0x140086FB6 (_Windows--Foundation--Collections--Internal--Vector_Windows--Storage--Streams--IBuf_ea_140086FB6.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Media::Devices::Internal::AudioDeviceBrokerDevice_____::IndexOf_::_1_::dtor$0 @ 0x140087116 (_Windows--Foundation--Collections--Internal--Vector_Windows--Media--Devices--Intern_ea_140087116.c)
 *     _Windows::Foundation::Collections::Internal::Vector_Windows::Media::Devices::AudioDeviceModule___Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_Windows::Media::Devices::AudioDeviceModule____Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_Windows::Media::Devices::AudioDeviceModule____Windows::Foundation::Collections::Internal::DefaultVectorOptions_Windows::Media::Devices::AudioDeviceModule_____::IndexOf_::_1_::dtor$0 @ 0x140087276 (_Windows--Foundation--Collections--Internal--Vector_Windows--Media--Devices--AudioD_ea_140087276.c)
 * Callees:
 *     <none>
 */

void __fastcall XWinRT::detail::LockHolder<XWinRT::ComLock,XWinRT::detail::AcquireRead>::~LockHolder<XWinRT::ComLock,XWinRT::detail::AcquireRead>(
        RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v1; // rax
  RTL_SRWLOCK *v3; // rcx

  v1 = *a1;
  if ( *a1 )
  {
    v3 = v1 + 1;
    if ( LODWORD(v1->Ptr) == 1 )
      --LODWORD(v3->Ptr);
    else
      ReleaseSRWLockShared(v3);
    *a1 = 0LL;
  }
}
