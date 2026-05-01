/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_d554d19dde5d167a1dcd1f147ad03baf___ @ 0x1803E9788
 * Callers:
 *     ?QueuePendingActivation@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x1803EF960 (-QueuePendingActivation@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@PEAUIPrope.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180126630 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d554d19dde5d167a1dcd1f147ad03baf_____lambda_d554d19dde5d167a1dcd1f147ad03baf___ @ 0x1803E8864 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d554d19dde5d1.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_d554d19dde5d167a1dcd1f147ad03baf___(
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

  v7 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d554d19dde5d167a1dcd1f147ad03baf_____lambda_d554d19dde5d167a1dcd1f147ad03baf___(
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
  v10 = SHTaskPoolQueueTask(3LL, 0LL, a3, 120000LL, v8, 0LL);
  if ( v8 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL))(v8);
  return v10;
}
