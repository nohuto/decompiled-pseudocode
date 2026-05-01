/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8979e37c58b8dc799945db356f5e6b48___::Run @ 0x180026590
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_8979e37c58b8dc799945db356f5e6b48_::operator() @ 0x1800265B8 (_lambda_8979e37c58b8dc799945db356f5e6b48_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8979e37c58b8dc799945db356f5e6b48___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_8979e37c58b8dc799945db356f5e6b48_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
