/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_b87eacc4ab1787d6788f730647895d37___::Run @ 0x18040BFF0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_b87eacc4ab1787d6788f730647895d37_::operator() @ 0x180409F58 (_lambda_b87eacc4ab1787d6788f730647895d37_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_b87eacc4ab1787d6788f730647895d37___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_b87eacc4ab1787d6788f730647895d37_::operator()((HSTRING **)(a1 + 16));
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
