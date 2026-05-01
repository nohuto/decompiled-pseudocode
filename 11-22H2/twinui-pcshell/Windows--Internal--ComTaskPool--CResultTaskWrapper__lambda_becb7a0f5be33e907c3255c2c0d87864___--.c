/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_becb7a0f5be33e907c3255c2c0d87864___::Run @ 0x1804EBF00
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_becb7a0f5be33e907c3255c2c0d87864_::operator() @ 0x1804E7E90 (_lambda_becb7a0f5be33e907c3255c2c0d87864_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_becb7a0f5be33e907c3255c2c0d87864___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_becb7a0f5be33e907c3255c2c0d87864_::operator()((unsigned int **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
