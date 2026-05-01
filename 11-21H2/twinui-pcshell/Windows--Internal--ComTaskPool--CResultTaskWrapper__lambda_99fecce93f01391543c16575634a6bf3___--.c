/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_99fecce93f01391543c16575634a6bf3___::Run @ 0x1803FAA10
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_99fecce93f01391543c16575634a6bf3_::operator() @ 0x1803F9EF8 (_lambda_99fecce93f01391543c16575634a6bf3_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_99fecce93f01391543c16575634a6bf3___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_99fecce93f01391543c16575634a6bf3_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
