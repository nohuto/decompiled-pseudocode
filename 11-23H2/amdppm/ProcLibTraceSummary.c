/*
 * XREFs of ProcLibTraceSummary @ 0x1C003CB6C
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C00217C0 (ProcLibTraceControlCallback.c)
 * Callees:
 *     ProcLibGetEventDescriptorAndProcessorId @ 0x1C0002360 (ProcLibGetEventDescriptorAndProcessorId.c)
 *     __security_check_cookie @ 0x1C0002BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C510 (_guard_dispatch_icall_nop.c)
 */

char __fastcall ProcLibTraceSummary(_QWORD *a1)
{
  _BYTE *v2; // rdi
  void *v3; // rsi
  const EVENT_DESCRIPTOR *EventDescriptorAndProcessorId; // rax
  const EVENT_DESCRIPTOR *v5; // r13
  __int64 v6; // rax
  ULONG v7; // ebx
  unsigned int *v8; // r8
  unsigned int *v9; // r15
  int *v10; // r10
  unsigned int v11; // ecx
  __int64 v12; // rdx
  unsigned __int8 v13; // r12
  _BYTE *Pool2; // rax
  unsigned int v15; // edx
  unsigned int v16; // r8d
  int *v17; // r10
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // eax
  __int64 v21; // r9
  unsigned int i; // r10d
  __int64 v23; // rcx
  unsigned int v25; // [rsp+38h] [rbp-59h] BYREF
  unsigned int v26; // [rsp+3Ch] [rbp-55h] BYREF
  int v27; // [rsp+40h] [rbp-51h] BYREF
  int v28; // [rsp+44h] [rbp-4Dh] BYREF
  int *v29; // [rsp+48h] [rbp-49h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-39h] BYREF
  int *v31; // [rsp+68h] [rbp-29h]
  __int64 v32; // [rsp+70h] [rbp-21h]
  unsigned int *v33; // [rsp+78h] [rbp-19h]
  __int64 v34; // [rsp+80h] [rbp-11h]
  int *v35; // [rsp+88h] [rbp-9h]
  __int64 v36; // [rsp+90h] [rbp-1h]
  _BYTE *v37; // [rsp+98h] [rbp+7h]
  unsigned int v38; // [rsp+A0h] [rbp+Fh]
  int v39; // [rsp+A4h] [rbp+13h]

  v28 = 0;
  v2 = 0LL;
  v3 = 0LL;
  EventDescriptorAndProcessorId = (const EVENT_DESCRIPTOR *)ProcLibGetEventDescriptorAndProcessorId(
                                                              (__int64)a1,
                                                              (__int64)&PPM_ETW_SUMMARY_RUNDOWN,
                                                              (__int64)&PPM_ETW_SUMMARY_RUNDOWN_HV,
                                                              (__int64)&v28,
                                                              (__int64)&UserData);
  v5 = EventDescriptorAndProcessorId;
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
      v6 = a1[35];
      v7 = 4;
      v8 = (unsigned int *)a1[66];
      v9 = (unsigned int *)a1[56];
      v10 = (int *)a1[63];
      v11 = 0;
      v12 = 0LL;
      v13 = 0;
      v29 = (int *)v8;
      v25 = 0;
      v26 = 0;
      v27 = 0;
      if ( (v6 & 0x7F077) != 0 )
      {
        v11 = *v8;
        v25 = v11;
        if ( !v11 || *((_BYTE *)v8 + 16) != 1 )
        {
          ++v11;
          v13 = 1;
          v25 = v11;
        }
      }
      if ( (v6 & 0x70000000) != 0 )
      {
        if ( (v6 & 0x40000000) != 0 )
          v9 = (unsigned int *)a1[57];
        v12 = *v9;
        v26 = *v9;
      }
      if ( (v6 & 0x3300000) != 0 )
        v27 = *v10;
      v32 = 4LL;
      v31 = (int *)&v25;
      v33 = &v26;
      v35 = &v27;
      v34 = 4LL;
      v36 = 4LL;
      if ( (v6 & 0x7F077) != 0 )
      {
        Pool2 = (_BYTE *)ExAllocatePool2(256LL, v11, 1919119952LL);
        v2 = Pool2;
        if ( !Pool2 )
        {
LABEL_31:
          LOBYTE(EventDescriptorAndProcessorId) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
                                                    WdfDriverGlobals,
                                                    a1[26]);
          return (char)EventDescriptorAndProcessorId;
        }
        if ( v13 )
          *Pool2 = 1;
        v15 = v25;
        v16 = 0;
        if ( v25 != v13 )
        {
          v17 = v29;
          do
          {
            v18 = v16;
            v19 = v13 + v16++;
            v2[v19] = v17[5 * v18 + 4];
            v15 = v25;
          }
          while ( v16 < v25 - v13 );
        }
        v38 = v15;
        v7 = 5;
        v12 = v26;
        v37 = v2;
        v39 = 0;
      }
      if ( (_DWORD)v12 )
      {
        v3 = (void *)ExAllocatePool2(256LL, 8 * v12, 1919119952LL);
        if ( !v3 )
        {
LABEL_27:
          if ( v2 )
            ExFreePoolWithTag(v2, (ULONG)1919119952);
          if ( v3 )
            ExFreePoolWithTag(v3, (ULONG)1919119952);
          goto LABEL_31;
        }
        v20 = v26;
        v21 = 0LL;
        for ( i = v9[2]; (unsigned int)v21 < v26; v20 = v26 )
        {
          *((_DWORD *)v3 + 2 * v21) = v9[12 * v21 + 2];
          *((_DWORD *)v3 + 2 * v21 + 1) = 100 * v9[12 * v21 + 2] / i;
          v21 = (unsigned int)(v21 + 1);
        }
        v23 = 2LL * (unsigned int)v7;
        *(&UserData.Reserved + 2 * v23) = 0;
        ++v7;
        *(&UserData.Ptr + v23) = (unsigned __int64)v3;
        *(&UserData.Size + 2 * v23) = 8 * v20;
      }
      EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, v5, 0LL, v7, &UserData);
      goto LABEL_27;
    }
  }
  return (char)EventDescriptorAndProcessorId;
}
