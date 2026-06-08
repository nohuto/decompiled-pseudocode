/*
 * XREFs of ProcLibTraceEnergyCounterUpdate @ 0x1C0001D30
 * Callers:
 *     ComputeProcessorEnergyUsingMsr @ 0x1C0002700 (ComputeProcessorEnergyUsingMsr.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002BC0 (__security_check_cookie.c)
 */

char __fastcall ProcLibTraceEnergyCounterUpdate(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS ProcessorNumberFromIndex; // eax
  unsigned __int8 Number; // [rsp+30h] [rbp-19h] BYREF
  unsigned __int16 Group; // [rsp+34h] [rbp-15h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+38h] [rbp-11h] BYREF
  int v9; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  unsigned __int8 *p_Number; // [rsp+60h] [rbp+17h]
  __int64 v12; // [rsp+68h] [rbp+1Fh]
  int *v13; // [rsp+70h] [rbp+27h]
  __int64 v14; // [rsp+78h] [rbp+2Fh]
  __int64 *v15; // [rsp+80h] [rbp+37h]
  __int64 v16; // [rsp+88h] [rbp+3Fh]
  __int64 v17; // [rsp+C0h] [rbp+77h] BYREF

  v17 = a3;
  v9 = -1073675622;
  ProcNumber = 0;
  LOBYTE(ProcessorNumberFromIndex) = EtwEventEnabled(
                                       (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink,
                                       &PPM_ETW_ENERGY_COUNTER_UPDATE);
  if ( (_BYTE)ProcessorNumberFromIndex )
  {
    ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(*(ULONG *)(a1 + 56), &ProcNumber);
    if ( ProcessorNumberFromIndex >= 0 )
    {
      Group = ProcNumber.Group;
      Number = ProcNumber.Number;
      UserData.Ptr = (unsigned __int64)&Group;
      p_Number = &Number;
      v13 = &v9;
      v15 = &v17;
      *(_QWORD *)&UserData.Size = 2LL;
      v12 = 1LL;
      v14 = 4LL;
      v16 = 8LL;
      LOBYTE(ProcessorNumberFromIndex) = EtwWrite(
                                           (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink,
                                           &PPM_ETW_ENERGY_COUNTER_UPDATE,
                                           0LL,
                                           (ULONG)4,
                                           &UserData);
    }
  }
  return ProcessorNumberFromIndex;
}
