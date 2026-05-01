/*
 * XREFs of ?__move@?$__func@V_lambda_44650c9621fd3a33d583d03ae4e77f70_@@$$A6AXAEBK@Z@__function@wistd@@UEAAXPEAV?$__base@$$A6AXAEBK@Z@23@@Z @ 0x1800B4AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func<_lambda_44650c9621fd3a33d583d03ae4e77f70_,void (unsigned long const &)>::__move(
        __int64 a1,
        _QWORD *a2)
{
  __int64 result; // rax

  *a2 = &wistd::__function::__func<_lambda_44650c9621fd3a33d583d03ae4e77f70_,void (unsigned long const &)>::`vftable';
  a2[1] = *(_QWORD *)(a1 + 8);
  result = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0LL;
  a2[2] = result;
  return result;
}
