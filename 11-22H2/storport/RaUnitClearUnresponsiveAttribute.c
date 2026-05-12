/*
 * XREFs of RaUnitClearUnresponsiveAttribute @ 0x1C005DA30
 * Callers:
 *     RaUnitUnresponsiveAttributeMgmt @ 0x1C00605A8 (RaUnitUnresponsiveAttributeMgmt.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003E93C (WPP_SF_q.c)
 *     McTemplateK0zqjuuujsssq_EtwWriteTransfer @ 0x1C005C710 (McTemplateK0zqjuuujsssq_EtwWriteTransfer.c)
 *     StorpTelemetryMarkUnitResponsive @ 0x1C0070804 (StorpTelemetryMarkUnitResponsive.c)
 */

__int64 __fastcall RaUnitClearUnresponsiveAttribute(__int64 a1)
{
  unsigned int v2; // eax

  if ( (*(_BYTE *)(a1 + 450) & 2) != 0 )
  {
    if ( (byte_1C0092A04 & 8) != 0 )
    {
      v2 = *(_DWORD *)(a1 + 96);
      McTemplateK0zqjuuujsssq_EtwWriteTransfer(
        v2 >> 8,
        &EventUnitResponsive,
        a1 + 186,
        *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4656LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_QWORD *)(a1 + 24) + 5000LL,
        v2,
        SBYTE1(v2),
        SBYTE2(v2),
        a1 + 2024,
        (const char *)(a1 + 160),
        (const char *)(a1 + 169),
        (const char *)(a1 + 186),
        4);
    }
    StorpTelemetryMarkUnitResponsive(a1);
    *(_BYTE *)(a1 + 450) &= ~2u;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x30u,
        (__int64)&WPP_aacce2c5c88a3640487a3f62f1d3f691_Traceguids,
        a1);
    }
  }
  return 0LL;
}
