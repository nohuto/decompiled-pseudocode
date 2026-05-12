/*
 * XREFs of RaidUnitRequestTimeout @ 0x1C005532C
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x1C0013A80 (RaidUnitPendingDpcRoutine.c)
 * Callees:
 *     RaidAdapterResetBus @ 0x1C0036654 (RaidAdapterResetBus.c)
 *     WPP_SF_ @ 0x1C003C48C (WPP_SF_.c)
 *     WPP_SF_DDD @ 0x1C003C54C (WPP_SF_DDD.c)
 *     WPP_SF_q @ 0x1C003C5A8 (WPP_SF_q.c)
 *     McTemplateK0zqjujssstq_EtwWriteTransfer @ 0x1C0050084 (McTemplateK0zqjujssstq_EtwWriteTransfer.c)
 *     McTemplateK0zqjuuujsssq_EtwWriteTransfer @ 0x1C0050218 (McTemplateK0zqjuuujsssq_EtwWriteTransfer.c)
 *     RaidUnitQueueHierarchicalResetWorkItem @ 0x1C0055230 (RaidUnitQueueHierarchicalResetWorkItem.c)
 *     RaidUnitUnresponsiveDeviceMarkingNeeded @ 0x1C00563FC (RaidUnitUnresponsiveDeviceMarkingNeeded.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1C00621D4 (StorpTelemetryMarkUnitUnresponsive.c)
 */

char __fastcall RaidUnitRequestTimeout(__int64 a1)
{
  int v1; // ebx
  __int64 v3; // rax
  char result; // al

  v1 = *(_DWORD *)(a1 + 96);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x3Du,
        (__int64)&WPP_568007271afc3cdc120e483208e8f443_Traceguids);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_DDD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x3Eu,
        (__int64)&WPP_568007271afc3cdc120e483208e8f443_Traceguids,
        (unsigned __int8)v1,
        BYTE1(v1),
        BYTE2(v1));
    }
  }
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 && (*(_BYTE *)(v3 + 108) & 1) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 2056));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 24) + 5168LL));
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 2136));
  if ( *(_DWORD *)(a1 + 1268) )
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
        3);
    return RaidAdapterResetBus(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 96));
  }
  if ( (unsigned __int8)RaidUnitUnresponsiveDeviceMarkingNeeded(a1) )
  {
    StorpTelemetryMarkUnitUnresponsive(a1, 0LL);
    *(_BYTE *)(a1 + 450) |= 2u;
    if ( (byte_1C00799E4 & 2) != 0 )
      McTemplateK0zqjuuujsssq_EtwWriteTransfer(
        a1 + 169,
        &EventUnitUnresponsive,
        a1 + 1976,
        *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4592LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_QWORD *)(a1 + 24) + 4936LL,
        v1,
        SBYTE1(v1),
        SBYTE2(v1),
        a1 + 1976,
        (const char *)(a1 + 160),
        (const char *)(a1 + 169),
        (const char *)(a1 + 186),
        2);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x3Fu,
        (__int64)&WPP_568007271afc3cdc120e483208e8f443_Traceguids,
        a1);
    }
  }
  result = RaidUnitQueueHierarchicalResetWorkItem(a1);
  if ( !result )
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
    return RaidAdapterResetBus(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 96));
  }
  return result;
}
