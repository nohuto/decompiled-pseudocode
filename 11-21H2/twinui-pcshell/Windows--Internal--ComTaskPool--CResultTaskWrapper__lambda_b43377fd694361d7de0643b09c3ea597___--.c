/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_b43377fd694361d7de0643b09c3ea597___::Run @ 0x180416AA0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_b43377fd694361d7de0643b09c3ea597_::operator() @ 0x180412818 (_lambda_b43377fd694361d7de0643b09c3ea597_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_b43377fd694361d7de0643b09c3ea597___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_b43377fd694361d7de0643b09c3ea597_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
