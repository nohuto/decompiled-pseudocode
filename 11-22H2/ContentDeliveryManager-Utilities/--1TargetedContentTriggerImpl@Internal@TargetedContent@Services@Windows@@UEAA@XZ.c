/*
 * XREFs of ??1TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAA@XZ @ 0x1800485FC
 * Callers:
 *     ??_GTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAAPEAXI@Z @ 0x1800488F0 (--_GTargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@V?$AgileVector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@$0A@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18004A67C (-InternalRelease@-$ComPtr@V-$AgileVector@PEAVTargetedContentTriggerStateTransition@Internal@Targ.c)
 */

void __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::~TargetedContentTriggerImpl(
        HSTRING *this)
{
  volatile int *v2; // rdx

  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::AgileVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,0>>::InternalRelease(this + 24);
  WindowsDeleteString(this[22]);
  this[22] = 0LL;
  WindowsDeleteString(this[19]);
  this[19] = 0LL;
  WindowsDeleteString(this[18]);
  this[18] = 0LL;
  WindowsDeleteString(this[17]);
  this[17] = 0LL;
  WindowsDeleteString(this[16]);
  this[16] = 0LL;
  WindowsDeleteString(this[15]);
  this[15] = 0LL;
  WindowsDeleteString(this[14]);
  this[14] = 0LL;
  WindowsDeleteString(this[13]);
  this[13] = 0LL;
  WindowsDeleteString(this[12]);
  this[12] = 0LL;
  WindowsDeleteString(this[11]);
  this[11] = 0LL;
  WindowsDeleteString(this[10]);
  this[10] = 0LL;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int> *>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int> *>,Microsoft::WRL::FtmBase>(
    (__int64)this,
    v2);
}
