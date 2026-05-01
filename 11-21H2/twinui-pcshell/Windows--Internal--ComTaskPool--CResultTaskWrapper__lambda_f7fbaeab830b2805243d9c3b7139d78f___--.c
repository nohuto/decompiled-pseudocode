/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f7fbaeab830b2805243d9c3b7139d78f___::Run @ 0x180416C50
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f7fbaeab830b2805243d9c3b7139d78f_::operator() @ 0x180413B58 (_lambda_f7fbaeab830b2805243d9c3b7139d78f_--operator().c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f7fbaeab830b2805243d9c3b7139d78f___::Run(
        __int64 a1)
{
  __int64 result; // rax

  result = lambda_f7fbaeab830b2805243d9c3b7139d78f_::operator()(a1 + 16);
  **(_DWORD **)(a1 + 32) = result;
  return result;
}
