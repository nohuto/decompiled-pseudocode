/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_64e43acfcaac90edb13840faf2b625e2___::Run @ 0x1804168D0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_64e43acfcaac90edb13840faf2b625e2_::operator() @ 0x1804120C0 (_lambda_64e43acfcaac90edb13840faf2b625e2_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_64e43acfcaac90edb13840faf2b625e2___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_64e43acfcaac90edb13840faf2b625e2_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
