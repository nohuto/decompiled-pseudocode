/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_955eb04c377e45185ef03ddb06152220___::_scalar_deleting_destructor_ @ 0x1801B5950
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_955eb04c377e45185ef03ddb06152220___::_CResultTaskWrapper__lambda_955eb04c377e45185ef03ddb06152220___ @ 0x1801B5520 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_955eb04c377e45185ef03ddb_ea_1801B5520.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_955eb04c377e45185ef03ddb06152220___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_955eb04c377e45185ef03ddb06152220___::_CResultTaskWrapper__lambda_955eb04c377e45185ef03ddb06152220___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
