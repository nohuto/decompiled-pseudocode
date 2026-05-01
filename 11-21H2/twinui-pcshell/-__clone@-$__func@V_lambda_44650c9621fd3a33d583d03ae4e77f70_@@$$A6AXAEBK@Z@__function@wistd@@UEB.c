/*
 * XREFs of ?__clone@?$__func@V_lambda_44650c9621fd3a33d583d03ae4e77f70_@@$$A6AXAEBK@Z@__function@wistd@@UEBAXPEAV?$__base@$$A6AXAEBK@Z@23@@Z @ 0x1805DE400
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::__function::__func<_lambda_44650c9621fd3a33d583d03ae4e77f70_,void (unsigned long const &)>::__clone(
        __int64 a1,
        _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  *a2 = &wistd::__function::__func<_lambda_44650c9621fd3a33d583d03ae4e77f70_,void (unsigned long const &)>::`vftable';
  result = *(_QWORD *)(a1 + 8);
  a2[1] = result;
  v3 = *(_QWORD *)(a1 + 16);
  a2[2] = v3;
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return result;
}
