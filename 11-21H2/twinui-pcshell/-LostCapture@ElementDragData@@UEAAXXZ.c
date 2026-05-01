/*
 * XREFs of ?LostCapture@ElementDragData@@UEAAXXZ @ 0x1804D7FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x1801414A0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180190C7C (-ContinueOnCurrentThread@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 *     ?CancelDrag@ElementDragData@@AEAAXXZ @ 0x1804D770C (-CancelDrag@ElementDragData@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ElementDragData::LostCapture(ElementDragData *this)
{
  _BYTE v2[32]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v3[24]; // [rsp+40h] [rbp-38h] BYREF
  int v4; // [rsp+58h] [rbp-20h]

  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (ElementDragData *)((char *)this + 184),
    (wil::ActivityThreadWatcher *)v2);
  if ( (unsigned int)(*((_DWORD *)this + 126) - 2) > 1 )
    ElementDragData::CancelDrag(this);
  if ( v4 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v3);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v2);
}
