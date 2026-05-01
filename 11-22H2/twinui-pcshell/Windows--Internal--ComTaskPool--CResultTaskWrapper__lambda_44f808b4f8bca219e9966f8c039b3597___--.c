/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_44f808b4f8bca219e9966f8c039b3597___::Run @ 0x1804EBB10
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_44f808b4f8bca219e9966f8c039b3597_::operator() @ 0x1804E651C (_lambda_44f808b4f8bca219e9966f8c039b3597_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_44f808b4f8bca219e9966f8c039b3597___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_44f808b4f8bca219e9966f8c039b3597_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
