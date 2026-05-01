/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d2a465ae199f4521f0e17712fd5e9c58___::Run @ 0x180403060
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_d2a465ae199f4521f0e17712fd5e9c58_::operator() @ 0x180401B68 (_lambda_d2a465ae199f4521f0e17712fd5e9c58_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_d2a465ae199f4521f0e17712fd5e9c58___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_d2a465ae199f4521f0e17712fd5e9c58_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
