/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0___::_scalar_deleting_destructor_ @ 0x1801B0F20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0___::_CTaskWrapper__lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0___ @ 0x1801AF680 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0___::_CTaskWrapper__lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
