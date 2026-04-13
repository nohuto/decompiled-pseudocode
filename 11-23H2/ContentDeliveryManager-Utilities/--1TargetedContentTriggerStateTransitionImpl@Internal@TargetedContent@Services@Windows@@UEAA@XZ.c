/*
 * XREFs of ??1TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@UEAA@XZ @ 0x1800486DC
 * Callers:
 *     ??_GTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@UEAAPEAXI@Z @ 0x1800488E0 (--_GTargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@UEAAPEA.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl::~TargetedContentTriggerStateTransitionImpl(
        HSTRING *this)
{
  volatile int *v2; // rdx

  WindowsDeleteString(this[9]);
  this[9] = 0LL;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int> *>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int> *>,Microsoft::WRL::FtmBase>(
    (__int64)this,
    v2);
}
