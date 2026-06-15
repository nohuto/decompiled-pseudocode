/*
 * XREFs of ?Release@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAKXZ @ 0x140093D80
 * Callers:
 *     ?Release@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@W7EAAKXZ @ 0x140033730 (-Release@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBJI@EAAKXZ @ 0x140033750 (-Release@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBJI@EAAKXZ.c)
 *     ?Release@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBKA@EAAKXZ @ 0x140033770 (-Release@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBKA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBKI@EAAKXZ @ 0x140033790 (-Release@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBKI@EAAKXZ.c)
 *     ?Release@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBMI@EAAKXZ @ 0x1400337B0 (-Release@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBMI@EAAKXZ.c)
 *     ?Release@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBOA@EAAKXZ @ 0x1400337D0 (-Release@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBOA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBPA@EAAKXZ @ 0x1400337F0 (-Release@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBPA@EAAKXZ.c)
 * Callees:
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x14001F828 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComObject<CCrossProcessClientOutputEndpoint>::Release(int *a1)
{
  unsigned int v2; // edi

  v2 = ATL::SafeDecrementReferenceMultiThread(a1 + 126);
  if ( !v2 )
  {
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( a1 )
      (*(void (__fastcall **)(int *, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, v2 + 1);
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v2;
}
