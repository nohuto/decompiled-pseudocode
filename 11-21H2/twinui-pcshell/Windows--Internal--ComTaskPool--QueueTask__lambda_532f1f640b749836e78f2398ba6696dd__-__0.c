/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_532f1f640b749836e78f2398ba6696dd__&__0 @ 0x1802F2BA8
 * Callers:
 *     ?_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@AEAVCMarshaledInterface@@J@Z @ 0x18003B33C (-_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@AEAVCMarshaledInterface.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_532f1f640b749836e78f2398ba6696dd__&_ @ 0x18003B42C (Windows--Internal--ComTaskPool--WrapWithTask__lambda_532f1f640b749836e78f2398ba6696dd__-_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 Windows::Internal::ComTaskPool::QueueTask__lambda_532f1f640b749836e78f2398ba6696dd_____0()
{
  __int64 v0; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v0 = *Windows::Internal::ComTaskPool::WrapWithTask__lambda_532f1f640b749836e78f2398ba6696dd____(&v5);
  CurrentThreadId = GetCurrentThreadId();
  v2 = SHTaskPoolQueueTask(0LL, 0LL, CurrentThreadId, 0LL, v0, 0LL);
  v3 = v5;
  if ( v5 )
  {
    v5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return v2;
}
