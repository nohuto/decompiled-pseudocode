/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_840f656ae392d3edda757dfeed14128c___::Run @ 0x180402ED0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_840f656ae392d3edda757dfeed14128c_::operator() @ 0x18040116C (_lambda_840f656ae392d3edda757dfeed14128c_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_840f656ae392d3edda757dfeed14128c___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_840f656ae392d3edda757dfeed14128c_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
