/*
 * XREFs of ??0ObservableObjectArray@@QEAA@XZ @ 0x1804A6F5C
 * Callers:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VObservableObjectArray@@UIApplicationViewChangeListener@@UISwitchItemCollection@@@WRL@Microsoft@@QEAA@XZ @ 0x1804A6EC4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VObservableObjectArray@@UIApplicationV.c)
 *     ??0VirtualDesktopItemCollection@@QEAA@XZ @ 0x1804A8DA4 (--0VirtualDesktopItemCollection@@QEAA@XZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VObservableObjectArray@@UIObservableObjectArrayChanged@@UIObservableObjectArrayChangedBeginEnd@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$ChainInterfaces@UISwitchItemFilteredCollection@@UIObservableObjectArray@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@WRL@Microsoft@@QEAA@XZ @ 0x1804AA3C8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VObservableObjectArray@@UIObservableOb.c)
 * Callees:
 *     ??0CGITRegistrationList@@QEAA@XZ @ 0x1800D1704 (--0CGITRegistrationList@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
ObservableObjectArray *__fastcall ObservableObjectArray::ObservableObjectArray(ObservableObjectArray *this)
{
  *(_QWORD *)this = &ObservableObjectArray::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  CGITRegistrationList::CGITRegistrationList((ObservableObjectArray *)((char *)this + 48));
  CGITRegistrationList::CGITRegistrationList((ObservableObjectArray *)((char *)this + 96));
  return this;
}
