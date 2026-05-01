/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_28173a8c926c87e1969fb34dfb279c06___::CTaskWrapper__lambda_28173a8c926c87e1969fb34dfb279c06_____lambda_28173a8c926c87e1969fb34dfb279c06___ @ 0x1801F53DC
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_28173a8c926c87e1969fb34dfb279c06___ @ 0x1801F62C0 (Windows--Internal--ComTaskPool--QueueTask__lambda_28173a8c926c87e1969fb34dfb279c06___.c)
 * Callees:
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1800B1338 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para_ea_1800B1338.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_28173a8c926c87e1969fb34dfb279c06___::CTaskWrapper__lambda_28173a8c926c87e1969fb34dfb279c06_____lambda_28173a8c926c87e1969fb34dfb279c06___(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = *a2;
  v4 = a2[1];
  a2[1] = 0LL;
  *(_QWORD *)(a1 + 24) = v4;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)(a1 + 32),
    (__int64)(a2 + 2));
  *(_QWORD *)(a1 + 32) = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
  *(_QWORD *)a1 = off_1807C5EB8;
  return a1;
}
