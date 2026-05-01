/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_623346ff11720fb1df0604e48f92c4da___::Run @ 0x1803FCB00
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_623346ff11720fb1df0604e48f92c4da_::operator() @ 0x1803FC28C (_lambda_623346ff11720fb1df0604e48f92c4da_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_623346ff11720fb1df0604e48f92c4da___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_623346ff11720fb1df0604e48f92c4da_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
