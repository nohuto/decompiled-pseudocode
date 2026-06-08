/*
 * XREFs of ProcLibTraceSummary2 @ 0x1C002716C
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0027F5C (ProcLibDeviceStart.c)
 *     ProcLibTraceControlCallback @ 0x1C002EE50 (ProcLibTraceControlCallback.c)
 * Callees:
 *     ProcLibGetEventDescriptorAndProcessorId @ 0x1C00030EC (ProcLibGetEventDescriptorAndProcessorId.c)
 *     __security_check_cookie @ 0x1C0003770 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C00270EC (GetRegistryDwordValueNoDefault.c)
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
  int RegistryDwordValueNoDefault; // eax
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  _DWORD *v22; // rcx
  int v23; // eax
  unsigned int v24; // ecx
  unsigned int v26; // [rsp+38h] [rbp-69h] BYREF
  unsigned int v27; // [rsp+3Ch] [rbp-65h] BYREF
  unsigned int v28; // [rsp+40h] [rbp-61h] BYREF
  int v29; // [rsp+44h] [rbp-5Dh] BYREF
  int v30; // [rsp+48h] [rbp-59h] BYREF
  int v31; // [rsp+4Ch] [rbp-55h] BYREF
  int v32; // [rsp+50h] [rbp-51h] BYREF
  int v33; // [rsp+54h] [rbp-4Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-49h] BYREF
  int *v35; // [rsp+68h] [rbp-39h]
  __int64 v36; // [rsp+70h] [rbp-31h]
  int *v37; // [rsp+78h] [rbp-29h]
  __int64 v38; // [rsp+80h] [rbp-21h]
  unsigned int *v39; // [rsp+88h] [rbp-19h]
  __int64 v40; // [rsp+90h] [rbp-11h]
  int *v41; // [rsp+98h] [rbp-9h]
  __int64 v42; // [rsp+A0h] [rbp-1h]
  unsigned int *v43; // [rsp+A8h] [rbp+7h]
  __int64 v44; // [rsp+B0h] [rbp+Fh]
  unsigned int *v45; // [rsp+B8h] [rbp+17h]
  __int64 v46; // [rsp+C0h] [rbp+1Fh]
  int *v47; // [rsp+C8h] [rbp+27h]
  __int64 v48; // [rsp+D0h] [rbp+2Fh]

  v3 = &PPM_ETW_SUMMARY2_HV;
  v5 = a2 == 0;
  v33 = 0;
  v6 = &PPM_ETW_SUMMARY2;
  if ( !v5 )
    v3 = &PPM_ETW_SUMMARY2_RUNDOWN_HV;
  if ( a2 )
    v6 = &PPM_ETW_SUMMARY2_RUNDOWN;
  EventDescriptorAndProcessorId = (const EVENT_DESCRIPTOR *)ProcLibGetEventDescriptorAndProcessorId(
                                                              a1,
                                                              (__int64)v6,
                                                              (__int64)v3,
                                                              (__int64)&v33,
                                                              (__int64)&UserData);
  v8 = EventDescriptorAndProcessorId;
  if ( EventDescriptorAndProcessorId )
  {
    LOBYTE(EventDescriptorAndProcessorId) = EtwEventEnabled(
                                              (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink,
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
      v30 = 0;
      v14 = 0;
      v31 = 0;
      v29 = 0;
      v32 = 100;
      v27 = 100;
      v28 = 100;
      v26 = 0;
      if ( (v9 & 0x300000300LL) != 0 )
      {
        v30 = *(_DWORD *)(a1 + 1132);
        v31 = ((v9 & 0x200000200LL) != 0) + 2;
      }
      else if ( (v9 & 0xE0000000000LL) != 0 )
      {
        v30 = *(_DWORD *)(*(_QWORD *)(a1 + 544) + 16LL);
        v31 = 4;
      }
      else if ( (v9 & 0x7F077) != 0 )
      {
        v15 = *v11;
        v30 = v15;
        v31 = 1;
        if ( !v15 || *((_BYTE *)v11 + 16) != 1 )
          v30 = v15 + 1;
      }
      if ( (v9 & 0x1000000000LL) != 0 )
      {
        v22 = *(_DWORD **)(a1 + 1192);
        if ( !v22 )
          goto LABEL_44;
        v29 = 4;
        v32 = v22[6];
        v27 = v22[7];
        v28 = v22[8];
        v14 = v22[5];
      }
      else
      {
        if ( (v9 & 0x8000000) == 0 )
        {
          if ( (v9 & 0x80000000) != 0 )
          {
            v29 = 2;
            v14 = *(_DWORD *)(qword_1C001F5E0 + 28);
            v26 = v14;
            v27 = 100 * *(_DWORD *)(qword_1C001F5E0 + 36) / v14;
            v28 = 100 * *(_DWORD *)(qword_1C001F5E0 + 32) / v14;
          }
          else
          {
            if ( (v9 & 0x73300000) == 0 )
              goto LABEL_44;
            v29 = 1;
            if ( (v9 & 0x40000000) != 0 )
              v12 = *(_DWORD **)(a1 + 456);
            if ( (v9 & 0x70000000) != 0 )
            {
              v14 = v12[2];
              v26 = v14;
              v10 = 100 * v12[12 * (*v12 - 1) + 2] / v14;
              v27 = v10;
            }
            if ( (v9 & 0x3300000) != 0 )
              v28 = v13[5 * (*v13 - 1) + 1] * v10 / 0x64;
            else
              v28 = v10;
          }
          goto LABEL_24;
        }
        v16 = *(_DWORD **)(a1 + 248);
        if ( !v16 )
        {
          if ( !*(_QWORD *)(a1 + 392) )
            goto LABEL_44;
          v14 = *(_DWORD *)(a1 + 416);
          v29 = 3;
          v26 = v14;
          if ( !v14 )
          {
            RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                            (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                                            (__int64)L"~MHz",
                                            (__int64)&v26);
            v14 = v26;
            if ( RegistryDwordValueNoDefault < 0 )
              v14 = 0;
            v26 = v14;
          }
          v18 = *(_QWORD *)(a1 + 392);
          v32 = 100LL * *(_QWORD *)(a1 + 384) / v18;
          v19 = 100LL * *(_QWORD *)(a1 + 400) / v18;
          v20 = 100LL * *(_QWORD *)(a1 + 408);
          v27 = v19;
          v21 = v20 / v18;
          if ( !(_DWORD)v21 )
            LODWORD(v21) = 1;
          v28 = v21;
          if ( !(_DWORD)v19 )
            v27 = 1;
LABEL_24:
          if ( v14 )
          {
LABEL_25:
            v35 = &v30;
            v36 = 4LL;
            v37 = &v31;
            v38 = 4LL;
            v39 = &v26;
            v40 = 4LL;
            v41 = &v32;
            v43 = &v27;
            v45 = &v28;
            v47 = &v29;
            v42 = 4LL;
            v44 = 4LL;
            v46 = 4LL;
            v48 = 4LL;
            EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, v8, 0LL, (ULONG)8, &UserData);
            LOBYTE(EventDescriptorAndProcessorId) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
                                                      WdfDriverGlobals,
                                                      *(_QWORD *)(a1 + 208));
            return (char)EventDescriptorAndProcessorId;
          }
LABEL_44:
          v23 = GetRegistryDwordValueNoDefault(
                  (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                  (__int64)L"~MHz",
                  (__int64)&v26);
          v24 = v26;
          if ( v23 < 0 )
            v24 = 0;
          v26 = v24;
          goto LABEL_25;
        }
        v29 = 3;
        v32 = v16[25];
        v27 = v16[27];
        v28 = v16[28];
        v14 = v16[24];
      }
      v26 = v14;
      goto LABEL_24;
    }
  }
  return (char)EventDescriptorAndProcessorId;
}
