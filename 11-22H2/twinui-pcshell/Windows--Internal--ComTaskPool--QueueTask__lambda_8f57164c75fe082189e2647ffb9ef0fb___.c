/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_8f57164c75fe082189e2647ffb9ef0fb___ @ 0x18000DDC8
 * Callers:
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x18000DE50 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8f57164c75fe082189e2647ffb9ef0fb_____lambda_8f57164c75fe082189e2647ffb9ef0fb___ @ 0x18000E074 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8f57164c75fe0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801484D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_8f57164c75fe082189e2647ffb9ef0fb___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v4; // rax
  __int64 v5; // rbx
  unsigned int v6; // edi
  _QWORD v8[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8f57164c75fe082189e2647ffb9ef0fb_____lambda_8f57164c75fe082189e2647ffb9ef0fb___(
                    v8,
                    a4);
  v5 = *v4;
  *v4 = 0LL;
  if ( v8[0] )
  {
    v8[0] = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
  }
  v6 = SHTaskPoolQueueTask(0LL, 32LL, 0LL);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return v6;
}
