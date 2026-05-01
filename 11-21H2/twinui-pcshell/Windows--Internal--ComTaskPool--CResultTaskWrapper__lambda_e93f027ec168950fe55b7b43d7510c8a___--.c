/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_e93f027ec168950fe55b7b43d7510c8a___::Run @ 0x180403300
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_e93f027ec168950fe55b7b43d7510c8a_::operator() @ 0x180401DBC (_lambda_e93f027ec168950fe55b7b43d7510c8a_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_e93f027ec168950fe55b7b43d7510c8a___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_e93f027ec168950fe55b7b43d7510c8a_::operator()((unsigned int **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
