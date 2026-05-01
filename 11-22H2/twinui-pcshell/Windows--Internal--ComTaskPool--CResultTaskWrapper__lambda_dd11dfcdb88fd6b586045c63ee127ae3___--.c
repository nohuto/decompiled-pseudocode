/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_dd11dfcdb88fd6b586045c63ee127ae3___::Run @ 0x1801F9AF0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_dd11dfcdb88fd6b586045c63ee127ae3_::operator() @ 0x1801F8D44 (_lambda_dd11dfcdb88fd6b586045c63ee127ae3_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_dd11dfcdb88fd6b586045c63ee127ae3___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_dd11dfcdb88fd6b586045c63ee127ae3_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
