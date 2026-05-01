/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_66cb15f8422cbf2e3f8eb7fe6565be68___::Run @ 0x1801F50A0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_66cb15f8422cbf2e3f8eb7fe6565be68_::operator() @ 0x1801F4C3C (_lambda_66cb15f8422cbf2e3f8eb7fe6565be68_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_66cb15f8422cbf2e3f8eb7fe6565be68___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_66cb15f8422cbf2e3f8eb7fe6565be68_::operator()((RTL_SRWLOCK **)(a1 + 16));
  **(_DWORD **)(a1 + 56) = result;
  return result;
}
