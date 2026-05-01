/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f64966f8cf2f955615770413beca1be5___::Run @ 0x18014E9B0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f64966f8cf2f955615770413beca1be5_::operator() @ 0x18014E9D8 (_lambda_f64966f8cf2f955615770413beca1be5_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f64966f8cf2f955615770413beca1be5___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_f64966f8cf2f955615770413beca1be5_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
