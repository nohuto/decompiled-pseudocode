/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f841925b73e0ab0c87901297ab2c4f4d___::CTaskWrapper__lambda_f841925b73e0ab0c87901297ab2c4f4d_____lambda_f841925b73e0ab0c87901297ab2c4f4d___ @ 0x180036050
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_f841925b73e0ab0c87901297ab2c4f4d___ @ 0x180035FBC (Windows--Internal--ComTaskPool--QueueTask__lambda_f841925b73e0ab0c87901297ab2c4f4d___.c)
 * Callees:
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1800445F0 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f841925b73e0ab0c87901297ab2c4f4d___::CTaskWrapper__lambda_f841925b73e0ab0c87901297ab2c4f4d_____lambda_f841925b73e0ab0c87901297ab2c4f4d___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = v4;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 24);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 48,
    a2 + 32);
  *(_QWORD *)(a1 + 48) = &ViewManagerInteropTraceLogging::AddSessionIdleTaskCompletion::`vftable';
  *(_QWORD *)a1 = off_18061D480;
  return a1;
}
