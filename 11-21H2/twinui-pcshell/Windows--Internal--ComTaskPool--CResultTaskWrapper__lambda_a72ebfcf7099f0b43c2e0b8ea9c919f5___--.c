/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a72ebfcf7099f0b43c2e0b8ea9c919f5___::Run @ 0x180416A40
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_a72ebfcf7099f0b43c2e0b8ea9c919f5_::operator() @ 0x18041263C (_lambda_a72ebfcf7099f0b43c2e0b8ea9c919f5_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a72ebfcf7099f0b43c2e0b8ea9c919f5___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_a72ebfcf7099f0b43c2e0b8ea9c919f5_::operator()((_DWORD **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
