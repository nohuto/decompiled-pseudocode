/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f03fbe1e409519c33ffd389fa0e0619f___::Run @ 0x180215900
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f03fbe1e409519c33ffd389fa0e0619f_::operator() @ 0x1802154A8 (_lambda_f03fbe1e409519c33ffd389fa0e0619f_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f03fbe1e409519c33ffd389fa0e0619f___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_f03fbe1e409519c33ffd389fa0e0619f_::operator()((void ***)(a1 + 16));
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
