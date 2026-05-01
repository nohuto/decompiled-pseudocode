/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_84e71e2e81db79e3b2608076f55d11fc___::Run @ 0x18015DEA0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_84e71e2e81db79e3b2608076f55d11fc_::operator() @ 0x18015DEC8 (_lambda_84e71e2e81db79e3b2608076f55d11fc_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_84e71e2e81db79e3b2608076f55d11fc___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_84e71e2e81db79e3b2608076f55d11fc_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
