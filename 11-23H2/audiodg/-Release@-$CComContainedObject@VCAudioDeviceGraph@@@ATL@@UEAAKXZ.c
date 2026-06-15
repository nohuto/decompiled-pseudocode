/*
 * XREFs of ?Release@?$CComContainedObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ @ 0x14004DA10
 * Callers:
 *     ?Release@?$CComContainedObject@VCStreamInstance@@@ATL@@W7EAAKXZ @ 0x14002F510 (-Release@-$CComContainedObject@VCStreamInstance@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCAudioDeviceGraph@@@ATL@@WBA@EAAKXZ @ 0x14002F530 (-Release@-$CComContainedObject@VCAudioDeviceGraph@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComContainedObject<CAudioDeviceGraph>::Release(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24));
}
