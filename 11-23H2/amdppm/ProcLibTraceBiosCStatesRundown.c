/*
 * XREFs of ProcLibTraceBiosCStatesRundown @ 0x1C003D0FC
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C00217C0 (ProcLibTraceControlCallback.c)
 * Callees:
 *     ProcLibGetEventDescriptorAndProcessorId @ 0x1C0002360 (ProcLibGetEventDescriptorAndProcessorId.c)
 *     __security_check_cookie @ 0x1C0002BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C510 (_guard_dispatch_icall_nop.c)
 */

char __fastcall ProcLibTraceBiosCStatesRundown(_QWORD *a1)
{
  char *Pool2; // rbx
  const EVENT_DESCRIPTOR *EventDescriptorAndProcessorId; // rax
  const EVENT_DESCRIPTOR *v4; // rsi
  __int64 v5; // rax
  ULONG v6; // r9d
  unsigned int v7; // ecx
  unsigned int *v8; // r14
  unsigned int v9; // ecx
  __int64 i; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // xmm0_8
  char *v14; // r8
  unsigned int v16; // [rsp+30h] [rbp-39h] BYREF
  int v17; // [rsp+34h] [rbp-35h] BYREF
  int v18; // [rsp+38h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-29h] BYREF
  __int16 *v20; // [rsp+50h] [rbp-19h]
  int v21; // [rsp+58h] [rbp-11h]
  int v22; // [rsp+5Ch] [rbp-Dh]
  __int16 *v23; // [rsp+60h] [rbp-9h]
  int v24; // [rsp+68h] [rbp-1h]
  int v25; // [rsp+6Ch] [rbp+3h]
  int *v26; // [rsp+70h] [rbp+7h]
  int v27; // [rsp+78h] [rbp+Fh]
  int v28; // [rsp+7Ch] [rbp+13h]
  unsigned int *v29; // [rsp+80h] [rbp+17h]
  int v30; // [rsp+88h] [rbp+1Fh]
  int v31; // [rsp+8Ch] [rbp+23h]
  char *v32; // [rsp+90h] [rbp+27h]
  int v33; // [rsp+98h] [rbp+2Fh]
  int v34; // [rsp+9Ch] [rbp+33h]

  v18 = 0;
  Pool2 = 0LL;
  EventDescriptorAndProcessorId = (const EVENT_DESCRIPTOR *)ProcLibGetEventDescriptorAndProcessorId(
                                                              (__int64)a1,
                                                              (__int64)&PPM_ETW_BIOS_C_STATES_RUNDOWN,
                                                              (__int64)&PPM_ETW_BIOS_C_STATES_RUNDOWN_HV,
                                                              (__int64)&v18,
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
      v6 = 5;
      v16 = 0;
      v7 = 0;
      v8 = (unsigned int *)a1[66];
      if ( (v5 & 0x7F077) != 0 )
      {
        v7 = *v8;
        v16 = *v8;
      }
      if ( (v5 & 0x7F070) != 0 )
        v17 = 2;
      else
        v17 = (v5 & 7) != 0;
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v31 = 0;
      v20 = &AcpiInfo;
      v23 = &word_1C0012E02;
      v26 = &v17;
      v21 = 2;
      v24 = 2;
      v29 = &v16;
      v27 = 4;
      v30 = 4;
      if ( v7 )
      {
        Pool2 = (char *)ExAllocatePool2(256LL, 19LL * v7, 1919119952LL);
        if ( !Pool2 )
        {
LABEL_15:
          LOBYTE(EventDescriptorAndProcessorId) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
                                                    WdfDriverGlobals,
                                                    a1[26]);
          return (char)EventDescriptorAndProcessorId;
        }
        v9 = v16;
        for ( i = 0LL; (unsigned int)i < v16; v9 = v16 )
        {
          v11 = 5 * i;
          v12 = (unsigned int)i;
          v13 = *(_QWORD *)&v8[5 * i + 1];
          i = (unsigned int)(i + 1);
          v14 = &Pool2[19 * v12];
          *(_QWORD *)v14 = v13;
          *((_DWORD *)v14 + 2) = v8[v11 + 3];
          v14[12] = v8[v11 + 4];
          *(_DWORD *)(v14 + 13) = v8[v11 + 5];
          *(_WORD *)(v14 + 17) = HIWORD(v8[v11 + 4]);
        }
        v6 = 6;
        v34 = 0;
        v32 = Pool2;
        v33 = 19 * v9;
      }
      EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, v4, 0LL, v6, &UserData);
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, (ULONG)1919119952);
      goto LABEL_15;
    }
  }
  return (char)EventDescriptorAndProcessorId;
}
