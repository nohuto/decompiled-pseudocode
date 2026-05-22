/*
 * XREFs of _SpatialRimDeviceCollection::OnDdiDeviceUpdated_::_1_::catch$14 @ 0x1800DA34C
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800DAE74 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall SpatialRimDeviceCollection::OnDdiDeviceUpdated_::_1_::catch_14(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 1008) = wil::details::in1diag3::Return_CaughtException(
                             *(wil::details::in1diag3 **)(a2 + 1000),
                             (void *)0x364,
                             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatia"
                                           "lrimdevicecollection.cpp",
                             a4);
  return 0LL;
}
