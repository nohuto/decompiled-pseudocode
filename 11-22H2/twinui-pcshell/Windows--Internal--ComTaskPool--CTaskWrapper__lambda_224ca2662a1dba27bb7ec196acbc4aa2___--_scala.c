/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_224ca2662a1dba27bb7ec196acbc4aa2___::_scalar_deleting_destructor_ @ 0x1801E9DF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_224ca2662a1dba27bb7ec196acbc4aa2___::_CTaskWrapper__lambda_224ca2662a1dba27bb7ec196acbc4aa2___ @ 0x1801E872C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_224ca2662a1dba27bb7ec196acbc4aa2___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_224ca2662a1dba27bb7ec196acbc4aa2___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_224ca2662a1dba27bb7ec196acbc4aa2___::_CTaskWrapper__lambda_224ca2662a1dba27bb7ec196acbc4aa2___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
