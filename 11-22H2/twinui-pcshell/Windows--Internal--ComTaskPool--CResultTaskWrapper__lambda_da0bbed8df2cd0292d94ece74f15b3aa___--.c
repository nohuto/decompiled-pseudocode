/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_da0bbed8df2cd0292d94ece74f15b3aa___::Run @ 0x1804EC020
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_da0bbed8df2cd0292d94ece74f15b3aa_::operator() @ 0x1804E858C (_lambda_da0bbed8df2cd0292d94ece74f15b3aa_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_da0bbed8df2cd0292d94ece74f15b3aa___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_da0bbed8df2cd0292d94ece74f15b3aa_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
