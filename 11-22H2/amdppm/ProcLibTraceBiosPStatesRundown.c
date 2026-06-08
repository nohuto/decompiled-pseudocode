/*
 * XREFs of ProcLibTraceBiosPStatesRundown @ 0x1C00210D8
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C00217C0 (ProcLibTraceControlCallback.c)
 * Callees:
 *     ProcLibGetEventDescriptorAndProcessorId @ 0x1C00023B0 (ProcLibGetEventDescriptorAndProcessorId.c)
 *     __security_check_cookie @ 0x1C0002BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C450 (_guard_dispatch_icall_nop.c)
 */

char __fastcall ProcLibTraceBiosPStatesRundown(_QWORD *a1)
{
  void *v1; // rdi
  const EVENT_DESCRIPTOR *EventDescriptorAndProcessorId; // rax
  const EVENT_DESCRIPTOR *v4; // r15
  __int64 v5; // rcx
  ULONG v6; // r9d
  unsigned int *v7; // rsi
  unsigned int v8; // eax
  int v9; // r14d
  __int64 Pool2; // rax
  unsigned int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned int v15; // [rsp+30h] [rbp-89h] BYREF
  _DWORD v16[3]; // [rsp+34h] [rbp-85h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-79h] BYREF
  char *v18; // [rsp+50h] [rbp-69h]
  __int64 v19; // [rsp+58h] [rbp-61h]
  char *v20; // [rsp+60h] [rbp-59h]
  __int64 v21; // [rsp+68h] [rbp-51h]
  char *v22; // [rsp+70h] [rbp-49h]
  __int64 v23; // [rsp+78h] [rbp-41h]
  _QWORD *v24; // [rsp+80h] [rbp-39h]
  __int64 v25; // [rsp+88h] [rbp-31h]
  _QWORD *v26; // [rsp+90h] [rbp-29h]
  __int64 v27; // [rsp+98h] [rbp-21h]
  _QWORD *v28; // [rsp+A0h] [rbp-19h]
  __int64 v29; // [rsp+A8h] [rbp-11h]
  char *v30; // [rsp+B0h] [rbp-9h]
  __int64 v31; // [rsp+B8h] [rbp-1h]
  unsigned int *v32; // [rsp+C0h] [rbp+7h]
  __int64 v33; // [rsp+C8h] [rbp+Fh]
  __int64 v34; // [rsp+D0h] [rbp+17h]
  int v35; // [rsp+D8h] [rbp+1Fh]
  int i; // [rsp+DCh] [rbp+23h]

  v16[0] = 0;
  v1 = 0LL;
  EventDescriptorAndProcessorId = (const EVENT_DESCRIPTOR *)ProcLibGetEventDescriptorAndProcessorId(
                                                              (__int64)a1,
                                                              (__int64)&PPM_ETW_BIOS_P_STATES_RUNDOWN,
                                                              (__int64)&PPM_ETW_BIOS_P_STATES_RUNDOWN_HV,
                                                              (__int64)v16,
                                                              (__int64)&UserData);
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
        a1[26],
        0LL);
      v5 = a1[35];
      v6 = 9;
      v7 = (unsigned int *)a1[56];
      v8 = 0;
      v15 = 0;
      if ( (v5 & 0x70000000) != 0 )
      {
        if ( (v5 & 0x40000000) != 0 )
          v7 = (unsigned int *)a1[57];
        v8 = *v7;
        v15 = *v7;
      }
      if ( v8 )
      {
        v9 = 48 * v8;
        Pool2 = ExAllocatePool2(256LL, 48 * v8, 1919119952LL);
        v1 = (void *)Pool2;
        if ( !Pool2 )
        {
LABEL_13:
          LOBYTE(EventDescriptorAndProcessorId) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
                                                    WdfDriverGlobals,
                                                    a1[26]);
          return (char)EventDescriptorAndProcessorId;
        }
        v6 = 10;
        v34 = Pool2;
        v11 = 0;
        v35 = v9;
        for ( i = 0; v11 < v15; *(_QWORD *)(Pool2 + 8 * v13 + 40) = *(_QWORD *)&v7[12 * v12 + 12] )
        {
          v12 = v11++;
          v13 = 6 * v12;
          *(_DWORD *)(Pool2 + 8 * v13) = v7[12 * v12 + 2];
          *(_DWORD *)(Pool2 + 8 * v13 + 4) = v7[12 * v12 + 3];
          *(_DWORD *)(Pool2 + 8 * v13 + 8) = v7[12 * v12 + 4];
          *(_DWORD *)(Pool2 + 8 * v13 + 12) = v7[12 * v12 + 5];
          *(_QWORD *)(Pool2 + 8 * v13 + 16) = *(_QWORD *)&v7[12 * v12 + 6];
          *(_QWORD *)(Pool2 + 8 * v13 + 24) = *(_QWORD *)&v7[12 * v12 + 8];
          *(_QWORD *)(Pool2 + 8 * v13 + 32) = *(_QWORD *)&v7[12 * v12 + 10];
        }
      }
      v18 = (char *)a1 + 188;
      v19 = 4LL;
      v20 = (char *)a1 + 185;
      v21 = 1LL;
      v22 = (char *)a1 + 52;
      v24 = a1 + 6;
      v26 = a1 + 58;
      v28 = a1 + 53;
      v30 = (char *)a1 + 436;
      v32 = &v15;
      v23 = 4LL;
      v25 = 4LL;
      v27 = 4LL;
      v29 = 12LL;
      v31 = 12LL;
      v33 = 4LL;
      EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, v4, 0LL, v6, &UserData);
      if ( v1 )
        ExFreePoolWithTag(v1, (ULONG)1919119952);
      goto LABEL_13;
    }
  }
  return (char)EventDescriptorAndProcessorId;
}
