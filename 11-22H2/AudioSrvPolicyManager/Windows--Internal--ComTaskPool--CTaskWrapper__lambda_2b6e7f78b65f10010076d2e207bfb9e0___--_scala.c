/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2b6e7f78b65f10010076d2e207bfb9e0___::_scalar_deleting_destructor_ @ 0x1800257B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180016E18 (--3@YAXPEAX_K@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2b6e7f78b65f10010076d2e207bfb9e0___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
