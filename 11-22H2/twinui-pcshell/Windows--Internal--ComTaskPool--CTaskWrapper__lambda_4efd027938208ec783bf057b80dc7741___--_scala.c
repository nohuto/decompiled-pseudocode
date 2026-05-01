/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4efd027938208ec783bf057b80dc7741___::_scalar_deleting_destructor_ @ 0x1802090D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ca8ece6d0ba6e230db3589fff51d060c___::_CTaskWrapper__lambda_ca8ece6d0ba6e230db3589fff51d060c___ @ 0x1802068C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ca8ece6d0ba6e230db3589fff51d060c___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4efd027938208ec783bf057b80dc7741___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ca8ece6d0ba6e230db3589fff51d060c___::_CTaskWrapper__lambda_ca8ece6d0ba6e230db3589fff51d060c___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
