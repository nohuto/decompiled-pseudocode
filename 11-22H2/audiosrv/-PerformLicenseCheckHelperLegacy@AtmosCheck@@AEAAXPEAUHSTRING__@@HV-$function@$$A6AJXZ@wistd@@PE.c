/*
 * XREFs of ?PerformLicenseCheckHelperLegacy@AtmosCheck@@AEAAXPEAUHSTRING__@@HV?$function@$$A6AJXZ@wistd@@PEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x18015CA5C
 * Callers:
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x180038870 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsLicenseValidForPackage@AtmosCheck@@AEAAJPEAUHSTRING__@@@Z @ 0x18015BE5C (-IsLicenseValidForPackage@AtmosCheck@@AEAAJPEAUHSTRING__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AtmosCheck::PerformLicenseCheckHelperLegacy(__int64 a1, HSTRING a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rsi
  __int64 v9; // rcx
  AtmosCheck *v10; // rcx
  int v11; // eax

  v6 = a3;
  v9 = *(_QWORD *)(a4 + 112);
  if ( !v9 )
    __fastfail(7u);
  v10 = (AtmosCheck *)(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v9 + 32LL))(v9);
  if ( !*(_BYTE *)(a1 + 99)
    || ((v11 = *(_DWORD *)(a1 + 184), v11 != 2) || (int)v10 < 0)
    && (v11 != 4 || (int)v10 < 0)
    && (v11 != 3 || (int)v10 >= 0) )
  {
    LODWORD(v10) = AtmosCheck::IsLicenseValidForPackage(v10, a2);
  }
  *(_DWORD *)(a5 + 24 * v6 + 4) = (_DWORD)v10;
  return wistd::function<void (void)>::~function<void (void)>(a4);
}
