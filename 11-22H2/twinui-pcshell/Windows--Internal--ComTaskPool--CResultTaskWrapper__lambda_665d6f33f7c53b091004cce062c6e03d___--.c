/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_665d6f33f7c53b091004cce062c6e03d___::Run @ 0x180131780
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_665d6f33f7c53b091004cce062c6e03d_::operator() @ 0x1801317A8 (_lambda_665d6f33f7c53b091004cce062c6e03d_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_665d6f33f7c53b091004cce062c6e03d___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_665d6f33f7c53b091004cce062c6e03d_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
