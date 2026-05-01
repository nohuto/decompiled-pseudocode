/*
 * XREFs of CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___::OnBeginBatchUpdate @ 0x18051AB50
 * Callers:
 *     <none>
 * Callees:
 *     CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___::_InitializeTimer @ 0x18051D858 (CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___--_InitializeTimer.c)
 */

__int64 __fastcall CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___::OnBeginBatchUpdate(
        __int64 a1)
{
  int v1; // eax
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 40);
  if ( !v1 )
  {
    *(_DWORD *)(a1 + 28) = 1;
    CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9___::_InitializeTimer();
    v1 = *(_DWORD *)(a1 + 40);
  }
  result = (unsigned int)(v1 + 1);
  *(_DWORD *)(a1 + 40) = result;
  return result;
}
