/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_259a1410ba958232e2f70f54c5d031d1___::_scalar_deleting_destructor_ @ 0x180209010
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_259a1410ba958232e2f70f54c5d031d1___::_CTaskWrapper__lambda_259a1410ba958232e2f70f54c5d031d1___ @ 0x180206848 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_259a1410ba958232e2f70f54c5d031d1___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_259a1410ba958232e2f70f54c5d031d1___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_259a1410ba958232e2f70f54c5d031d1___::_CTaskWrapper__lambda_259a1410ba958232e2f70f54c5d031d1___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
