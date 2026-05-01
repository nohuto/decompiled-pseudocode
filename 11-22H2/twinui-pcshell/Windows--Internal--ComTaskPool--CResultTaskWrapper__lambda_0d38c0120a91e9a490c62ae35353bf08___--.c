/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_0d38c0120a91e9a490c62ae35353bf08___::Run @ 0x1801F97D0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_0d38c0120a91e9a490c62ae35353bf08_::operator() @ 0x1801F7984 (_lambda_0d38c0120a91e9a490c62ae35353bf08_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_0d38c0120a91e9a490c62ae35353bf08___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_0d38c0120a91e9a490c62ae35353bf08_::operator()((int **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
