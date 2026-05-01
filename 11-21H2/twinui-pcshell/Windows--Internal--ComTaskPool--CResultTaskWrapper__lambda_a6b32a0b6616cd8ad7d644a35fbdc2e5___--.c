/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a6b32a0b6616cd8ad7d644a35fbdc2e5___::Run @ 0x180416A10
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_a6b32a0b6616cd8ad7d644a35fbdc2e5_::operator() @ 0x1804125E0 (_lambda_a6b32a0b6616cd8ad7d644a35fbdc2e5_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a6b32a0b6616cd8ad7d644a35fbdc2e5___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_a6b32a0b6616cd8ad7d644a35fbdc2e5_::operator()();
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
