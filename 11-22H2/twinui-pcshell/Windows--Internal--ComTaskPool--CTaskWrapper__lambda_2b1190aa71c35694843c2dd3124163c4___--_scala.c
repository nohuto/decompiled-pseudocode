/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2b1190aa71c35694843c2dd3124163c4___::_scalar_deleting_destructor_ @ 0x1801E9E30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2b1190aa71c35694843c2dd3124163c4___::_CTaskWrapper__lambda_2b1190aa71c35694843c2dd3124163c4___ @ 0x1801E8754 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2b1190aa71c35694843c2dd3124163c4___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2b1190aa71c35694843c2dd3124163c4___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2b1190aa71c35694843c2dd3124163c4___::_CTaskWrapper__lambda_2b1190aa71c35694843c2dd3124163c4___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
