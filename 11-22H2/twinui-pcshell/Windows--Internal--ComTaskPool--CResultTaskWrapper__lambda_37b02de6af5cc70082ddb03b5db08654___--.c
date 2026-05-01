/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_37b02de6af5cc70082ddb03b5db08654___::Run @ 0x18008E4A0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_37b02de6af5cc70082ddb03b5db08654_::operator() @ 0x18008E79C (_lambda_37b02de6af5cc70082ddb03b5db08654_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_37b02de6af5cc70082ddb03b5db08654___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_37b02de6af5cc70082ddb03b5db08654_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
