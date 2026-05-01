/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_b6e4afa68249b0204a2fcfbf47c2ea5d___ @ 0x18040EFBC
 * Callers:
 *     ?NotifyGlobalComponentsForWindowStateChange@UwpWindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x180415948 (-NotifyGlobalComponentsForWindowStateChange@UwpWindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChang.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180126630 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b6e4afa68249b0204a2fcfbf47c2ea5d_____lambda_b6e4afa68249b0204a2fcfbf47c2ea5d___ @ 0x18040EC1C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b6e4afa68249b.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_b6e4afa68249b0204a2fcfbf47c2ea5d___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  volatile signed __int32 **v5; // rax
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rcx
  unsigned int v8; // edi
  volatile signed __int32 *v10; // [rsp+30h] [rbp-18h] BYREF

  v5 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b6e4afa68249b0204a2fcfbf47c2ea5d_____lambda_b6e4afa68249b0204a2fcfbf47c2ea5d___(
         &v10,
         a4);
  v6 = *v5;
  *v5 = 0LL;
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v7);
  }
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3, 0LL, v6, 0LL);
  if ( v6 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
  return v8;
}
