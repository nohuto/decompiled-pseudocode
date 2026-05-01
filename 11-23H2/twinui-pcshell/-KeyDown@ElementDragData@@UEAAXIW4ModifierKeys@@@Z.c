/*
 * XREFs of ?KeyDown@ElementDragData@@UEAAXIW4ModifierKeys@@@Z @ 0x18058FD30
 * Callers:
 *     <none>
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18016CF38 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1801D8F2C (-ContinueOnCurrentThread@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAA.c)
 *     ?CancelDrag@ElementDragData@@AEAAXXZ @ 0x18058F4CC (-CancelDrag@ElementDragData@@AEAAXXZ.c)
 */

void __fastcall ElementDragData::KeyDown(__int64 a1, int a2)
{
  _BYTE v4[32]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v5[24]; // [rsp+40h] [rbp-38h] BYREF
  int v6; // [rsp+58h] [rbp-20h]

  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 184),
    (wil::ActivityThreadWatcher *)v4);
  if ( (unsigned int)(*(_DWORD *)(a1 + 504) - 2) > 1 && a2 == 27 )
    ElementDragData::CancelDrag((ElementDragData *)a1);
  if ( v6 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v5);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v4);
}
