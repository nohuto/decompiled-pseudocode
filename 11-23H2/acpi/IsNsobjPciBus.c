/*
 * XREFs of IsNsobjPciBus @ 0x1C008A688
 * Callers:
 *     ACPIBusIrpStartDeviceWorker @ 0x1C0081780 (ACPIBusIrpStartDeviceWorker.c)
 *     ACPIBusIrpStopDevice @ 0x1C0081910 (ACPIBusIrpStopDevice.c)
 *     ACPIFilterIrpStopDevice @ 0x1C0086CB0 (ACPIFilterIrpStopDevice.c)
 *     ACPIInitStopDevice @ 0x1C0087AF4 (ACPIInitStopDevice.c)
 *     ACPIInternalIsPci @ 0x1C0088084 (ACPIInternalIsPci.c)
 *     EnableDisableRegions @ 0x1C008A58C (EnableDisableRegions.c)
 *     IsPciBus @ 0x1C008A754 (IsPciBus.c)
 *     IsPciBusExtension @ 0x1C008A778 (IsPciBusExtension.c)
 * Callees:
 *     IsPciBusAsync @ 0x1C0035290 (IsPciBusAsync.c)
 *     AMLIGetNSObjectContext @ 0x1C0048384 (AMLIGetNSObjectContext.c)
 */

char __fastcall IsNsobjPciBus(volatile signed __int32 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  char result; // al
  _BYTE Event[32]; // [rsp+30h] [rbp-28h] BYREF
  char v6; // [rsp+68h] [rbp+10h] BYREF

  memset(Event, 0, sizeof(Event));
  v2 = AMLIGetNSObjectContext((__int64)a1);
  if ( !v2 )
    goto LABEL_6;
  v3 = *(_QWORD *)(v2 + 8);
  if ( (v3 & 0x2000000) != 0 )
    return 1;
  if ( (v3 & 0x100000000LL) != 0 )
    return 0;
LABEL_6:
  KeInitializeEvent((PRKEVENT)Event, SynchronizationEvent, 0);
  *(_DWORD *)&Event[24] = -1073741275;
  v6 = 0;
  if ( (unsigned int)IsPciBusAsync(a1, (__int64)AmlisuppCompletePassive, (__int64)Event, &v6) != 259 )
    return v6;
  KeWaitForSingleObject(Event, Executive, 0, 0, 0LL);
  result = v6;
  if ( *(int *)&Event[24] < 0 )
    return 0;
  return result;
}
