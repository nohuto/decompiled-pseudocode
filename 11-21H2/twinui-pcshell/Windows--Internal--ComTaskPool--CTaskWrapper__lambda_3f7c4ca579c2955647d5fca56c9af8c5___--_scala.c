/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3f7c4ca579c2955647d5fca56c9af8c5___::_scalar_deleting_destructor_ @ 0x1801B0D60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3f7c4ca579c2955647d5fca56c9af8c5___::_CTaskWrapper__lambda_3f7c4ca579c2955647d5fca56c9af8c5___ @ 0x1801AF568 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3f7c4ca579c2955647d5fca56c9af8c5___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3f7c4ca579c2955647d5fca56c9af8c5___::_scalar_deleting_destructor_(
        void *a1,
        __int64 a2)
{
  char v2; // bl

  v2 = a2;
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3f7c4ca579c2955647d5fca56c9af8c5___::_CTaskWrapper__lambda_3f7c4ca579c2955647d5fca56c9af8c5___(
    (__int64)a1,
    a2);
  if ( (v2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
