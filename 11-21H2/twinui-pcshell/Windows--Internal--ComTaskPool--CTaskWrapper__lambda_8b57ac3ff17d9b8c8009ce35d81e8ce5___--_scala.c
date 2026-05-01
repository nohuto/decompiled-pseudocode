/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5___::_scalar_deleting_destructor_ @ 0x1801B0EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5___::_CTaskWrapper__lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5___ @ 0x1801AF630 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5___::_CTaskWrapper__lambda_8b57ac3ff17d9b8c8009ce35d81e8ce5___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
