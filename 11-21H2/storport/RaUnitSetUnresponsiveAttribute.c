/*
 * XREFs of RaUnitSetUnresponsiveAttribute @ 0x1C005256C
 * Callers:
 *     RaUnitUnresponsiveAttributeMgmt @ 0x1C0053CD4 (RaUnitUnresponsiveAttributeMgmt.c)
 * Callees:
 *     RaidAdapterResetBus @ 0x1C0036654 (RaidAdapterResetBus.c)
 *     WPP_SF_q @ 0x1C003C5A8 (WPP_SF_q.c)
 *     McTemplateK0zqjujssstq_EtwWriteTransfer @ 0x1C0050084 (McTemplateK0zqjujssstq_EtwWriteTransfer.c)
 *     McTemplateK0zqjuuujsssq_EtwWriteTransfer @ 0x1C0050218 (McTemplateK0zqjuuujsssq_EtwWriteTransfer.c)
 *     RaidUnitQueueHierarchicalResetWorkItem @ 0x1C0055230 (RaidUnitQueueHierarchicalResetWorkItem.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1C00621D4 (StorpTelemetryMarkUnitUnresponsive.c)
 */

__int64 __fastcall RaUnitSetUnresponsiveAttribute(__int64 a1)
{
  char v2; // cl
  int v3; // ebx

  v2 = *(_BYTE *)(a1 + 450);
  if ( (v2 & 2) == 0 )
  {
    v3 = *(_DWORD *)(a1 + 96);
    if ( (byte_1C00799E4 & 2) != 0 )
    {
      McTemplateK0zqjuuujsssq_EtwWriteTransfer(
        *(_QWORD *)(a1 + 24) + 4936LL,
        &EventUnitUnresponsive,
        a1 + 169,
        *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4592LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_QWORD *)(a1 + 24) + 4936LL,
        v3,
        SBYTE1(v3),
        SBYTE2(v3),
        a1 + 1976,
        (const char *)(a1 + 160),
        (const char *)(a1 + 169),
        (const char *)(a1 + 186),
        5);
      v2 = *(_BYTE *)(a1 + 450);
    }
    *(_BYTE *)(a1 + 450) = v2 | 2;
    StorpTelemetryMarkUnitUnresponsive(a1, 0LL);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x31u,
        (__int64)&WPP_568007271afc3cdc120e483208e8f443_Traceguids,
        a1);
    }
    if ( *(_DWORD *)(a1 + 732) && !(unsigned __int8)RaidUnitQueueHierarchicalResetWorkItem(a1) )
    {
      if ( (byte_1C00799E4 & 1) != 0 )
        McTemplateK0zqjujssstq_EtwWriteTransfer(
          a1 + 169,
          a1 + 160,
          a1 + 1976,
          *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4592LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
          *(_QWORD *)(a1 + 24) + 4936LL,
          *(_BYTE *)(a1 + 96),
          a1 + 1976,
          (const char *)(a1 + 160),
          (const char *)(a1 + 169),
          (const char *)(a1 + 186),
          *(_BYTE *)(a1 + 450) & 1,
          2);
      RaidAdapterResetBus(*(_QWORD *)(a1 + 24), v3);
    }
  }
  return 0LL;
}
