/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ffe5abdc96bff0e72534bc001af731ee___::Run @ 0x1804EC110
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_ffe5abdc96bff0e72534bc001af731ee_::operator() @ 0x1804E8DB0 (_lambda_ffe5abdc96bff0e72534bc001af731ee_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ffe5abdc96bff0e72534bc001af731ee___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_ffe5abdc96bff0e72534bc001af731ee_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
