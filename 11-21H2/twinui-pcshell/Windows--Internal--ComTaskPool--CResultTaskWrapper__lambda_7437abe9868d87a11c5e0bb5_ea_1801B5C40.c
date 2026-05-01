/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_7437abe9868d87a11c5e0bb58da3a0ad___::Run @ 0x1801B5C40
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_7437abe9868d87a11c5e0bb58da3a0ad_::operator() @ 0x1801B5730 (_lambda_7437abe9868d87a11c5e0bb58da3a0ad_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_7437abe9868d87a11c5e0bb58da3a0ad___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_7437abe9868d87a11c5e0bb58da3a0ad_::operator()((void ***)(a1 + 16));
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
