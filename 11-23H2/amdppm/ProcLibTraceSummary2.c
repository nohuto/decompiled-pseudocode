/*
 * XREFs of ProcLibTraceSummary2 @ 0x1C00226CC
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C00217C0 (ProcLibTraceControlCallback.c)
 *     ProcLibDeviceStart @ 0x1C002D1C4 (ProcLibDeviceStart.c)
 * Callees:
 *     ProcLibGetEventDescriptorAndProcessorId @ 0x1C0002360 (ProcLibGetEventDescriptorAndProcessorId.c)
 *     __security_check_cookie @ 0x1C0002BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C510 (_guard_dispatch_icall_nop.c)
 *     GetRegistryDwordValue @ 0x1C0020F74 (GetRegistryDwordValue.c)
 */

char __fastcall ProcLibTraceSummary2(__int64 a1, char a2)
{
  void *v3; // r8
  bool v5; // zf
  void *v6; // rdx
  const EVENT_DESCRIPTOR *EventDescriptorAndProcessorId; // rax
  const EVENT_DESCRIPTOR *v8; // rdi
  __int64 v9; // r8
  unsigned int v10; // r10d
  int *v11; // rcx
  _DWORD *v12; // rdx
  _DWORD *v13; // r11
  unsigned int v14; // r9d
  int v15; // eax
  _DWORD *v16; // rcx
  _DWORD *v17; // rcx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned int v23; // [rsp+38h] [rbp-69h] BYREF
  unsigned int v24; // [rsp+3Ch] [rbp-65h] BYREF
  unsigned int v25; // [rsp+40h] [rbp-61h] BYREF
  int v26; // [rsp+44h] [rbp-5Dh] BYREF
  int v27; // [rsp+48h] [rbp-59h] BYREF
  int v28; // [rsp+4Ch] [rbp-55h] BYREF
  int v29; // [rsp+50h] [rbp-51h] BYREF
  int v30; // [rsp+54h] [rbp-4Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-49h] BYREF
  int *v32; // [rsp+68h] [rbp-39h]
  __int64 v33; // [rsp+70h] [rbp-31h]
  int *v34; // [rsp+78h] [rbp-29h]
  __int64 v35; // [rsp+80h] [rbp-21h]
  unsigned int *v36; // [rsp+88h] [rbp-19h]
  __int64 v37; // [rsp+90h] [rbp-11h]
  int *v38; // [rsp+98h] [rbp-9h]
  __int64 v39; // [rsp+A0h] [rbp-1h]
  unsigned int *v40; // [rsp+A8h] [rbp+7h]
  __int64 v41; // [rsp+B0h] [rbp+Fh]
  unsigned int *v42; // [rsp+B8h] [rbp+17h]
  __int64 v43; // [rsp+C0h] [rbp+1Fh]
  int *v44; // [rsp+C8h] [rbp+27h]
  __int64 v45; // [rsp+D0h] [rbp+2Fh]

  v3 = &PPM_ETW_SUMMARY2_HV;
  v5 = a2 == 0;
  v30 = 0;
  v6 = &PPM_ETW_SUMMARY2;
  if ( !v5 )
    v3 = &PPM_ETW_SUMMARY2_RUNDOWN_HV;
  if ( a2 )
    v6 = &PPM_ETW_SUMMARY2_RUNDOWN;
  EventDescriptorAndProcessorId = (const EVENT_DESCRIPTOR *)ProcLibGetEventDescriptorAndProcessorId(
                                                              a1,
                                                              (__int64)v6,
                                                              (__int64)v3,
                                                              (__int64)&v30,
                                                              (__int64)&UserData);
  v8 = EventDescriptorAndProcessorId;
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
      v9 = *(_QWORD *)(a1 + 280);
      v10 = 100;
      v11 = *(int **)(a1 + 528);
      v12 = *(_DWORD **)(a1 + 448);
      v13 = *(_DWORD **)(a1 + 504);
      v27 = 0;
      v14 = 0;
      v28 = 0;
      v26 = 0;
      v29 = 100;
      v24 = 100;
      v25 = 100;
      v23 = 0;
      if ( (v9 & 0x300000300LL) != 0 )
      {
        v27 = *(_DWORD *)(a1 + 1132);
        v28 = ((v9 & 0x200000200LL) != 0) + 2;
      }
      else if ( (v9 & 0xE0000000000LL) != 0 )
      {
        v27 = *(_DWORD *)(*(_QWORD *)(a1 + 544) + 16LL);
        v28 = 4;
      }
      else if ( (v9 & 0x7F077) != 0 )
      {
        v15 = *v11;
        v27 = v15;
        v28 = 1;
        if ( !v15 || *((_BYTE *)v11 + 16) != 1 )
          v27 = v15 + 1;
      }
      if ( (v9 & 0x1000000000LL) != 0 )
      {
        v16 = *(_DWORD **)(a1 + 1192);
        if ( !v16 )
          goto LABEL_40;
        v26 = 4;
        v29 = v16[6];
        v24 = v16[7];
        v25 = v16[8];
        v14 = v16[5];
      }
      else
      {
        if ( (v9 & 0x8000000) == 0 )
        {
          if ( (v9 & 0x80000000) != 0 )
          {
            v26 = 2;
            v14 = *(_DWORD *)(qword_1C0012AA0 + 28);
            v23 = v14;
            v24 = 100 * *(_DWORD *)(qword_1C0012AA0 + 36) / v14;
            v25 = 100 * *(_DWORD *)(qword_1C0012AA0 + 32) / v14;
          }
          else
          {
            if ( (v9 & 0x73300000) == 0 )
              goto LABEL_40;
            v26 = 1;
            if ( (v9 & 0x40000000) != 0 )
              v12 = *(_DWORD **)(a1 + 456);
            if ( (v9 & 0x70000000) != 0 )
            {
              v14 = v12[2];
              v23 = v14;
              v10 = 100 * v12[12 * (*v12 - 1) + 2] / v14;
              v24 = v10;
            }
            if ( (v9 & 0x3300000) != 0 )
              v25 = v13[5 * (*v13 - 1) + 1] * v10 / 0x64;
            else
              v25 = v10;
          }
          goto LABEL_39;
        }
        v17 = *(_DWORD **)(a1 + 248);
        if ( !v17 )
        {
          if ( !*(_QWORD *)(a1 + 392) )
            goto LABEL_40;
          v14 = *(_DWORD *)(a1 + 416);
          v26 = 3;
          v23 = v14;
          if ( !v14 )
          {
            GetRegistryDwordValue(
              (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
              (__int64)L"~MHz",
              &v23);
            v14 = v23;
          }
          v18 = *(_QWORD *)(a1 + 392);
          v29 = 100LL * *(_QWORD *)(a1 + 384) / v18;
          v19 = 100LL * *(_QWORD *)(a1 + 400) / v18;
          v20 = 100LL * *(_QWORD *)(a1 + 408);
          v24 = v19;
          v21 = v20 / v18;
          if ( !(_DWORD)v21 )
            LODWORD(v21) = 1;
          v25 = v21;
          if ( !(_DWORD)v19 )
            v24 = 1;
          goto LABEL_39;
        }
        v26 = 3;
        v29 = v17[25];
        v24 = v17[27];
        v25 = v17[28];
        v14 = v17[24];
      }
      v23 = v14;
LABEL_39:
      if ( v14 )
      {
LABEL_41:
        v32 = &v27;
        v33 = 4LL;
        v34 = &v28;
        v35 = 4LL;
        v36 = &v23;
        v37 = 4LL;
        v38 = &v29;
        v40 = &v24;
        v42 = &v25;
        v44 = &v26;
        v39 = 4LL;
        v41 = 4LL;
        v43 = 4LL;
        v45 = 4LL;
        EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, v8, 0LL, (ULONG)8, &UserData);
        LOBYTE(EventDescriptorAndProcessorId) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
                                                  WdfDriverGlobals,
                                                  *(_QWORD *)(a1 + 208));
        return (char)EventDescriptorAndProcessorId;
      }
LABEL_40:
      GetRegistryDwordValue(
        (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
        (__int64)L"~MHz",
        &v23);
      goto LABEL_41;
    }
  }
  return (char)EventDescriptorAndProcessorId;
}
