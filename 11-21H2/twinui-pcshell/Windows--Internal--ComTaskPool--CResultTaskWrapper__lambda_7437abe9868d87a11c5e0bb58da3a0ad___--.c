/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_7437abe9868d87a11c5e0bb58da3a0ad___::_scalar_deleting_destructor_ @ 0x18003F630
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_7437abe9868d87a11c5e0bb58da3a0ad___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x20uLL);
  return a1;
}
