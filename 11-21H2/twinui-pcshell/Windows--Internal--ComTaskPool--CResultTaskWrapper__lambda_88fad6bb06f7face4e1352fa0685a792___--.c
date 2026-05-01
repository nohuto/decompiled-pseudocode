/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_88fad6bb06f7face4e1352fa0685a792___::Run @ 0x18022D900
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_88fad6bb06f7face4e1352fa0685a792_::operator() @ 0x180409A94 (_lambda_88fad6bb06f7face4e1352fa0685a792_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_88fad6bb06f7face4e1352fa0685a792___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_88fad6bb06f7face4e1352fa0685a792_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
