/*
 * XREFs of ProcLibTraceProcessorLpiRundown @ 0x1C003CE78
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C00217C0 (ProcLibTraceControlCallback.c)
 * Callees:
 *     ProcLibGetEventDescriptorAndProcessorId @ 0x1C00023B0 (ProcLibGetEventDescriptorAndProcessorId.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C450 (_guard_dispatch_icall_nop.c)
 */

char __fastcall ProcLibTraceProcessorLpiRundown(__int64 a1)
{
  void *v2; // rdi
  const EVENT_DESCRIPTOR *EventDescriptorAndProcessorId; // rax
  const EVENT_DESCRIPTOR *v4; // r14
  __int64 v5; // rsi
  __int64 v6; // r15
  __int64 Pool2; // rax
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  __int64 v9; // rax
  unsigned int v10; // r9d
  _DWORD *v11; // r8
  _DWORD *v12; // rsi
  _DWORD *v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int128 v18; // [rsp+30h] [rbp-38h] BYREF
  int v19; // [rsp+78h] [rbp+10h] BYREF

  v19 = 0;
  v18 = 0LL;
  v2 = 0LL;
  EventDescriptorAndProcessorId = (const EVENT_DESCRIPTOR *)ProcLibGetEventDescriptorAndProcessorId(
                                                              a1,
                                                              (__int64)&PPM_ETW_PROCESSOR_LPI_STATES,
                                                              (__int64)&PPM_ETW_PROCESSOR_LPI_STATES_HV,
                                                              (__int64)&v19,
                                                              (__int64)&v18);
  v4 = EventDescriptorAndProcessorId;
  if ( EventDescriptorAndProcessorId )
  {
    LOBYTE(EventDescriptorAndProcessorId) = EtwEventEnabled(
                                              (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink,
                                              EventDescriptorAndProcessorId);
    if ( (_BYTE)EventDescriptorAndProcessorId )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        *(_QWORD *)(a1 + 208),
        0LL);
      v5 = *(_QWORD *)(a1 + 544);
      if ( !v5
        || (v6 = *(unsigned int *)(v5 + 16),
            Pool2 = ExAllocatePool2(256LL, 16LL * (unsigned int)(2 * v6 + 4), 1919119952LL),
            (UserData = (struct _EVENT_DATA_DESCRIPTOR *)Pool2) == 0LL) )
      {
LABEL_12:
        LOBYTE(EventDescriptorAndProcessorId) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
                                                  WdfDriverGlobals,
                                                  *(_QWORD *)(a1 + 208));
        return (char)EventDescriptorAndProcessorId;
      }
      *(_OWORD *)Pool2 = v18;
      *(_DWORD *)(Pool2 + 28) = 0;
      *(_QWORD *)(Pool2 + 16) = v5;
      *(_DWORD *)(Pool2 + 24) = 4;
      *(_DWORD *)(Pool2 + 44) = 0;
      *(_QWORD *)(Pool2 + 32) = v5 + 8;
      *(_DWORD *)(Pool2 + 40) = 8;
      *(_QWORD *)(Pool2 + 48) = v5 + 16;
      *(_QWORD *)(Pool2 + 56) = 4LL;
      if ( (_DWORD)v6 )
      {
        v9 = ExAllocatePool2(256LL, 60 * v6, 1919119952LL);
        v2 = (void *)v9;
        if ( !v9 )
          goto LABEL_10;
        v10 = 0;
        v11 = (_DWORD *)(v9 + 8);
        v12 = (_DWORD *)(v5 + 32);
        do
        {
          v13 = v11 - 2;
          *v13 = *(v12 - 2);
          *(v11 - 1) = *(v12 - 1);
          v14 = 2 * v10 + 4;
          *v11 = *v12;
          v11 += 15;
          v15 = v12[1];
          v12 += 20;
          *(v11 - 14) = v15;
          *(v11 - 13) = *(v12 - 18);
          *(v11 - 12) = *(v12 - 17);
          *(_QWORD *)(v11 - 11) = *((_QWORD *)v12 - 8);
          *(v11 - 9) = *(v12 - 14);
          *((_QWORD *)v11 - 4) = *(_QWORD *)(v12 - 13);
          *(v11 - 6) = *(v12 - 11);
          *(_QWORD *)(v11 - 5) = *((_QWORD *)v12 - 5);
          *(v11 - 3) = *(v12 - 8);
          UserData[v14].Ptr = (unsigned __int64)v13;
          *(_QWORD *)&UserData[v14].Size = 60LL;
          LODWORD(v13) = *((unsigned __int16 *)v12 - 11);
          v16 = 2 * v10++ + 5;
          UserData[v16].Ptr = *((_QWORD *)v12 - 2);
          *(_QWORD *)&UserData[v16].Size = (unsigned int)v13;
        }
        while ( v10 < (unsigned int)v6 );
      }
      EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, v4, 0LL, (ULONG)(2 * v6 + 4), UserData);
LABEL_10:
      ExFreePoolWithTag(UserData, (ULONG)1919119952);
      if ( v2 )
        ExFreePoolWithTag(v2, (ULONG)1919119952);
      goto LABEL_12;
    }
  }
  return (char)EventDescriptorAndProcessorId;
}
