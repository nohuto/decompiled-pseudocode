/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ccd2ac028e59279914bb403dae032d43___::Run @ 0x18006EBF0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_ccd2ac028e59279914bb403dae032d43_::operator() @ 0x18006EC18 (_lambda_ccd2ac028e59279914bb403dae032d43_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ccd2ac028e59279914bb403dae032d43___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_ccd2ac028e59279914bb403dae032d43_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
