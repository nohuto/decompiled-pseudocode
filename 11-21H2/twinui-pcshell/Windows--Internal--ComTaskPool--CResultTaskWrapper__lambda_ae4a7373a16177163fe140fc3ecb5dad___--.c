/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ae4a7373a16177163fe140fc3ecb5dad___::Run @ 0x180140920
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_ae4a7373a16177163fe140fc3ecb5dad_::operator() @ 0x180140948 (_lambda_ae4a7373a16177163fe140fc3ecb5dad_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ae4a7373a16177163fe140fc3ecb5dad___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_ae4a7373a16177163fe140fc3ecb5dad_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
