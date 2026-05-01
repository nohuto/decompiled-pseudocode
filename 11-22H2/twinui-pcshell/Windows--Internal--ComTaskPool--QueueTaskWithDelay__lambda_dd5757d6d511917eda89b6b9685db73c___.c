/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_dd5757d6d511917eda89b6b9685db73c___ @ 0x1804BA0B4
 * Callers:
 *     ?QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x1804C7810 (-QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801484D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dd5757d6d511917eda89b6b9685db73c_____lambda_dd5757d6d511917eda89b6b9685db73c___ @ 0x1804B89C8 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_dd5757d6d5119.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_dd5757d6d511917eda89b6b9685db73c___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        volatile signed __int32 *a5,
        _QWORD *a6)
{
  volatile signed __int32 **v7; // rax
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rcx
  unsigned int v10; // edi

  v7 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dd5757d6d511917eda89b6b9685db73c_____lambda_dd5757d6d511917eda89b6b9685db73c___(
         &a5,
         a6);
  v8 = *v7;
  *v7 = 0LL;
  v9 = a5;
  if ( a5 )
  {
    a5 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v9);
  }
  v10 = SHTaskPoolQueueTask(3LL, 0LL, a3);
  if ( v8 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL))(v8);
  return v10;
}
