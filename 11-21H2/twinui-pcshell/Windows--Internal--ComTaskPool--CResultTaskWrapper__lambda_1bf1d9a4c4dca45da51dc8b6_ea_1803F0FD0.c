/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_1bf1d9a4c4dca45da51dc8b6becb9b00___::Run @ 0x1803F0FD0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_1bf1d9a4c4dca45da51dc8b6becb9b00_::operator() @ 0x1803EAC54 (_lambda_1bf1d9a4c4dca45da51dc8b6becb9b00_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_1bf1d9a4c4dca45da51dc8b6becb9b00___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_1bf1d9a4c4dca45da51dc8b6becb9b00_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 56) = result;
  return result;
}
