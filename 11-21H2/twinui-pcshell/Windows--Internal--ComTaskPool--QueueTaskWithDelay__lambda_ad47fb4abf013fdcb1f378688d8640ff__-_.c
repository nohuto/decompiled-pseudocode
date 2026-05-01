/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_ad47fb4abf013fdcb1f378688d8640ff__&_ @ 0x180582C08
 * Callers:
 *     ?CheckForRemovedStartupApp@StartupRegKeyNotification@@UEAAXXZ @ 0x180585EE0 (-CheckForRemovedStartupApp@StartupRegKeyNotification@@UEAAXXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180126630 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ad47fb4abf013fdcb1f378688d8640ff__&___lambda_ad47fb4abf013fdcb1f378688d8640ff__&_ @ 0x180582A00 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ad47fb4abf013.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_ad47fb4abf013fdcb1f378688d8640ff____(
        __int64 a1,
        unsigned int a2,
        volatile signed __int32 *a3,
        _QWORD *a4)
{
  volatile signed __int32 **v5; // rax
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v9; // edi
  volatile signed __int32 *v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = a3;
  v5 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ad47fb4abf013fdcb1f378688d8640ff______lambda_ad47fb4abf013fdcb1f378688d8640ff____(
         &v11,
         a4);
  v6 = *v5;
  *v5 = 0LL;
  v7 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v7);
  }
  CurrentThreadId = GetCurrentThreadId();
  v9 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId, a2, v6, 0LL);
  if ( v6 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
  return v9;
}
