/*
 * XREFs of ?InternalAddRef@?$ComPtr@VInputProcess@@@WRL@Microsoft@@IEBAXXZ @ 0x1800B1BD8
 * Callers:
 *     ??0InputProcess@@AEAA@XZ @ 0x1800B1580 (--0InputProcess@@AEAA@XZ.c)
 *     std::_Func_impl_no_alloc__lambda_b23d6f9d7655be589c0ae99ef9363a00__void_Microsoft::WRL::ComPtr_BamoInputSystemInternalProxy__&_::_Copy @ 0x1800B23D0 (std--_Func_impl_no_alloc__lambda_b23d6f9d7655be589c0ae99ef9363a00__void_Microsoft--_ea_1800B23D0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<InputProcess>::InternalAddRef(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v1 + 8) + 8LL))(v1 + 8);
  return result;
}
