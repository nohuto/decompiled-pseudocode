/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0190d4b48233ee3d7e5c167dfa5e03d8___::_scalar_deleting_destructor_ @ 0x1801E9DB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0190d4b48233ee3d7e5c167dfa5e03d8___::_CTaskWrapper__lambda_0190d4b48233ee3d7e5c167dfa5e03d8___ @ 0x1801E8704 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0190d4b48233ee3d7e5c167dfa5e03d8___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0190d4b48233ee3d7e5c167dfa5e03d8___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0190d4b48233ee3d7e5c167dfa5e03d8___::_CTaskWrapper__lambda_0190d4b48233ee3d7e5c167dfa5e03d8___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
