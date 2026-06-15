/*
 * XREFs of ?Release@?$CComObject@VCProcessSubmix@@@ATL@@UEAAKXZ @ 0x14002AED0
 * Callers:
 *     ?Release@?$CComObject@VCProcessSubmix@@@ATL@@W7EAAKXZ @ 0x140033B70 (-Release@-$CComObject@VCProcessSubmix@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCProcessSubmix@@@ATL@@WBA@EAAKXZ @ 0x140033B90 (-Release@-$CComObject@VCProcessSubmix@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x1400293E8 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComObject<CProcessSubmix>::Release(int *a1)
{
  unsigned int v2; // edi

  v2 = ATL::SafeDecrementReferenceMultiThread(a1 + 84);
  if ( !v2 )
  {
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( a1 )
      (*(void (__fastcall **)(int *, __int64))(*(_QWORD *)a1 + 96LL))(a1, 1LL);
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v2;
}
