/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7038a910990fc1bfa49a8b972a544a3b___::_scalar_deleting_destructor_ @ 0x180413E60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7038a910990fc1bfa49a8b972a544a3b___::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  HSTRING v4; // rcx

  v4 = (HSTRING)a1[2];
  if ( v4 )
    WindowsDeleteString(v4);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
