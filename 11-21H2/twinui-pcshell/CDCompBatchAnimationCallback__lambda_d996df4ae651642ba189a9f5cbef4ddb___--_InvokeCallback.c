/*
 * XREFs of CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_InvokeCallback @ 0x18051DA54
 * Callers:
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::OnAnimationCompleted @ 0x18051AB20 (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--OnAnimationCompleted.c)
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::OnEndBatchUpdate @ 0x18051AC60 (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--OnEndBatchUpdate.c)
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::s_TimerWndProc @ 0x18051DBF0 (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--s_TimerWndProc.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_1a08449ab0a2814bb2af7204eecc9930___ @ 0x180517C8C (Windows--Internal--ComTaskPool--QueueTask__lambda_1a08449ab0a2814bb2af7204eecc9930___.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x18051A854 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_CleanupTimer @ 0x18051D814 (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--_CleanupTimer.c)
 */

BOOL __fastcall CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_InvokeCallback(
        __int64 a1,
        volatile int *a2)
{
  __int64 v3; // rcx
  BOOL result; // eax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 28) != 3 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v5 = v3;
    if ( v3 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v3 + 68), a2);
    Windows::Internal::ComTaskPool::QueueTask__lambda_1a08449ab0a2814bb2af7204eecc9930___(v3, &v5);
    Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(&v5);
    *(_DWORD *)(a1 + 28) = 3;
    return CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_CleanupTimer(a1);
  }
  return result;
}
