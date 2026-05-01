/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_b125c7ae5c5ec46ca3af9b42a20ce061___::Run @ 0x1804EBE10
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_b125c7ae5c5ec46ca3af9b42a20ce061_::operator() @ 0x1804E79D8 (_lambda_b125c7ae5c5ec46ca3af9b42a20ce061_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_b125c7ae5c5ec46ca3af9b42a20ce061___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_b125c7ae5c5ec46ca3af9b42a20ce061_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 40) = result;
  return result;
}
