/*
 * XREFs of ??$As@UIClassicWindow@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@Details@12@@Z @ 0x18022A7FA
 * Callers:
 *     ??$FindEx@VCClassicWindowFinderByAppID@@@?$CTSimpleFixedArray@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCClassicWindowFinderByAppID@@AEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1802EF990 (--$FindEx@VCClassicWindowFinderByAppID@@@-$CTSimpleFixedArray@V-$ComPtr@UIClassicWindow@@@WRL@Mi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IUnknown>::As<IClassicWindow>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a2);
  return v4(v3, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, a2);
}
