/*
 * XREFs of ProcLibTracePepPerfCapabilities @ 0x1C0021ED0
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C00217C0 (ProcLibTraceControlCallback.c)
 *     InitPepPerfStates @ 0x1C003A558 (InitPepPerfStates.c)
 * Callees:
 *     ProcLibGetProcessorNumber @ 0x1C0002BA8 (ProcLibGetProcessorNumber.c)
 *     __security_check_cookie @ 0x1C0002BE0 (__security_check_cookie.c)
 */

void __fastcall ProcLibTracePepPerfCapabilities(__int64 a1, char a2)
{
  const EVENT_DESCRIPTOR *v3; // r12
  char *v4; // rdi
  __int64 v5; // rbx
  unsigned int *v6; // r13
  _BYTE *Pool2; // r14
  unsigned int i; // r8d
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int8 *v11; // r15
  __int64 v12; // rax
  __int64 j; // r10
  char *v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  struct _PROCESSOR_NUMBER v18; // [rsp+38h] [rbp-D0h] BYREF
  int v19; // [rsp+3Ch] [rbp-CCh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int8 *p_Number; // [rsp+58h] [rbp-B0h]
  __int64 v22; // [rsp+60h] [rbp-A8h]
  __int64 v23; // [rsp+68h] [rbp-A0h]
  __int64 v24; // [rsp+70h] [rbp-98h]
  _BYTE *v25; // [rsp+78h] [rbp-90h]
  int v26; // [rsp+80h] [rbp-88h]
  int v27; // [rsp+84h] [rbp-84h]
  __int64 v28; // [rsp+88h] [rbp-80h]
  __int64 v29; // [rsp+90h] [rbp-78h]
  __int64 v30; // [rsp+98h] [rbp-70h]
  __int64 v31; // [rsp+A0h] [rbp-68h]
  __int64 v32; // [rsp+A8h] [rbp-60h]
  __int64 v33; // [rsp+B0h] [rbp-58h]
  __int64 v34; // [rsp+B8h] [rbp-50h]
  __int64 v35; // [rsp+C0h] [rbp-48h]
  __int64 v36; // [rsp+C8h] [rbp-40h]
  __int64 v37; // [rsp+D0h] [rbp-38h]
  __int64 v38; // [rsp+D8h] [rbp-30h]
  __int64 v39; // [rsp+E0h] [rbp-28h]
  __int64 v40; // [rsp+E8h] [rbp-20h]
  __int64 v41; // [rsp+F0h] [rbp-18h]
  char *v42; // [rsp+F8h] [rbp-10h]
  int v43; // [rsp+100h] [rbp-8h]
  int v44; // [rsp+104h] [rbp-4h]
  int *v45; // [rsp+108h] [rbp+0h]
  __int64 v46; // [rsp+110h] [rbp+8h]
  __int64 v47; // [rsp+118h] [rbp+10h]
  __int64 v48; // [rsp+120h] [rbp+18h]

  v19 = 0;
  v18 = 0;
  v3 = (const EVENT_DESCRIPTOR *)&PPM_ETW_PERF_CAPABILITIES;
  if ( a2 )
    v3 = &PPM_ETW_PERF_CAPABILITIES_RUNDOWN;
  v4 = 0LL;
  if ( EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, v3) )
  {
    v5 = *(_QWORD *)(a1 + 1192);
    if ( v5 )
    {
      if ( *(_QWORD *)(a1 + 1208) )
      {
        v6 = (unsigned int *)(a1 + 1128);
        Pool2 = (_BYTE *)ExAllocatePool2(256LL, (unsigned int)(10 * *(_DWORD *)(a1 + 1128)), 1919119952LL);
        if ( Pool2 )
        {
          for ( i = 0; i < *v6; *(_DWORD *)&Pool2[2 * v10 + 6] = *(unsigned __int8 *)(v5 + 8 * v9 + 60) )
          {
            v9 = i++;
            v10 = 5 * v9;
            *(_DWORD *)&Pool2[2 * v10] = *(_DWORD *)(v5 + 8 * v9 + 56) & 1;
            Pool2[2 * v10 + 4] = (*(_DWORD *)(v5 + 8 * v9 + 56) >> 1) & 3;
            Pool2[2 * v10 + 5] = (*(_DWORD *)(v5 + 8 * v9 + 56) >> 3) & 0xF;
          }
          v11 = (unsigned __int8 *)(v5 + 37);
          v12 = *(unsigned __int8 *)(v5 + 37);
          if ( (_BYTE)v12 )
          {
            v4 = (char *)ExAllocatePool2(256LL, 9 * v12, 1919119952LL);
            if ( !v4 )
            {
LABEL_15:
              ExFreePoolWithTag(Pool2, (ULONG)1919119952);
              if ( v4 )
                ExFreePoolWithTag(v4, (ULONG)1919119952);
              return;
            }
            for ( j = 0LL; (unsigned int)j < *v11; j = (unsigned int)(j + 1) )
            {
              v14 = &v4[8 * j];
              *(_DWORD *)&v14[j] = *(_DWORD *)(*(_QWORD *)(v5 + 40) + 24 * j);
              *(_DWORD *)&v14[j + 4] = *(_DWORD *)(*(_QWORD *)(v5 + 40) + 24 * j + 4);
              v14[j + 8] = *(_BYTE *)(*(_QWORD *)(v5 + 40) + 24 * j + 8);
            }
          }
          if ( ProcLibGetProcessorNumber(a1, &v18) >= 0 )
          {
            *(_QWORD *)&UserData.Size = 2LL;
            UserData.Ptr = (unsigned __int64)&v18;
            v22 = 1LL;
            p_Number = &v18.Number;
            v15 = *v6;
            v23 = a1 + 1128;
            v24 = 4LL;
            v25 = Pool2;
            v27 = 0;
            v29 = 4LL;
            v26 = 10 * v15;
            v16 = *(_QWORD *)(a1 + 1208);
            v28 = v5 + 4;
            v30 = v5 + 8;
            v32 = v5 + 12;
            v34 = v5 + 16;
            v36 = v16 + 12;
            v38 = v16 + 20;
            v31 = 4LL;
            v33 = 4LL;
            v35 = 4LL;
            v37 = 4LL;
            v39 = 4LL;
            v40 = v5 + 37;
            v41 = 1LL;
            v17 = *v11;
            v42 = v4;
            v44 = 0;
            v43 = 9 * v17;
            v19 = *(unsigned __int8 *)(v5 + 36);
            v45 = &v19;
            v46 = 4LL;
            v47 = v5;
            v48 = 1LL;
            EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Flink, v3, 0LL, (ULONG)14, &UserData);
          }
          goto LABEL_15;
        }
      }
    }
  }
}
