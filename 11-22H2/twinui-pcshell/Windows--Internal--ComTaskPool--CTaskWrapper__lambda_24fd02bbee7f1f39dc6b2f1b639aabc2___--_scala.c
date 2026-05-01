/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_24fd02bbee7f1f39dc6b2f1b639aabc2___::_scalar_deleting_destructor_ @ 0x180208FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_24fd02bbee7f1f39dc6b2f1b639aabc2___::_CTaskWrapper__lambda_24fd02bbee7f1f39dc6b2f1b639aabc2___ @ 0x180206820 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_24fd02bbee7f1f39dc6b2f1b639aabc2___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_24fd02bbee7f1f39dc6b2f1b639aabc2___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_24fd02bbee7f1f39dc6b2f1b639aabc2___::_CTaskWrapper__lambda_24fd02bbee7f1f39dc6b2f1b639aabc2___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
