/*
 * XREFs of CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_CleanupTimer @ 0x18051D814
 * Callers:
 *     CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___::_InvokeCallback @ 0x18051DA20 (CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___--_InvokeCallback.c)
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_InvokeCallback @ 0x18051DA54 (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--_InvokeCallback.c)
 *     CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___::s_TimerWndProc @ 0x18051DAB0 (CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___--s_TimerWndProc.c)
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::s_TimerWndProc @ 0x18051DBF0 (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--s_TimerWndProc.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_CleanupTimer(__int64 a1)
{
  HWND v1; // rbx
  BOOL result; // eax

  v1 = *(HWND *)(a1 + 32);
  if ( v1 )
  {
    *(_QWORD *)(a1 + 32) = 0LL;
    KillTimer(v1, 0x64uLL);
    return DestroyWindow(v1);
  }
  return result;
}
