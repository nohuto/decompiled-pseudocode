/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c2870fc2bbbcd9c3fea660bc0e31ba86___::Run @ 0x1804EBF30
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_c2870fc2bbbcd9c3fea660bc0e31ba86_::operator() @ 0x1804E7F58 (_lambda_c2870fc2bbbcd9c3fea660bc0e31ba86_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c2870fc2bbbcd9c3fea660bc0e31ba86___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_c2870fc2bbbcd9c3fea660bc0e31ba86_::operator()((unsigned int **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
