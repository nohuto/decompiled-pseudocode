/*
 * XREFs of ?Release@?$CComObject@VCAudioPump@@@ATL@@UEAAKXZ @ 0x14002BB90
 * Callers:
 *     ?Release@?$CComObject@VCAudioPump@@@ATL@@W7EAAKXZ @ 0x140033910 (-Release@-$CComObject@VCAudioPump@@@ATL@@W7EAAKXZ.c)
 * Callees:
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x1400293E8 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComObject<CAudioPump>::Release(int *a1)
{
  unsigned int v2; // edi

  v2 = ATL::SafeDecrementReferenceMultiThread(a1 + 4);
  if ( !v2 )
  {
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( a1 )
      (*(void (__fastcall **)(int *, _QWORD))(*(_QWORD *)a1 + 104LL))(a1, v2 + 1);
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v2;
}
