/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f4067639e63611d5d8388fe1412d05ee___::_scalar_deleting_destructor_ @ 0x1804BC1A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _lambda_f4067639e63611d5d8388fe1412d05ee_::__lambda_f4067639e63611d5d8388fe1412d05ee_ @ 0x1804BBFAC (_lambda_f4067639e63611d5d8388fe1412d05ee_--__lambda_f4067639e63611d5d8388fe1412d05ee_.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f4067639e63611d5d8388fe1412d05ee___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  lambda_f4067639e63611d5d8388fe1412d05ee_::__lambda_f4067639e63611d5d8388fe1412d05ee_((__int64)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
