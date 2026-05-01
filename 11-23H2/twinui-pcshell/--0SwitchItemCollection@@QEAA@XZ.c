/*
 * XREFs of ??0SwitchItemCollection@@QEAA@XZ @ 0x180564700
 * Callers:
 *     ??$MakeAndInitialize@VSwitchItemCollection@@V1@AEAPEAUISwitchItemFactory@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@$$T$$TAEAW4SwitchItemFilterBehavior@@@Details@WRL@Microsoft@@YAJPEAPEAVSwitchItemCollection@@AEAPEAUISwitchItemFactory@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@$$QEA$$T4AEAW4SwitchItemFilterBehavior@@@Z @ 0x1805644CC (--$MakeAndInitialize@VSwitchItemCollection@@V1@AEAPEAUISwitchItemFactory@@AEAPEAUIApplicationVie.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VObservableObjectArray@@UIApplicationViewChangeListener@@UISwitchItemCollection@@@WRL@Microsoft@@QEAA@XZ @ 0x1805645F8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VObservableObjectArray@@UIApplicationV.c)
 */

SwitchItemCollection *__fastcall SwitchItemCollection::SwitchItemCollection(SwitchItemCollection *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ObservableObjectArray,IApplicationViewChangeListener,ISwitchItemCollection>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,ObservableObjectArray,IApplicationViewChangeListener,ISwitchItemCollection>(this);
  *((_DWORD *)this + 55) = 1;
  *(_QWORD *)this = &SwitchItemCollection::`vftable';
  *((_QWORD *)this + 1) = &SwitchItemCollection::`vftable'{for `Microsoft::WRL::Details::Selector<ObservableObjectArray,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<ObservableObjectArray>,IWeakReferenceSource,IApplicationViewChangeListener,ISwitchItemCollection>>'};
  *((_QWORD *)this + 19) = &SwitchItemCollection::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IApplicationViewChangeListener,ISwitchItemCollection>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<ObservableObjectArray>,IWeakReferenceSource,IApplicationViewChangeListener,ISwitchItemCollection>>'};
  *((_QWORD *)this + 20) = &SwitchItemCollection::`vftable'{for `IApplicationViewChangeListener'};
  *((_QWORD *)this + 21) = &SwitchItemCollection::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ISwitchItemCollection>'};
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 54) = 0;
  return this;
}
