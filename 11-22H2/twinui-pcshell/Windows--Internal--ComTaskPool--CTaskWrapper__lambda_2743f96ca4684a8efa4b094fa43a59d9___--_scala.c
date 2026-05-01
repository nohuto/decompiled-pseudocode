/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2743f96ca4684a8efa4b094fa43a59d9___::_scalar_deleting_destructor_ @ 0x18046F560
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2743f96ca4684a8efa4b094fa43a59d9___::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  void *v4; // rcx

  v4 = (void *)a1[3];
  if ( v4 )
    DeleteObject(v4);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
