/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c2e383000fb9a79ec8225e5d53436605___::Run @ 0x1800C3440
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_c2e383000fb9a79ec8225e5d53436605_::operator() @ 0x1800C3468 (_lambda_c2e383000fb9a79ec8225e5d53436605_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c2e383000fb9a79ec8225e5d53436605___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_c2e383000fb9a79ec8225e5d53436605_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
