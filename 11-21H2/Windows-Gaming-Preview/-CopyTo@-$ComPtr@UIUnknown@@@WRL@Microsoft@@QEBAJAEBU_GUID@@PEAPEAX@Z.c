/*
 * XREFs of ?CopyTo@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180034580
 * Callers:
 *     ?_GetFTM@CFTMCrossProcBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180049B94 (-_GetFTM@CFTMCrossProcBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IUnknown>::CopyTo(_QWORD *a1)
{
  return (**(__int64 (__fastcall ***)(_QWORD))*a1)(*a1);
}
