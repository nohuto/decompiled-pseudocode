/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ae72453a80e0b268a47ed1149351e7af___::Run @ 0x180416A70
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_ae72453a80e0b268a47ed1149351e7af_::operator() @ 0x180412714 (_lambda_ae72453a80e0b268a47ed1149351e7af_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ae72453a80e0b268a47ed1149351e7af___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_ae72453a80e0b268a47ed1149351e7af_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
