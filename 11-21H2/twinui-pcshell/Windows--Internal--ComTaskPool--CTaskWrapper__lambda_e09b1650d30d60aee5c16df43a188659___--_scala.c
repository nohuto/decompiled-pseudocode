/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e09b1650d30d60aee5c16df43a188659___::_scalar_deleting_destructor_ @ 0x18019D590
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e09b1650d30d60aee5c16df43a188659___::_CTaskWrapper__lambda_e09b1650d30d60aee5c16df43a188659___ @ 0x18019BAF4 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e09b1650d30d60aee5c16df43a188659___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e09b1650d30d60aee5c16df43a188659___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e09b1650d30d60aee5c16df43a188659___::_CTaskWrapper__lambda_e09b1650d30d60aee5c16df43a188659___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
