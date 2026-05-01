/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6808b338f89be0d2d60c00a970e053ed__&_::_scalar_deleting_destructor_ @ 0x1800357B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6808b338f89be0d2d60c00a970e053ed____::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x18uLL);
  return a1;
}
