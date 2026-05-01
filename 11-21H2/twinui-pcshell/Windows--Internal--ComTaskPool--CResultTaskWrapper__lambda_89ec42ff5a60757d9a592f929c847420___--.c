/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_89ec42ff5a60757d9a592f929c847420___::Run @ 0x180031A00
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_89ec42ff5a60757d9a592f929c847420_::operator() @ 0x180031A28 (_lambda_89ec42ff5a60757d9a592f929c847420_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_89ec42ff5a60757d9a592f929c847420___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_89ec42ff5a60757d9a592f929c847420_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
