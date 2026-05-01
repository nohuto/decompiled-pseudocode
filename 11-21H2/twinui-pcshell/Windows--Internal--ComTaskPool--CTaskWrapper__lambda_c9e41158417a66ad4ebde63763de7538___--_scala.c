/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c9e41158417a66ad4ebde63763de7538___::_scalar_deleting_destructor_ @ 0x1801948E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c9e41158417a66ad4ebde63763de7538___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
