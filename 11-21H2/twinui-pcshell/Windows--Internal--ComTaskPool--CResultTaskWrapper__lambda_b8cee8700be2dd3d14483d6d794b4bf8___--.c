/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_b8cee8700be2dd3d14483d6d794b4bf8___::Run @ 0x180416AD0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_b8cee8700be2dd3d14483d6d794b4bf8_::operator() @ 0x180412B34 (_lambda_b8cee8700be2dd3d14483d6d794b4bf8_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_b8cee8700be2dd3d14483d6d794b4bf8___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_b8cee8700be2dd3d14483d6d794b4bf8_::operator()((unsigned int **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
