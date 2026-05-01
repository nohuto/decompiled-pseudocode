/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_688d58d8ca8a19b32ec0253e00c1168c___::Run @ 0x180416900
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_688d58d8ca8a19b32ec0253e00c1168c_::operator() @ 0x1804121A8 (_lambda_688d58d8ca8a19b32ec0253e00c1168c_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_688d58d8ca8a19b32ec0253e00c1168c___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_688d58d8ca8a19b32ec0253e00c1168c_::operator()((unsigned int **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
