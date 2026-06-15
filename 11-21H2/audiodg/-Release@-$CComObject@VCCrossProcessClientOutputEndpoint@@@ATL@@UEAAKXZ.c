/*
 * XREFs of ?Release@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAKXZ @ 0x140086EA0
 * Callers:
 *     ?Release@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@W7EAAKXZ @ 0x140035A90 (-Release@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBJI@EAAKXZ @ 0x140035AB0 (-Release@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBJI@EAAKXZ.c)
 *     ?Release@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBKA@EAAKXZ @ 0x140035AD0 (-Release@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBKA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBKI@EAAKXZ @ 0x140035AF0 (-Release@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBKI@EAAKXZ.c)
 *     ?Release@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBMI@EAAKXZ @ 0x140035B10 (-Release@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBMI@EAAKXZ.c)
 *     ?Release@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBOA@EAAKXZ @ 0x140035B30 (-Release@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBOA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBNA@EAAKXZ @ 0x140035BB0 (-Release@-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBNA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBOI@EAAKXZ @ 0x140035BD0 (-Release@-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBOI@EAAKXZ.c)
 * Callees:
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x1400293E8 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComObject<CCrossProcessClientOutputEndpoint>::Release(int *a1)
{
  unsigned int v2; // edi

  v2 = ATL::SafeDecrementReferenceMultiThread(a1 + 124);
  if ( !v2 )
  {
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( a1 )
      (*(void (__fastcall **)(int *, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, v2 + 1);
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v2;
}
