/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_6398c5b1b1e1150af4a78b6929f9eccb___::Run @ 0x1804168A0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_6398c5b1b1e1150af4a78b6929f9eccb_::operator() @ 0x18041206C (_lambda_6398c5b1b1e1150af4a78b6929f9eccb_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_6398c5b1b1e1150af4a78b6929f9eccb___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_6398c5b1b1e1150af4a78b6929f9eccb_::operator()();
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
