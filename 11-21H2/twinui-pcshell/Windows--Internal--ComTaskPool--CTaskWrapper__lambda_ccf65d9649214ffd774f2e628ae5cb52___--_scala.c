/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ccf65d9649214ffd774f2e628ae5cb52___::_scalar_deleting_destructor_ @ 0x18019D550
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ccf65d9649214ffd774f2e628ae5cb52___::_CTaskWrapper__lambda_ccf65d9649214ffd774f2e628ae5cb52___ @ 0x18019BACC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ccf65d9649214ffd774f2e628ae5cb52___--_CTask.c)
 */

void *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ccf65d9649214ffd774f2e628ae5cb52___::_scalar_deleting_destructor_(
        void *a1,
        char a2)
{
  Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ccf65d9649214ffd774f2e628ae5cb52___::_CTaskWrapper__lambda_ccf65d9649214ffd774f2e628ae5cb52___((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
