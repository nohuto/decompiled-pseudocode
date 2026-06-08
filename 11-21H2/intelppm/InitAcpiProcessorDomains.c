/*
 * XREFs of InitAcpiProcessorDomains @ 0x1C0024F24
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0028678 (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 *     InitAcpiPerfDomain @ 0x1C0025018 (InitAcpiPerfDomain.c)
 *     InitAcpiIdleDomain @ 0x1C00290B8 (InitAcpiIdleDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C003CE98 (InitAcpiThrottleDomain.c)
 */

__int64 __fastcall InitAcpiProcessorDomains(__int64 a1)
{
  __int64 v2; // rcx

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  if ( (*(_DWORD *)(a1 + 280) & 0x7F070LL) != 0 && *(_QWORD *)(a1 + 528) && (int)InitAcpiIdleDomain(a1, a1 + 536) < 0 )
    *(_QWORD *)(a1 + 536) = 0LL;
  v2 = *(_QWORD *)(a1 + 280);
  if ( (v2 & 0x1000000000LL) != 0 )
    *(_QWORD *)(a1 + 552) = *(_QWORD *)(a1 + 1208);
  if ( (v2 & 0x800000) != 0 )
  {
    if ( (v2 & 0xF8000000) != 0
      && (int)InitAcpiPerfDomain(a1) >= 0
      && !_bittest64((const signed __int64 *)(a1 + 280), 0x24u) )
    {
      *(_QWORD *)(a1 + 552) = *(_QWORD *)(a1 + 472);
    }
    if ( (*(_DWORD *)(a1 + 280) & 0x3000000) != 0
      && (int)InitAcpiThrottleDomain(a1) >= 0
      && (*(_QWORD *)(a1 + 280) & 0x10F8000000LL) == 0 )
    {
      *(_QWORD *)(a1 + 552) = *(_QWORD *)(a1 + 520);
    }
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 208));
}
