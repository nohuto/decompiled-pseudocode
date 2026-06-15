/*
 * XREFs of ?Release@?$CComObject@VCAudioProcessor@@@ATL@@UEAAKXZ @ 0x1400294F0
 * Callers:
 *     ?Release@?$CComObject@VCAudioProcessor@@@ATL@@W7EAAKXZ @ 0x1400338D0 (-Release@-$CComObject@VCAudioProcessor@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCAudioProcessor@@@ATL@@WBA@EAAKXZ @ 0x1400338F0 (-Release@-$CComObject@VCAudioProcessor@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComObject<CAudioProcessor>::Release(volatile signed __int32 *a1)
{
  signed __int32 i; // r8d
  unsigned __int32 v3; // edi

  for ( i = *((_DWORD *)a1 + 6);
        i != 0x7FFFFFFF && i != _InterlockedCompareExchange(a1 + 6, i - 1, i);
        i = *((_DWORD *)a1 + 6) )
  {
    ;
  }
  v3 = i - 1;
  if ( i == 1 )
  {
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a1 + 136LL))(a1, 1LL);
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v3;
}
