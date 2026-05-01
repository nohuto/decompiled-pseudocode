/*
 * XREFs of ?__clone@?$__func@V_lambda_41d7e8060d889ab0d3c40b4ab78c75ee_@@$$A6AJI_K_J@Z@__function@wistd@@UEBAXPEAV?$__base@$$A6AJI_K_J@Z@23@@Z @ 0x18038FF90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::__function::__func<_lambda_41d7e8060d889ab0d3c40b4ab78c75ee_,long (unsigned int,unsigned __int64,__int64)>::__clone(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  *(_QWORD *)a2 = &wistd::__function::__func<_lambda_c45c73327a5ad8f0fa2ab1970be778d0_,long (unsigned int,unsigned __int64,__int64)>::`vftable';
  v4 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  result = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a2 + 16) = result;
  *(_OWORD *)(a2 + 24) = *(_OWORD *)(a1 + 24);
  return result;
}
