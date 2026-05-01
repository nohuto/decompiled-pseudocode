/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_26486e627deba118b53e95526e2a4d86___::CTaskWrapper__lambda_26486e627deba118b53e95526e2a4d86_____lambda_26486e627deba118b53e95526e2a4d86___ @ 0x180036598
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_26486e627deba118b53e95526e2a4d86___ @ 0x180036504 (Windows--Internal--ComTaskPool--QueueTask__lambda_26486e627deba118b53e95526e2a4d86___.c)
 * Callees:
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1800445F0 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_26486e627deba118b53e95526e2a4d86___::CTaskWrapper__lambda_26486e627deba118b53e95526e2a4d86_____lambda_26486e627deba118b53e95526e2a4d86___(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  a1[2] = *a2;
  v4 = a2[1];
  a2[1] = 0LL;
  a1[3] = v4;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 4,
    a2 + 2);
  a1[4] = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
  *a1 = off_18061D4C0;
  return a1;
}
