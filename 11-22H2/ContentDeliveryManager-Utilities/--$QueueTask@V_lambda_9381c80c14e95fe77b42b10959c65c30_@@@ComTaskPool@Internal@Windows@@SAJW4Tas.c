/*
 * XREFs of ??$QueueTask@V_lambda_9381c80c14e95fe77b42b10959c65c30_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@$$QEAV_lambda_9381c80c14e95fe77b42b10959c65c30_@@@Z @ 0x18006D368
 * Callers:
 *     ?PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAVICDPActivityStore@@@Z @ 0x180070858 (-PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWra.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800227B4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18002BC2C (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ??$?0V_lambda_9381c80c14e95fe77b42b10959c65c30_@@@?$CTaskWrapper@V_lambda_9381c80c14e95fe77b42b10959c65c30_@@@ComTaskPool@Internal@Windows@@QEAA@$$QEAV_lambda_9381c80c14e95fe77b42b10959c65c30_@@@Z @ 0x18006C2E0 (--$-0V_lambda_9381c80c14e95fe77b42b10959c65c30_@@@-$CTaskWrapper@V_lambda_9381c80c14e95fe77b42b1.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask<_lambda_9381c80c14e95fe77b42b10959c65c30_>(
        __int64 a1,
        __int64 *a2)
{
  void *v3; // rax
  __int64 v4; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi
  void *v8; // [rsp+50h] [rbp+18h] BYREF

  v3 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v3;
  v4 = 0LL;
  if ( v3 )
  {
    v4 = Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_9381c80c14e95fe77b42b10959c65c30_>::CTaskWrapper<_lambda_9381c80c14e95fe77b42b10959c65c30_>(
           (__int64)v3,
           a2);
    v8 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v8);
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(0LL, 0LL, CurrentThreadId, 0LL, v4, 0LL);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v6;
}
