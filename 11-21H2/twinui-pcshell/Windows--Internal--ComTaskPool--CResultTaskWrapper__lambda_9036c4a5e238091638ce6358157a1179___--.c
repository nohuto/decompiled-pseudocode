/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_9036c4a5e238091638ce6358157a1179___::Run @ 0x1804169B0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_9036c4a5e238091638ce6358157a1179_::operator() @ 0x1804123A4 (_lambda_9036c4a5e238091638ce6358157a1179_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_9036c4a5e238091638ce6358157a1179___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_9036c4a5e238091638ce6358157a1179_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
