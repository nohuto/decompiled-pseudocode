/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_21b91f8ed7e4c7f4d9826ebf89a77415___::_scalar_deleting_destructor_ @ 0x1800A21B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_21b91f8ed7e4c7f4d9826ebf89a77415___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
