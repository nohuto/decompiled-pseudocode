/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_e1da1a01acfdad050dadd380e5e9c153___::Run @ 0x180406200
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_e1da1a01acfdad050dadd380e5e9c153_::operator() @ 0x1804059D8 (_lambda_e1da1a01acfdad050dadd380e5e9c153_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_e1da1a01acfdad050dadd380e5e9c153___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_e1da1a01acfdad050dadd380e5e9c153_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 24) = result;
  return result;
}
