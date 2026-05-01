/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_31c7893660c14ce258f6c87fb5d11c82___::_scalar_deleting_destructor_ @ 0x180209050
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_31c7893660c14ce258f6c87fb5d11c82___::_CTaskWrapper__lambda_31c7893660c14ce258f6c87fb5d11c82___ @ 0x180206870 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_31c7893660c14ce258f6c87fb5d11c82___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_31c7893660c14ce258f6c87fb5d11c82___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_31c7893660c14ce258f6c87fb5d11c82___::_CTaskWrapper__lambda_31c7893660c14ce258f6c87fb5d11c82___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
