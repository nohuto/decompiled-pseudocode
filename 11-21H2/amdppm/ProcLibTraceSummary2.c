/*
 * XREFs of ProcLibTraceSummary2 @ 0x1C0021A84
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C0020C40 (ProcLibTraceControlCallback.c)
 *     ProcLibDeviceStart @ 0x1C002BB68 (ProcLibDeviceStart.c)
 * Callees:
 *     ProcLibGetEventDescriptorAndProcessorId @ 0x1C0002744 (ProcLibGetEventDescriptorAndProcessorId.c)
 *     __security_check_cookie @ 0x1C0002C70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 *     GetRegistryDwordValue @ 0x1C00203E4 (GetRegistryDwordValue.c)
 */

char __fastcall ProcLibTraceSummary2(__int64 a1, char a2)
{
  void *v2; // r8
  void *v5; // rdx
  const EVENT_DESCRIPTOR *EventDescriptorAndProcessorId; // rax
  const EVENT_DESCRIPTOR *v7; // rdi
  unsigned int v8; // r10d
  unsigned int v9; // r8d
  __int64 v10; // r9
  int *v11; // rcx
  _DWORD *v12; // rdx
  _DWORD *v13; // r11
  int v14; // eax
  _DWORD *v15; // rcx
  _DWORD *v16; // rcx
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned int v22; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v23; // [rsp+34h] [rbp-65h] BYREF
  unsigned int v24; // [rsp+38h] [rbp-61h] BYREF
  int v25; // [rsp+3Ch] [rbp-5Dh] BYREF
  int v26; // [rsp+40h] [rbp-59h] BYREF
  int v27; // [rsp+44h] [rbp-55h] BYREF
  int v28; // [rsp+48h] [rbp-51h] BYREF
  int v29; // [rsp+4Ch] [rbp-4Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-49h] BYREF
  int *v31; // [rsp+60h] [rbp-39h]
  int v32; // [rsp+68h] [rbp-31h]
  int v33; // [rsp+6Ch] [rbp-2Dh]
  int *v34; // [rsp+70h] [rbp-29h]
  int v35; // [rsp+78h] [rbp-21h]
  int v36; // [rsp+7Ch] [rbp-1Dh]
  unsigned int *v37; // [rsp+80h] [rbp-19h]
  int v38; // [rsp+88h] [rbp-11h]
  int v39; // [rsp+8Ch] [rbp-Dh]
  int *v40; // [rsp+90h] [rbp-9h]
  int v41; // [rsp+98h] [rbp-1h]
  int v42; // [rsp+9Ch] [rbp+3h]
  unsigned int *v43; // [rsp+A0h] [rbp+7h]
  int v44; // [rsp+A8h] [rbp+Fh]
  int v45; // [rsp+ACh] [rbp+13h]
  unsigned int *v46; // [rsp+B0h] [rbp+17h]
  int v47; // [rsp+B8h] [rbp+1Fh]
  int v48; // [rsp+BCh] [rbp+23h]
  int *v49; // [rsp+C0h] [rbp+27h]
  int v50; // [rsp+C8h] [rbp+2Fh]
  int v51; // [rsp+CCh] [rbp+33h]

  v29 = 0;
  v2 = &PPM_ETW_SUMMARY2_HV;
  if ( a2 )
    v2 = &PPM_ETW_SUMMARY2_RUNDOWN_HV;
  v5 = &PPM_ETW_SUMMARY2;
  if ( a2 )
    v5 = &PPM_ETW_SUMMARY2_RUNDOWN;
  EventDescriptorAndProcessorId = (const EVENT_DESCRIPTOR *)ProcLibGetEventDescriptorAndProcessorId(
                                                              a1,
                                                              (__int64)v5,
                                                              (__int64)v2,
                                                              (__int64)&v29,
                                                              (__int64)&UserData);
  v7 = EventDescriptorAndProcessorId;
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
      v26 = 0;
      v8 = 100;
      v27 = 0;
      v9 = 0;
      v25 = 0;
      v10 = *(_QWORD *)(a1 + 280);
      v11 = *(int **)(a1 + 528);
      v12 = *(_DWORD **)(a1 + 448);
      v13 = *(_DWORD **)(a1 + 504);
      v28 = 100;
      v23 = 100;
      v24 = 100;
      v22 = 0;
      if ( (v10 & 0x300000300LL) != 0 )
      {
        v26 = *(_DWORD *)(a1 + 1132);
        v27 = ((v10 & 0x200000200LL) != 0) + 2;
      }
      else if ( (v10 & 0xE0000000000LL) != 0 )
      {
        v26 = *(_DWORD *)(*(_QWORD *)(a1 + 544) + 16LL);
        v27 = 4;
      }
      else if ( (v10 & 0x7F077) != 0 )
      {
        v14 = *v11;
        v26 = v14;
        v27 = 1;
        if ( !v14 || *((_BYTE *)v11 + 16) != 1 )
          v26 = v14 + 1;
      }
      if ( (v10 & 0x1000000000LL) != 0 )
      {
        v15 = *(_DWORD **)(a1 + 1192);
        if ( !v15 )
          goto LABEL_40;
        v25 = 4;
        v28 = v15[5];
        v23 = v15[6];
        v24 = v15[7];
        v9 = v15[4];
      }
      else
      {
        if ( (v10 & 0x8000000) == 0 )
        {
          if ( (v10 & 0x80000000) != 0 )
          {
            v25 = 2;
            v9 = *(_DWORD *)(qword_1C00119F0 + 28);
            v22 = v9;
            v23 = 100 * *(_DWORD *)(qword_1C00119F0 + 36) / v9;
            v24 = 100 * *(_DWORD *)(qword_1C00119F0 + 32) / v9;
          }
          else
          {
            if ( (v10 & 0x73300000) == 0 )
              goto LABEL_40;
            v25 = 1;
            if ( (v10 & 0x40000000) != 0 )
              v12 = *(_DWORD **)(a1 + 456);
            if ( (v10 & 0x70000000) != 0 )
            {
              v9 = v12[2];
              v22 = v9;
              v8 = 100 * v12[12 * (*v12 - 1) + 2] / v9;
              v23 = v8;
            }
            if ( (v10 & 0x3300000) != 0 )
              v24 = v8 * v13[5 * (*v13 - 1) + 1] / 0x64;
            else
              v24 = v8;
          }
          goto LABEL_39;
        }
        v16 = *(_DWORD **)(a1 + 248);
        if ( !v16 )
        {
          v17 = *(_QWORD *)(a1 + 392);
          if ( !v17 )
            goto LABEL_40;
          v9 = *(_DWORD *)(a1 + 416);
          v25 = 3;
          v22 = v9;
          if ( !v9 )
          {
            GetRegistryDwordValue(
              (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
              (__int64)L"~MHz",
              &v22);
            v17 = *(_QWORD *)(a1 + 392);
            v9 = v22;
          }
          v28 = 100LL * *(_QWORD *)(a1 + 384) / v17;
          v18 = 100LL * *(_QWORD *)(a1 + 400) / v17;
          v19 = 100LL * *(_QWORD *)(a1 + 408);
          v23 = v18;
          v20 = v19 / v17;
          if ( !(_DWORD)v20 )
            LODWORD(v20) = 1;
          v24 = v20;
          if ( !(_DWORD)v18 )
            v23 = 1;
          goto LABEL_39;
        }
        v25 = 3;
        v28 = v16[25];
        v23 = v16[27];
        v24 = v16[28];
        v9 = v16[24];
      }
      v22 = v9;
LABEL_39:
      if ( v9 )
      {
LABEL_41:
        v33 = 0;
        v36 = 0;
        v39 = 0;
        v42 = 0;
        v45 = 0;
        v48 = 0;
        v51 = 0;
        v31 = &v26;
        v34 = &v27;
        v37 = &v22;
        v40 = &v28;
        v43 = &v23;
        v46 = &v24;
        v49 = &v25;
        v32 = 4;
        v35 = 4;
        v38 = 4;
        v41 = 4;
        v44 = 4;
        v47 = 4;
        v50 = 4;
        EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, v7, 0LL, (ULONG)8, &UserData);
        LOBYTE(EventDescriptorAndProcessorId) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
                                                  WdfDriverGlobals,
                                                  *(_QWORD *)(a1 + 208));
        return (char)EventDescriptorAndProcessorId;
      }
LABEL_40:
      GetRegistryDwordValue(
        (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
        (__int64)L"~MHz",
        &v22);
      goto LABEL_41;
    }
  }
  return (char)EventDescriptorAndProcessorId;
}
