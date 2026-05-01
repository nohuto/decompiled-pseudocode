/*
 * XREFs of ?__move@?$__func@V_lambda_fe4903290cabe226dd2c56354be2d333_@@$$A6AJK@Z@__function@wistd@@UEAAXPEAV?$__base@$$A6AJK@Z@23@@Z @ 0x1802DBB60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func<_lambda_fe4903290cabe226dd2c56354be2d333_,long (unsigned long)>::__move(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rdx
  __int64 result; // rax

  v2 = (_QWORD *)(a1 + 8);
  *a2 = &wistd::__function::__func<_lambda_a5f94e402445cab957f9d0f02bc81a26_,long (unsigned long)>::`vftable';
  v3 = a2 + 1;
  *v3 = 0LL;
  if ( v3 != v2 )
  {
    *v3 = *v2;
    *v2 = 0LL;
  }
  result = v2[1];
  v3[1] = result;
  return result;
}
