/*
 * XREFs of ??1EdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@UEAA@XZ @ 0x180130E94
 * Callers:
 *     ??_EEdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180130F30 (--_EEdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$ContextEventSource@U?$ITypedEventHandler@PEAVEdgyExperienceSource@Internal@Interactions@Composition@UI@Windows@@PEAVEdgyDetectedEventArgs@23456@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL2@Microsoft@@QEAA@XZ @ 0x180122DE4 (--1-$ContextEventSource@U-$ITypedEventHandler@PEAVEdgyExperienceSource@Internal@Interactions@Com.c)
 */

void __fastcall Windows::UI::Composition::Interactions::Internal::EdgyExperienceSource::~EdgyExperienceSource(
        Windows::UI::Composition::Interactions::Internal::EdgyExperienceSource *this,
        volatile int *a2)
{
  Microsoft::WRL2::ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Interactions::Internal::EdgyExperienceSource *,Windows::UI::Composition::Interactions::Internal::EdgyDetectedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::~ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Interactions::Internal::EdgyExperienceSource *,Windows::UI::Composition::Interactions::Internal::EdgyDetectedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>(
    (__int64 *)this + 40,
    a2);
  WindowsDeleteString(*((HSTRING *)this + 39));
  *((_QWORD *)this + 39) = 0LL;
  Windows::UI::Composition::Interactions::VisualInteractionSource::~VisualInteractionSource(this);
}
