/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_df63320a6d871c5f12e93efd4306f626___::Run @ 0x1804EC080
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_df63320a6d871c5f12e93efd4306f626_::operator() @ 0x1804E87E8 (_lambda_df63320a6d871c5f12e93efd4306f626_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_df63320a6d871c5f12e93efd4306f626___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_df63320a6d871c5f12e93efd4306f626_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
