/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_94dab6f462a57900563ee3a883074015___::Run @ 0x1804F1900
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_94dab6f462a57900563ee3a883074015_::operator() @ 0x1804F08F4 (_lambda_94dab6f462a57900563ee3a883074015_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_94dab6f462a57900563ee3a883074015___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_94dab6f462a57900563ee3a883074015_::operator()((_QWORD **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
