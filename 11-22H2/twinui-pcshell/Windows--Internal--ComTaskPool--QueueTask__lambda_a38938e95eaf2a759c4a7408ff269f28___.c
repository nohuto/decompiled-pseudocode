/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_a38938e95eaf2a759c4a7408ff269f28___ @ 0x18005F240
 * Callers:
 *     CIAMGlobals::QueueViewManagementTask__lambda_8c1dabe8f4de7f4305212773c342f192___ @ 0x18005F1D4 (CIAMGlobals--QueueViewManagementTask__lambda_8c1dabe8f4de7f4305212773c342f192___.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a38938e95eaf2a759c4a7408ff269f28_____lambda_a38938e95eaf2a759c4a7408ff269f28___ @ 0x18005F2CC (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a38938e95eaf2.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801484D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_a38938e95eaf2a759c4a7408ff269f28___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 *v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // edi
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v5 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a38938e95eaf2a759c4a7408ff269f28_____lambda_a38938e95eaf2a759c4a7408ff269f28___(
                    v9,
                    a4);
  v6 = *v5;
  *v5 = 0LL;
  if ( v9[0] )
  {
    v9[0] = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
  }
  v7 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v7;
}
