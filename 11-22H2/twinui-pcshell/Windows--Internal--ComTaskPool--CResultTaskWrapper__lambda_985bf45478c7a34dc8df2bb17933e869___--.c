/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_985bf45478c7a34dc8df2bb17933e869___::Run @ 0x1801F98C0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_985bf45478c7a34dc8df2bb17933e869_::operator() @ 0x1801F8070 (_lambda_985bf45478c7a34dc8df2bb17933e869_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_985bf45478c7a34dc8df2bb17933e869___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_985bf45478c7a34dc8df2bb17933e869_::operator()((_DWORD **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
