/*
 * XREFs of ?Release@?$CComObject@VCAudioProcessor@@@ATL@@UEAAKXZ @ 0x140025BE0
 * Callers:
 *     ?Release@?$CComObject@VCAudioProcessor@@@ATL@@W7EAAKXZ @ 0x140030890 (-Release@-$CComObject@VCAudioProcessor@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCAudioProcessor@@@ATL@@WBA@EAAKXZ @ 0x1400308B0 (-Release@-$CComObject@VCAudioProcessor@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x14001F828 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComObject<CAudioProcessor>::Release(int *a1)
{
  unsigned int v2; // edi

  v2 = ATL::SafeDecrementReferenceMultiThread(a1 + 6);
  if ( !v2 )
  {
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( a1 )
      (*(void (__fastcall **)(int *, __int64))(*(_QWORD *)a1 + 136LL))(a1, 1LL);
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v2;
}
