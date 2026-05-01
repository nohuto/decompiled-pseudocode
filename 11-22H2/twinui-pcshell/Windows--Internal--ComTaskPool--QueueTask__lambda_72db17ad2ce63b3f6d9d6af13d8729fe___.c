/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_72db17ad2ce63b3f6d9d6af13d8729fe___ @ 0x1801D0178
 * Callers:
 *     ?FixDialogOwnershipForWindow@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x180063090 (-FixDialogOwnershipForWindow@CApplicationManager@@UEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801484D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_72db17ad2ce63b3f6d9d6af13d8729fe_____lambda_72db17ad2ce63b3f6d9d6af13d8729fe___ @ 0x1801CFD44 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_72db17ad2ce63.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_72db17ad2ce63b3f6d9d6af13d8729fe___(
        __int64 a1,
        _QWORD *a2)
{
  volatile signed __int32 **v2; // rax
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi
  volatile signed __int32 *v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_72db17ad2ce63b3f6d9d6af13d8729fe_____lambda_72db17ad2ce63b3f6d9d6af13d8729fe___(
         &v8,
         a2);
  v3 = *v2;
  *v2 = 0LL;
  v4 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v4);
  }
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId);
  if ( v3 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 16LL))(v3);
  return v6;
}
