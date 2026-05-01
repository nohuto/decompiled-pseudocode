/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a38aae5e6c9958ce849327ccd84fd2a2___::Run @ 0x180139500
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_a38aae5e6c9958ce849327ccd84fd2a2_::operator() @ 0x180139528 (_lambda_a38aae5e6c9958ce849327ccd84fd2a2_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a38aae5e6c9958ce849327ccd84fd2a2___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_a38aae5e6c9958ce849327ccd84fd2a2_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 48) = result;
  return result;
}
