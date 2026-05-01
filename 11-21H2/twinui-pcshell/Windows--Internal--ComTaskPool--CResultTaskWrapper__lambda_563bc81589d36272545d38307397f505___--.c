/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_563bc81589d36272545d38307397f505___::Run @ 0x180091820
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_563bc81589d36272545d38307397f505_::operator() @ 0x180091848 (_lambda_563bc81589d36272545d38307397f505_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_563bc81589d36272545d38307397f505___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_563bc81589d36272545d38307397f505_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
