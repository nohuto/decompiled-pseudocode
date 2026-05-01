/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_41fdec79629b933043b6dd44cc33a98f___::_scalar_deleting_destructor_ @ 0x1801B0DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_41fdec79629b933043b6dd44cc33a98f___::_CTaskWrapper__lambda_41fdec79629b933043b6dd44cc33a98f___ @ 0x1801AF590 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_41fdec79629b933043b6dd44cc33a98f___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_41fdec79629b933043b6dd44cc33a98f___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_41fdec79629b933043b6dd44cc33a98f___::_CTaskWrapper__lambda_41fdec79629b933043b6dd44cc33a98f___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
