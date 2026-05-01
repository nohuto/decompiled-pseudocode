/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_524ccb934e25246a0120727c88ebe67d___::Run @ 0x180402DB0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_524ccb934e25246a0120727c88ebe67d_::operator() @ 0x18040076C (_lambda_524ccb934e25246a0120727c88ebe67d_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_524ccb934e25246a0120727c88ebe67d___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_524ccb934e25246a0120727c88ebe67d_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
