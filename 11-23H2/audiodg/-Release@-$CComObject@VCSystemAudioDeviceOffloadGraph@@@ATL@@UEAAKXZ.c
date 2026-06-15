/*
 * XREFs of ?Release@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAKXZ @ 0x14005BC00
 * Callers:
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@W7EAAKXZ @ 0x140030710 (-Release@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBA@EAAKXZ @ 0x140030730 (-Release@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBCI@EAAKXZ @ 0x140030750 (-Release@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBCI@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBDA@EAAKXZ @ 0x140030770 (-Release@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBDA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBHA@EAAKXZ @ 0x140030790 (-Release@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBHA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBHI@EAAKXZ @ 0x1400307B0 (-Release@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBHI@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBI@EAAKXZ @ 0x1400307D0 (-Release@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBI@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBIA@EAAKXZ @ 0x1400307F0 (-Release@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBIA@EAAKXZ.c)
 * Callees:
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x14001F828 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComObject<CSystemAudioDeviceOffloadGraph>::Release(int *a1)
{
  unsigned int v2; // edi

  v2 = ATL::SafeDecrementReferenceMultiThread(a1 + 98);
  if ( !v2 )
  {
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( a1 )
      (*(void (__fastcall **)(int *, _QWORD))(*(_QWORD *)a1 + 176LL))(a1, v2 + 1);
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v2;
}
