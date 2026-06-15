/*
 * XREFs of ?Release@?$CComObject@VCStreamInstance@@@ATL@@UEAAKXZ @ 0x1400213A0
 * Callers:
 *     ?Release@?$CComObject@VCStreamInstance@@@ATL@@W7EAAKXZ @ 0x14002F630 (-Release@-$CComObject@VCStreamInstance@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCStreamInstance@@@ATL@@WBA@EAAKXZ @ 0x14002F650 (-Release@-$CComObject@VCStreamInstance@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x14001F828 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComObject<CStreamInstance>::Release(int *a1)
{
  unsigned int v2; // edi

  v2 = ATL::SafeDecrementReferenceMultiThread(a1 + 6);
  if ( !v2 )
  {
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( a1 )
      (*(void (__fastcall **)(int *, __int64))(*(_QWORD *)a1 + 168LL))(a1, 1LL);
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v2;
}
