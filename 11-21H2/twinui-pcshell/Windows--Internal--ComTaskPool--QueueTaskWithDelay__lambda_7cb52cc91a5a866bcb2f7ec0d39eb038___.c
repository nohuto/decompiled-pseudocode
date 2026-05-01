/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_7cb52cc91a5a866bcb2f7ec0d39eb038___ @ 0x18005B060
 * Callers:
 *     ?QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x18005A394 (-QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7cb52cc91a5a866bcb2f7ec0d39eb038_____lambda_7cb52cc91a5a866bcb2f7ec0d39eb038___ @ 0x18005B0EC (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7cb52cc91a5a8.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180126630 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_7cb52cc91a5a866bcb2f7ec0d39eb038___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 *v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // edi

  v7 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7cb52cc91a5a866bcb2f7ec0d39eb038_____lambda_7cb52cc91a5a866bcb2f7ec0d39eb038___(
                    &a5,
                    a6);
  v8 = *v7;
  *v7 = 0LL;
  if ( a5 )
  {
    a5 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
  }
  v9 = SHTaskPoolQueueTask(3LL, 0LL, a3, 120000LL, v8, 0LL);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return v9;
}
