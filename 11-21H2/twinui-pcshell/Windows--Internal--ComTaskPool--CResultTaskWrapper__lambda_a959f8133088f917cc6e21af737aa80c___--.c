/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a959f8133088f917cc6e21af737aa80c___::Run @ 0x180402F80
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_a959f8133088f917cc6e21af737aa80c_::operator() @ 0x180401454 (_lambda_a959f8133088f917cc6e21af737aa80c_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a959f8133088f917cc6e21af737aa80c___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_a959f8133088f917cc6e21af737aa80c_::operator()((__int64 **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
