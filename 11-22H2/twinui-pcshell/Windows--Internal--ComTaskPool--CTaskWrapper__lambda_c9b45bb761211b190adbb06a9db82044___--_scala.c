/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c9b45bb761211b190adbb06a9db82044___::_scalar_deleting_destructor_ @ 0x180250540
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1801C7278 (--3@YAXPEAX@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c9b45bb761211b190adbb06a9db82044___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
