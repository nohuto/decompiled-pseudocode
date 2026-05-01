/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_3b41c4f33ad0fdc6aff0256cda85c716___::Run @ 0x1804EBAE0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_3b41c4f33ad0fdc6aff0256cda85c716_::operator() @ 0x1804E63CC (_lambda_3b41c4f33ad0fdc6aff0256cda85c716_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_3b41c4f33ad0fdc6aff0256cda85c716___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_3b41c4f33ad0fdc6aff0256cda85c716_::operator()((__int64 *)(a1 + 16));
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
