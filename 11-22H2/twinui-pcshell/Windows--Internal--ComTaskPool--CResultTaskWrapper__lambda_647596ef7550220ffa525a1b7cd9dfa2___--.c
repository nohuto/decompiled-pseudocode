/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_647596ef7550220ffa525a1b7cd9dfa2___::Run @ 0x1804F18D0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_647596ef7550220ffa525a1b7cd9dfa2_::operator() @ 0x1804F05B0 (_lambda_647596ef7550220ffa525a1b7cd9dfa2_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_647596ef7550220ffa525a1b7cd9dfa2___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_647596ef7550220ffa525a1b7cd9dfa2_::operator()((__int64 **)(a1 + 16));
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
