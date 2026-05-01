/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_5dc897b16d2ec62a0cb4f80858627a7d___ @ 0x180034924
 * Callers:
 *     ?UpdateVisibility@MultitaskingViewVisibilityService@@AEAAXW4MULTITASKING_VIEW_TYPES@@0@Z @ 0x180034874 (-UpdateVisibility@MultitaskingViewVisibilityService@@AEAAXW4MULTITASKING_VIEW_TYPES@@0@Z.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5dc897b16d2ec62a0cb4f80858627a7d_____lambda_5dc897b16d2ec62a0cb4f80858627a7d___ @ 0x1800349B0 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5dc897b16d2ec.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180126630 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_5dc897b16d2ec62a0cb4f80858627a7d___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 *v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // edi
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v5 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5dc897b16d2ec62a0cb4f80858627a7d_____lambda_5dc897b16d2ec62a0cb4f80858627a7d___(
                    v9,
                    a4);
  v6 = *v5;
  *v5 = 0LL;
  if ( v9[0] )
  {
    v9[0] = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
  }
  v7 = SHTaskPoolQueueTask(3LL, 2LL, a3, 0LL, v6, 0LL);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return v7;
}
