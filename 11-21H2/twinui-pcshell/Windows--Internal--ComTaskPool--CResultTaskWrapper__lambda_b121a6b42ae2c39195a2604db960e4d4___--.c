/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_b121a6b42ae2c39195a2604db960e4d4___::Run @ 0x18040BFC0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_b121a6b42ae2c39195a2604db960e4d4_::operator() @ 0x180409E80 (_lambda_b121a6b42ae2c39195a2604db960e4d4_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_b121a6b42ae2c39195a2604db960e4d4___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_b121a6b42ae2c39195a2604db960e4d4_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
