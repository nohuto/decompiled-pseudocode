/*
 * XREFs of ProcLibTraceBiosTStatesRundown @ 0x1C00207F4
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C0020C40 (ProcLibTraceControlCallback.c)
 * Callees:
 *     ProcLibGetEventDescriptorAndProcessorId @ 0x1C0002744 (ProcLibGetEventDescriptorAndProcessorId.c)
 *     __security_check_cookie @ 0x1C0002C70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 */

char __fastcall ProcLibTraceBiosTStatesRundown(__int64 a1)
{
  void *v1; // rbx
  const EVENT_DESCRIPTOR *EventDescriptorAndProcessorId; // rax
  const EVENT_DESCRIPTOR *v4; // r15
  int v5; // eax
  ULONG v6; // r9d
  unsigned int *v7; // r14
  unsigned int v8; // eax
  int v9; // esi
  __int64 Pool2; // rax
  unsigned int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  bool v15; // zf
  int v16; // eax
  int v18; // [rsp+38h] [rbp-79h] BYREF
  unsigned int v19; // [rsp+3Ch] [rbp-75h] BYREF
  int v20; // [rsp+40h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-69h] BYREF
  char *v22; // [rsp+58h] [rbp-59h]
  __int64 v23; // [rsp+60h] [rbp-51h]
  char *v24; // [rsp+68h] [rbp-49h]
  __int64 v25; // [rsp+70h] [rbp-41h]
  __int64 v26; // [rsp+78h] [rbp-39h]
  __int64 v27; // [rsp+80h] [rbp-31h]
  int *v28; // [rsp+88h] [rbp-29h]
  __int64 v29; // [rsp+90h] [rbp-21h]
  __int64 v30; // [rsp+98h] [rbp-19h]
  __int64 v31; // [rsp+A0h] [rbp-11h]
  __int64 v32; // [rsp+A8h] [rbp-9h]
  __int64 v33; // [rsp+B0h] [rbp-1h]
  unsigned int *v34; // [rsp+B8h] [rbp+7h]
  __int64 v35; // [rsp+C0h] [rbp+Fh]
  __int64 v36; // [rsp+C8h] [rbp+17h]
  int v37; // [rsp+D0h] [rbp+1Fh]
  int i; // [rsp+D4h] [rbp+23h]

  v20 = 0;
  v18 = 0;
  v1 = 0LL;
  EventDescriptorAndProcessorId = (const EVENT_DESCRIPTOR *)ProcLibGetEventDescriptorAndProcessorId(
                                                              a1,
                                                              (__int64)&PPM_ETW_BIOS_T_STATES_RUNDOWN,
                                                              (__int64)&PPM_ETW_BIOS_T_STATES_RUNDOWN_HV,
                                                              (__int64)&v20,
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
        *(_QWORD *)(a1 + 208),
        0LL);
      v5 = *(_DWORD *)(a1 + 280);
      v6 = 8;
      v7 = *(unsigned int **)(a1 + 504);
      v19 = 0;
      if ( (v5 & 0x3300000) != 0 )
      {
        v8 = *v7;
        v19 = v8;
        if ( v8 )
        {
          v9 = 20 * v8;
          Pool2 = ExAllocatePool2(256LL, 20 * v8, 1919119952LL);
          v1 = (void *)Pool2;
          if ( !Pool2 )
          {
LABEL_15:
            LOBYTE(EventDescriptorAndProcessorId) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
                                                      WdfDriverGlobals,
                                                      *(_QWORD *)(a1 + 208));
            return (char)EventDescriptorAndProcessorId;
          }
          v6 = 9;
          v36 = Pool2;
          v11 = 0;
          v37 = v9;
          for ( i = 0; v11 < v19; *(_DWORD *)(Pool2 + 4 * v13 + 16) = v7[5 * v12 + 5] )
          {
            v12 = v11++;
            v13 = 5 * v12;
            *(_DWORD *)(Pool2 + 4 * v13) = v7[5 * v12 + 1];
            *(_DWORD *)(Pool2 + 4 * v13 + 4) = v7[5 * v12 + 2];
            *(_DWORD *)(Pool2 + 4 * v13 + 8) = v7[5 * v12 + 3];
            *(_DWORD *)(Pool2 + 4 * v13 + 12) = v7[5 * v12 + 4];
          }
        }
      }
      v14 = *(_QWORD *)(a1 + 280);
      if ( (v14 & 0x3000000) != 0 )
      {
        v18 = 3;
      }
      else
      {
        v15 = (v14 & 0x300000) == 0;
        v16 = v18;
        if ( !v15 )
          v16 = 1;
        v18 = v16;
      }
      v22 = &byte_1C0011D96;
      v23 = 1LL;
      v24 = &byte_1C0011D97;
      v25 = 1LL;
      v26 = a1 + 512;
      v28 = &v18;
      v30 = a1 + 480;
      v32 = a1 + 492;
      v34 = &v19;
      v27 = 4LL;
      v29 = 4LL;
      v31 = 12LL;
      v33 = 12LL;
      v35 = 4LL;
      EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, v4, 0LL, v6, &UserData);
      if ( v1 )
        ExFreePoolWithTag(v1, (ULONG)1919119952);
      goto LABEL_15;
    }
  }
  return (char)EventDescriptorAndProcessorId;
}
