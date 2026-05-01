/*
 * XREFs of ?RmpProcContextEmptyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180012E00
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1800010E0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18000110C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800011A8 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     __security_check_cookie @ 0x18000B040 (__security_check_cookie.c)
 *     ?RmpProcContextPopulateMemoryStats@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@KPEAU_RM_PROC_METRICS_BUFFER@@@Z @ 0x180013610 (-RmpProcContextPopulateMemoryStats@@YAJPEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@KPEAU_RM_PROC_METRICS.c)
 *     ?RmpProcContextRemediatePhysical@@YA?AW4_RM_PROC_REMEDIATION_RESULT@@PEAU_RM_PROCESS_MANAGEMENT_CONTEXT@@PEAU_RM_PROC_METRICS_BUFFER@@PEA_K@Z @ 0x180013820 (-RmpProcContextRemediatePhysical@@YA-AW4_RM_PROC_REMEDIATION_RESULT@@PEAU_RM_PROCESS_MANAGEMENT_.c)
 *     ?RmpProcEntryEmpty@@YAXPEAU_RM_PROC_ENTRY@@_K@Z @ 0x180014088 (-RmpProcEntryEmpty@@YAXPEAU_RM_PROC_ENTRY@@_K@Z.c)
 *     ?RmpProcMetricsBufferCleanup@@YAXPEAU_RM_PROC_METRICS_BUFFER@@@Z @ 0x180014DC0 (-RmpProcMetricsBufferCleanup@@YAXPEAU_RM_PROC_METRICS_BUFFER@@@Z.c)
 *     ?RmpProcMetricsBufferReset@@YAXPEAU_RM_PROC_METRICS_BUFFER@@@Z @ 0x180014DE4 (-RmpProcMetricsBufferReset@@YAXPEAU_RM_PROC_METRICS_BUFFER@@@Z.c)
 *     CemRcObjectDereference @ 0x1800150BC (CemRcObjectDereference.c)
 *     CempListEntryRemoveAndClear @ 0x18001E5E0 (CempListEntryRemoveAndClear.c)
 *     CempLockAcquireExclusive @ 0x18001E644 (CempLockAcquireExclusive.c)
 */

void __fastcall RmpProcContextEmptyWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  char *v3; // r13
  __int64 v4; // rcx
  int v5; // r15d
  char *v6; // rbx
  int v7; // r14d
  int v8; // r12d
  int *v9; // rsi
  int v10; // eax
  char *v11; // rcx
  HANDLE *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  int v16; // edi
  __int64 v17; // r8
  __int64 v18; // rdx
  ULONGLONG TickCount64; // rdi
  __int64 v20; // r8
  ULONGLONG v21; // r15
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  int v25; // [rsp+38h] [rbp-D0h] BYREF
  int v26; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v27; // [rsp+40h] [rbp-C8h] BYREF
  char *v28; // [rsp+48h] [rbp-C0h] BYREF
  int v29; // [rsp+50h] [rbp-B8h] BYREF
  int v30; // [rsp+54h] [rbp-B4h] BYREF
  char *v31; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v32; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+70h] [rbp-98h] BYREF
  char v34[4]; // [rsp+78h] [rbp-90h] BYREF
  int v35; // [rsp+7Ch] [rbp-8Ch]
  char *v36; // [rsp+88h] [rbp-80h]
  char ProcessInformation[32]; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int64 v38; // [rsp+B8h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+F8h] [rbp-10h] BYREF
  int *v40; // [rsp+118h] [rbp+10h]
  __int64 v41; // [rsp+120h] [rbp+18h]
  int *v42; // [rsp+128h] [rbp+20h]
  __int64 v43; // [rsp+130h] [rbp+28h]
  void **v44; // [rsp+138h] [rbp+30h]
  __int64 v45; // [rsp+140h] [rbp+38h]

  v3 = a2;
  v31 = a2;
  if ( (unsigned int)dword_180032000 > 4 && tlgKeywordOn((__int64)a1, 2LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      v4,
      byte_18002B557);
  v5 = 0;
  v6 = v3 + 48;
  v7 = 0;
  v26 = 0;
  v28 = 0LL;
  LOBYTE(v8) = 5;
  v32 = 0LL;
  CempLockAcquireExclusive(v3 + 48, a2, a3);
  v9 = (int *)(v3 + 96);
  while ( 1 )
  {
    *v9 &= ~4u;
    v10 = *v9;
    if ( (*v9 & 1) != 0 )
      break;
    v11 = (char *)*((_QWORD *)v3 + 10);
    if ( v11 == v3 + 80 )
    {
      v12 = 0LL;
    }
    else
    {
      v12 = (HANDLE *)(v11 - 88);
      CempListEntryRemoveAndClear();
    }
    *((_DWORD *)v6 + 2) = 0;
    RtlReleaseSRWLockExclusive(v6);
    if ( v12 )
    {
      NtQueryInformationProcess(v12[5], ProcessVmCounters, ProcessInformation, 0x60u, 0LL);
      RmpProcEntryEmpty((struct _RM_PROC_ENTRY *)v12, v38);
      CemRcObjectDereference(v12);
      goto LABEL_11;
    }
    v29 = 24;
    v16 = NtQueryWnfStateData(&WNF_RM_MEMORY_MONITOR_USAGE_METRICS, 0LL, 0LL, &v27, v34, &v29);
    if ( v16 >= 0 )
    {
      v8 = v35;
      CempLockAcquireExclusive(v6, v15, v17);
      v10 = *v9 ^ (*v9 ^ (8 * v8)) & 0x38;
      *v9 = v10;
      if ( v8 >= 2 )
      {
        *((_DWORD *)v6 + 2) = 0;
        RtlReleaseSRWLockExclusive(v6);
        if ( v5 != (_DWORD)v27 || !v7 )
        {
          v28 = v36;
          goto LABEL_28;
        }
        if ( ((v7 - 2) & 0xFFFFFFFD) != 0 )
        {
LABEL_28:
          RmpProcMetricsBufferReset((struct _RM_PROC_METRICS_BUFFER *)&v32);
          v16 = RmpProcContextPopulateMemoryStats(
                  (struct _RM_PROCESS_MANAGEMENT_CONTEXT *)v3,
                  1u,
                  (struct _RM_PROC_METRICS_BUFFER *)&v32);
          if ( v16 >= 0 && !HIDWORD(v32) )
          {
            RmpProcMetricsBufferReset((struct _RM_PROC_METRICS_BUFFER *)&v32);
            v16 = RmpProcContextPopulateMemoryStats(
                    (struct _RM_PROCESS_MANAGEMENT_CONTEXT *)v3,
                    3u,
                    (struct _RM_PROC_METRICS_BUFFER *)&v32);
          }
          CempLockAcquireExclusive(v6, v22, v23);
          if ( v16 < 0 )
            goto LABEL_32;
          *((_DWORD *)v6 + 2) = 0;
          RtlReleaseSRWLockExclusive(v6);
          v5 = v27;
          v26 = v27;
          v7 = RmpProcContextRemediatePhysical(v3, &v32, &v28);
          if ( v7 == 1 )
          {
            CempLockAcquireExclusive(v6, v13, v14);
            v10 = *v9;
            if ( (*v9 & 4) == 0 )
            {
              v16 = -1073741197;
              goto LABEL_39;
            }
            v7 = 0;
          }
          else
          {
LABEL_11:
            CempLockAcquireExclusive(v6, v13, v14);
          }
        }
        else
        {
          TickCount64 = GetTickCount64();
          v21 = TickCount64 + 5000;
          if ( TickCount64 + 5000 >= TickCount64 )
          {
            do
            {
              RtlAcquireSRWLockShared(v6);
              v30 = *v9;
              if ( (v30 & 1) != 0 )
                v7 = 5;
              RtlReleaseSRWLockShared(v6);
              if ( v7 == 5 )
                break;
              v33 = -10000LL * (unsigned int)(v21 - TickCount64);
              RtlWaitOnAddress(v9, &v30, 4LL, &v33);
              TickCount64 = GetTickCount64();
            }
            while ( v21 > TickCount64 );
            v3 = v31;
          }
          CempLockAcquireExclusive(v6, v18, v20);
          v5 = v26;
          v7 = 0;
        }
      }
      else if ( (v10 & 4) == 0 )
      {
        v16 = 0;
        goto LABEL_39;
      }
    }
    else
    {
      CempLockAcquireExclusive(v6, v15, v17);
LABEL_32:
      v10 = *v9;
      if ( (*v9 & 4) == 0 )
        goto LABEL_39;
    }
  }
  v16 = -1073741077;
LABEL_39:
  *v9 = v10 & 0xFFFFFFFD;
  *((_DWORD *)v6 + 2) = 0;
  RtlReleaseSRWLockExclusive(v6);
  RmpProcMetricsBufferCleanup((struct _RM_PROC_METRICS_BUFFER *)&v32);
  if ( (unsigned int)dword_180032000 > 4 && tlgKeywordOn(v24, 3LL) )
  {
    v31 = v28;
    LOBYTE(v25) = v8;
    v44 = (void **)&v31;
    v26 = v16;
    v42 = &v25;
    v45 = 8LL;
    v40 = &v26;
    v43 = 1LL;
    v41 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_180032000,
      (unsigned __int8 *)dword_18002B3B1,
      0LL,
      0LL,
      5u,
      &v39);
  }
}
