/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c0abd125640d8caf2efc015e030a0e36___::Run @ 0x1800EBB30
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_c0abd125640d8caf2efc015e030a0e36_::operator() @ 0x1800EBB58 (_lambda_c0abd125640d8caf2efc015e030a0e36_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c0abd125640d8caf2efc015e030a0e36___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_c0abd125640d8caf2efc015e030a0e36_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 48) = result;
  return result;
}
