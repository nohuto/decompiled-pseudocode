/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_40731d9fb625dc64051a70a2bf4bfe30___ @ 0x180023CFC
 * Callers:
 *     ?FixDialogOwnershipForWindow@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x180023CA0 (-FixDialogOwnershipForWindow@CApplicationManager@@UEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_40731d9fb625dc64051a70a2bf4bfe30_____lambda_40731d9fb625dc64051a70a2bf4bfe30___ @ 0x180023D8C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_40731d9fb625d.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180126630 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 Windows::Internal::ComTaskPool::QueueTask__lambda_40731d9fb625dc64051a70a2bf4bfe30___()
{
  __int64 *v0; // rax
  __int64 v1; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v3; // edi
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v0 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_40731d9fb625dc64051a70a2bf4bfe30_____lambda_40731d9fb625dc64051a70a2bf4bfe30___(&v5);
  v1 = *v0;
  *v0 = 0LL;
  if ( v5 )
  {
    v5 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
  }
  CurrentThreadId = GetCurrentThreadId();
  v3 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId, 0LL, v1, 0LL);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return v3;
}
