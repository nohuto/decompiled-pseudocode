/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a00d55ff410bf82805a832e2975dd292___::Run @ 0x18003CD30
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_a00d55ff410bf82805a832e2975dd292_::operator() @ 0x18003CD58 (_lambda_a00d55ff410bf82805a832e2975dd292_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a00d55ff410bf82805a832e2975dd292___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_a00d55ff410bf82805a832e2975dd292_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
