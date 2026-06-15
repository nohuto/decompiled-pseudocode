/*
 * XREFs of ?Release@?$CComContainedObject@VCStreamGroup@@@ATL@@UEAAKXZ @ 0x140051510
 * Callers:
 *     ?Release@?$CComContainedObject@VCStreamGroup@@@ATL@@W7EAAKXZ @ 0x1400328B0 (-Release@-$CComContainedObject@VCStreamGroup@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCStreamGroup@@@ATL@@WBA@EAAKXZ @ 0x1400328D0 (-Release@-$CComContainedObject@VCStreamGroup@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCStreamGroup@@@ATL@@WBI@EAAKXZ @ 0x1400328F0 (-Release@-$CComContainedObject@VCStreamGroup@@@ATL@@WBI@EAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComContainedObject<CStreamGroup>::Release(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 344) + 16LL))(*(_QWORD *)(a1 + 344));
}
