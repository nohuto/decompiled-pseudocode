/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_dc9a1ee4bc8f1d94a0d7ca992cb3efdc___ @ 0x180451B70
 * Callers:
 *     ?HandleScaleOrMonitorChange@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1804530F8 (-HandleScaleOrMonitorChange@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801484D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dc9a1ee4bc8f1d94a0d7ca992cb3efdc_____lambda_dc9a1ee4bc8f1d94a0d7ca992cb3efdc___ @ 0x180451A24 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_dc9a1ee4bc8f1.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_dc9a1ee4bc8f1d94a0d7ca992cb3efdc___(
        __int64 a1,
        __int64 a2,
        volatile signed __int32 *a3,
        _QWORD *a4)
{
  volatile signed __int32 **v4; // rax
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v8; // edi
  volatile signed __int32 *v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  v4 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_dc9a1ee4bc8f1d94a0d7ca992cb3efdc_____lambda_dc9a1ee4bc8f1d94a0d7ca992cb3efdc___(
         &v10,
         a4);
  v5 = *v4;
  *v4 = 0LL;
  v6 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v6);
  }
  CurrentThreadId = GetCurrentThreadId();
  v8 = SHTaskPoolQueueTask(2LL, 0LL, CurrentThreadId);
  if ( v5 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 16LL))(v5);
  return v8;
}
