/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_9e758cdcb61e8985816640c79758b5b6___::Run @ 0x18008F430
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_9e758cdcb61e8985816640c79758b5b6_::operator() @ 0x18008F458 (_lambda_9e758cdcb61e8985816640c79758b5b6_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_9e758cdcb61e8985816640c79758b5b6___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_9e758cdcb61e8985816640c79758b5b6_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
