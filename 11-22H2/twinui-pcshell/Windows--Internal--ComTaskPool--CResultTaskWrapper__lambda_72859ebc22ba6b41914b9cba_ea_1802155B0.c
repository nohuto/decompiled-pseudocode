/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_72859ebc22ba6b41914b9cba0f951dda___::_scalar_deleting_destructor_ @ 0x1802155B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_72859ebc22ba6b41914b9cba0f951dda___::_CResultTaskWrapper__lambda_72859ebc22ba6b41914b9cba0f951dda___ @ 0x18021528C (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_72859ebc22ba6b41914b9cba_ea_18021528C.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_72859ebc22ba6b41914b9cba0f951dda___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_72859ebc22ba6b41914b9cba0f951dda___::_CResultTaskWrapper__lambda_72859ebc22ba6b41914b9cba0f951dda___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
