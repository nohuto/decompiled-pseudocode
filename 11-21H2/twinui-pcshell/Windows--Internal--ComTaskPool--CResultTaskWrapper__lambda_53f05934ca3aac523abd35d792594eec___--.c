/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_53f05934ca3aac523abd35d792594eec___::Run @ 0x1804167B0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_53f05934ca3aac523abd35d792594eec_::operator() @ 0x180411C60 (_lambda_53f05934ca3aac523abd35d792594eec_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_53f05934ca3aac523abd35d792594eec___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_53f05934ca3aac523abd35d792594eec_::operator()((__int64 **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
