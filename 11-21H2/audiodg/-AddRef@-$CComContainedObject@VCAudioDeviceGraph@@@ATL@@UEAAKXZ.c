/*
 * XREFs of ?AddRef@?$CComContainedObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ @ 0x14004D8C0
 * Callers:
 *     ?AddRef@?$CComContainedObject@VCAudioDeviceGraph@@@ATL@@W7EAAKXZ @ 0x1400322B0 (-AddRef@-$CComContainedObject@VCAudioDeviceGraph@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCAudioDeviceGraph@@@ATL@@WBA@EAAKXZ @ 0x1400322D0 (-AddRef@-$CComContainedObject@VCAudioDeviceGraph@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComContainedObject<CAudioDeviceGraph>::AddRef(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 8LL))(*(_QWORD *)(a1 + 24));
}
