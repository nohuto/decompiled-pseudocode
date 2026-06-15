/*
 * XREFs of ?AddRef@?$CComContainedObject@VCStreamGroup@@@ATL@@UEAAKXZ @ 0x140050B80
 * Callers:
 *     ?AddRef@?$CComContainedObject@VCStreamGroup@@@ATL@@W7EAAKXZ @ 0x14002F670 (-AddRef@-$CComContainedObject@VCStreamGroup@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCStreamGroup@@@ATL@@WBA@EAAKXZ @ 0x14002F690 (-AddRef@-$CComContainedObject@VCStreamGroup@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCStreamGroup@@@ATL@@WBI@EAAKXZ @ 0x14002F6B0 (-AddRef@-$CComContainedObject@VCStreamGroup@@@ATL@@WBI@EAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComContainedObject<CStreamGroup>::AddRef(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 344) + 8LL))(*(_QWORD *)(a1 + 344));
}
