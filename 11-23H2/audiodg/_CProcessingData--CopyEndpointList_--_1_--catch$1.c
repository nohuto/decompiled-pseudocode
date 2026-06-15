/*
 * XREFs of _CProcessingData::CopyEndpointList_::_1_::catch$1 @ 0x140034E48
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x140029240 (_CxxThrowException_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall __noreturn CProcessingData::CopyEndpointList_::_1_::catch_1(__int64 a1, __int64 a2)
{
  (***(void (__fastcall ****)(_QWORD, __int64))(a2 + 80))(*(_QWORD *)(a2 + 80), 1LL);
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a2 + 36);
  throw (ATL::CAtlException *)(a2 + 32);
}
