/*
 * XREFs of ?InternalRelease@?$ComPtr@VInputProcess@@@WRL@Microsoft@@IEAAKXZ @ 0x180080348
 * Callers:
 *     ??0DeviceInputHost@@AEAA@XZ @ 0x18007FF60 (--0DeviceInputHost@@AEAA@XZ.c)
 *     ??1?$ComPtr@VInputProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x180080140 (--1-$ComPtr@VInputProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1DeviceInputHost@@UEAA@XZ @ 0x180080158 (--1DeviceInputHost@@UEAA@XZ.c)
 *     ??0InputProcess@@AEAA@XZ @ 0x1800B1580 (--0InputProcess@@AEAA@XZ.c)
 *     std::_Func_impl_no_alloc__lambda_b23d6f9d7655be589c0ae99ef9363a00__void_Microsoft::WRL::ComPtr_BamoInputSystemInternalProxy__&_::_Delete_this @ 0x1800B2410 (std--_Func_impl_no_alloc__lambda_b23d6f9d7655be589c0ae99ef9363a00__void_Microsoft--_ea_1800B2410.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<InputProcess>::InternalRelease(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = 0LL;
  v2 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v2 + 8) + 16LL))(v2 + 8);
  }
  return result;
}
