/*
 * XREFs of RaUnitSetUnresponsiveAttribute @ 0x1C005ED7C
 * Callers:
 *     RaUnitUnresponsiveAttributeMgmt @ 0x1C00605A8 (RaUnitUnresponsiveAttributeMgmt.c)
 * Callees:
 *     RaidAdapterResetBus @ 0x1C00379D0 (RaidAdapterResetBus.c)
 *     WPP_SF_q @ 0x1C003E93C (WPP_SF_q.c)
 *     McTemplateK0zqjujssstq_EtwWriteTransfer @ 0x1C005C574 (McTemplateK0zqjujssstq_EtwWriteTransfer.c)
 *     McTemplateK0zqjuuujsssq_EtwWriteTransfer @ 0x1C005C710 (McTemplateK0zqjuuujsssq_EtwWriteTransfer.c)
 *     RaidUnitQueueHierarchicalResetWorkItem @ 0x1C0061F3C (RaidUnitQueueHierarchicalResetWorkItem.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1C0070974 (StorpTelemetryMarkUnitUnresponsive.c)
 */

__int64 __fastcall RaUnitSetUnresponsiveAttribute(__int64 a1)
{
  int v2; // ebx

  if ( (*(_BYTE *)(a1 + 450) & 2) == 0 )
  {
    v2 = *(_DWORD *)(a1 + 96);
    if ( (byte_1C0092A04 & 4) != 0 )
      McTemplateK0zqjuuujsssq_EtwWriteTransfer(
        *(_QWORD *)(a1 + 24) + 5000LL,
        &EventUnitUnresponsive,
        a1 + 169,
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
        5);
    *(_BYTE *)(a1 + 450) |= 2u;
    StorpTelemetryMarkUnitUnresponsive(a1, 0LL);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x31u,
        (__int64)&WPP_aacce2c5c88a3640487a3f62f1d3f691_Traceguids,
        a1);
    }
    if ( (((__int64)*(unsigned int *)(a1 + 744) >> 1) & 0x7FFFFFFF) != 0
      && !(unsigned __int8)RaidUnitQueueHierarchicalResetWorkItem(a1) )
    {
      if ( (byte_1C0092A04 & 2) != 0 )
        McTemplateK0zqjujssstq_EtwWriteTransfer(
          a1 + 169,
          a1 + 160,
          a1 + 2024,
          *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4656LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
          *(_QWORD *)(a1 + 24) + 5000LL,
          *(_BYTE *)(a1 + 96),
          a1 + 2024,
          (const char *)(a1 + 160),
          (const char *)(a1 + 169),
          (const char *)(a1 + 186),
          *(_BYTE *)(a1 + 450) & 1,
          2);
      RaidAdapterResetBus(*(_QWORD *)(a1 + 24), v2);
    }
  }
  return 0LL;
}
