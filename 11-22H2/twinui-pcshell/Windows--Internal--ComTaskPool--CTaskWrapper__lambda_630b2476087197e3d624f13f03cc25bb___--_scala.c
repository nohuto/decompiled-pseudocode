/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_630b2476087197e3d624f13f03cc25bb___::_scalar_deleting_destructor_ @ 0x180466B70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _lambda_630b2476087197e3d624f13f03cc25bb_::__lambda_630b2476087197e3d624f13f03cc25bb_ @ 0x1804661E4 (_lambda_630b2476087197e3d624f13f03cc25bb_--__lambda_630b2476087197e3d624f13f03cc25bb_.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_630b2476087197e3d624f13f03cc25bb___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  lambda_630b2476087197e3d624f13f03cc25bb_::__lambda_630b2476087197e3d624f13f03cc25bb_((__int64)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
