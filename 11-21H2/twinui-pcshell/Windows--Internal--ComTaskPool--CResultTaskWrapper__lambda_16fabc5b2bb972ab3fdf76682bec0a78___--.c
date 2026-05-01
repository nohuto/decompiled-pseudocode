/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_16fabc5b2bb972ab3fdf76682bec0a78___::Run @ 0x18012F670
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_16fabc5b2bb972ab3fdf76682bec0a78_::operator() @ 0x18012F698 (_lambda_16fabc5b2bb972ab3fdf76682bec0a78_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_16fabc5b2bb972ab3fdf76682bec0a78___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_16fabc5b2bb972ab3fdf76682bec0a78_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
