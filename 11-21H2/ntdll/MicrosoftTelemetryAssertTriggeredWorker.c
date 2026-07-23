/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x180002FFC
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredUM @ 0x180002FE0 (MicrosoftTelemetryAssertTriggeredUM.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180002E84 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x180002FB4 (_tlgCreate1Sz_char.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180004EA0 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     EtwNotificationUnregister @ 0x1800065F0 (EtwNotificationUnregister.c)
 *     GetImageTuple @ 0x18000B0FC (GetImageTuple.c)
 *     EtwEventRegister @ 0x180015AA0 (EtwEventRegister.c)
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     EtwEventProviderEnabled @ 0x18007B090 (EtwEventProviderEnabled.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x1800853EC (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     toupper @ 0x180099780 (toupper.c)
 *     ZwDelayExecution @ 0x1800A46F0 (ZwDelayExecution.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(__int64 a1)
{
  unsigned __int64 v1; // r14
  unsigned __int64 v3; // rdi
  int v4; // r15d
  unsigned int v5; // r13d
  __int64 v6; // r8
  __int64 i; // rbx
  _DWORD *Heap; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int8 ImageTuple; // al
  unsigned int v12; // r12d
  unsigned __int64 v13; // rcx
  int v14; // edi
  __int64 v15; // r14
  REGHANDLE v16; // rcx
  const ULONG *v17; // rdx
  int v18; // r8d
  int v19; // r9d
  int v20; // ecx
  const int *v21; // rdx
  const ULONG *v22; // rdx
  int v23; // ecx
  const ULONG *v24; // rdx
  int v25; // ecx
  REGHANDLE v26; // rcx
  char v27; // dl
  unsigned int v28; // r13d
  _BYTE *v29; // r12
  unsigned int v30; // ecx
  ULONG v31; // [rsp+28h] [rbp-E0h]
  unsigned int v32; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v33; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v34; // [rsp+40h] [rbp-C8h] BYREF
  int v35; // [rsp+44h] [rbp-C4h] BYREF
  int v36; // [rsp+48h] [rbp-C0h] BYREF
  int v37; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v38; // [rsp+50h] [rbp-B8h] BYREF
  int v39; // [rsp+54h] [rbp-B4h] BYREF
  ULONGLONG RegHandle; // [rsp+58h] [rbp-B0h] BYREF
  LARGE_INTEGER DelayInterval; // [rsp+60h] [rbp-A8h] BYREF
  GUID ProviderId; // [rsp+68h] [rbp-A0h] BYREF
  _EVENT_DATA_DESCRIPTOR v43; // [rsp+78h] [rbp-90h] BYREF
  LARGE_INTEGER *v44; // [rsp+98h] [rbp-70h]
  __int64 v45; // [rsp+A0h] [rbp-68h]
  int *v46; // [rsp+A8h] [rbp-60h]
  __int64 v47; // [rsp+B0h] [rbp-58h]
  unsigned int *v48; // [rsp+B8h] [rbp-50h]
  __int64 v49; // [rsp+C0h] [rbp-48h]
  _DWORD *v50; // [rsp+C8h] [rbp-40h]
  __int64 v51; // [rsp+D0h] [rbp-38h]
  _BYTE v52[16]; // [rsp+D8h] [rbp-30h] BYREF
  ULONGLONG *v53; // [rsp+E8h] [rbp-20h]
  __int64 v54; // [rsp+F0h] [rbp-18h]
  ULONGLONG *p_RegHandle; // [rsp+F8h] [rbp-10h]
  __int64 v56; // [rsp+100h] [rbp-8h]
  _QWORD v57[2]; // [rsp+108h] [rbp+0h] BYREF
  unsigned int *v58; // [rsp+118h] [rbp+10h]
  __int64 v59; // [rsp+120h] [rbp+18h]
  unsigned int *v60; // [rsp+128h] [rbp+20h]
  __int64 v61; // [rsp+130h] [rbp+28h]
  int *v62; // [rsp+138h] [rbp+30h]
  __int64 v63; // [rsp+140h] [rbp+38h]
  LARGE_INTEGER *p_DelayInterval; // [rsp+148h] [rbp+40h]
  __int64 v65; // [rsp+150h] [rbp+48h]
  _BYTE v66[272]; // [rsp+158h] [rbp+50h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  v5 = 0;
  RtlAcquireSRWLockExclusive(&g_MicrosoftTelemetryAssertLock);
  for ( i = g_MicrosoftTelemetryAssertsTriggeredList; i; i = *(_QWORD *)(i + 24) )
  {
    if ( *(_QWORD *)i == v3 )
      goto LABEL_5;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x20uLL);
  i = (__int64)Heap;
  if ( !Heap )
    goto LABEL_34;
  *(_QWORD *)Heap = v3;
  v9 = MEMORY[0x7FFE0320];
  v10 = MEMORY[0x7FFE0004];
  Heap[3] = 0;
  Heap[4] = 0;
  Heap[2] = ((unsigned __int64)(v9 * v10) >> 24) - 60001;
  *((_QWORD *)Heap + 3) = g_MicrosoftTelemetryAssertsTriggeredList;
  g_MicrosoftTelemetryAssertsTriggeredList = (__int64)Heap;
LABEL_5:
  ++*(_DWORD *)(i + 12);
  ++*(_DWORD *)(i + 16);
  if ( (unsigned int)((MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24) - *(_DWORD *)(i + 8) > 0xEA60 )
  {
    *(_DWORD *)(i + 8) = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    ImageTuple = GetImageTuple(v1, v66, v6, &v32, &v33);
    v12 = ImageTuple;
    v34 = ImageTuple;
    if ( ImageTuple && v3 >= v1 && (v13 = v1 + v33, v13 > v1) && v3 <= v13 )
    {
      v14 = v3 - v1;
      v15 = 0LL;
    }
    else
    {
      v15 = 0LL;
      v14 = 0;
    }
    if ( !*(_QWORD *)(a1 + 32) && ImageTuple )
      *(_QWORD *)(a1 + 32) = v66;
    if ( *(_DWORD *)(i + 16) == 1
      && !(unsigned int)TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801744C0) )
    {
      if ( dword_1801744C0 )
      {
        v27 = v66[0];
        v4 = 1;
        v35 = 1;
        v28 = 0;
        ProviderId.Data1 = 488056742;
        *(_DWORD *)&ProviderId.Data2 = 1311216328;
        *(_DWORD *)ProviderId.Data4 = -1961924164;
        *(_DWORD *)&ProviderId.Data4[4] = -1655403451;
        if ( v66[0] )
        {
          v29 = v66;
          do
          {
            *((_BYTE *)&ProviderId.Data1 + v15) += toupper(v27);
            v30 = v28 + 1;
            v27 = *++v29;
            v28 = v30 < 0x10 ? v30 : 0;
            v15 = (v15 + 1) & -(__int64)(v30 < 0x10);
          }
          while ( *v29 );
          v12 = v34;
        }
        if ( EtwEventRegister(&ProviderId, 0LL, 0LL, &RegHandle) )
        {
          v5 = 1;
        }
        else
        {
          if ( EtwEventProviderEnabled(RegHandle, 0, 0LL) )
            v4 = 0;
          EtwNotificationUnregister(RegHandle, 0LL);
          v5 = v35;
        }
      }
      v16 = ::RegHandle;
      ::RegHandle = 0LL;
      dword_1801744C0 = 0;
      EtwNotificationUnregister(v16, 0LL);
    }
    if ( (unsigned int)TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801744F8) )
      goto LABEL_32;
    if ( *(_BYTE *)(a1 + 24) )
    {
      if ( (unsigned int)dword_1801744F8 <= 5 || !tlgKeywordOn((__int64)&dword_1801744F8, 0x400000000000LL) )
        goto LABEL_31;
      v22 = (const ULONG *)v66;
      v34 = *(_DWORD *)a1;
      v44 = (LARGE_INTEGER *)&v34;
      v46 = &v35;
      v45 = 4LL;
      v35 = v14;
      v48 = &v32;
      v32 &= -(v12 != 0);
      v47 = 4LL;
      v49 = 4LL;
      v50 = &v33;
      v33 &= -(v12 != 0);
      v51 = 4LL;
      if ( !v12 )
        v22 = (const ULONG *)"<unknown>";
      tlgCreate1Sz_char((__int64)v52, v22);
      v23 = *(_DWORD *)(i + 12);
      v24 = *(const ULONG **)(a1 + 32);
      v53 = (ULONGLONG *)&v36;
      LODWORD(RegHandle) = *(_DWORD *)(i + 16);
      v36 = v23;
      p_RegHandle = &RegHandle;
      v54 = 4LL;
      v56 = 4LL;
      tlgCreate1Sz_char((__int64)v57, v24);
      v25 = *(_DWORD *)(a1 + 40);
      v58 = (unsigned int *)&v37;
      v21 = &dword_180141F89;
      v38 = *(_DWORD *)(a1 + 44);
      v60 = &v38;
      v62 = &v39;
      p_DelayInterval = &DelayInterval;
      v31 = 14;
      v37 = v25;
      v61 = 4LL;
      v39 = v4;
      v63 = 4LL;
      DelayInterval.LowPart = v5;
      v65 = 4LL;
    }
    else
    {
      if ( (unsigned int)dword_1801744F8 <= 5 || !tlgKeywordOn((__int64)&dword_1801744F8, 0x400000000000LL) )
        goto LABEL_31;
      v17 = (const ULONG *)v66;
      DelayInterval.LowPart = *(_DWORD *)a1;
      v44 = &DelayInterval;
      v46 = &v39;
      v45 = 4LL;
      v39 = v14;
      v48 = &v38;
      v38 = v12 != 0 ? v32 : 0;
      v47 = 4LL;
      v50 = &v37;
      v37 = v12 != 0 ? v33 : 0;
      v49 = 4LL;
      if ( !v12 )
        v17 = (const ULONG *)"<unknown>";
      v51 = 4LL;
      tlgCreate1Sz_char((__int64)v52, v17);
      v20 = *(_DWORD *)(i + 12);
      v53 = &RegHandle;
      v21 = (const int *)&unk_180142048;
      v36 = *(_DWORD *)(i + 16);
      p_RegHandle = (ULONGLONG *)&v36;
      v57[0] = &v34;
      v58 = &v32;
      v31 = 11;
      LODWORD(RegHandle) = v20;
      v54 = 4LL;
      v56 = 4LL;
      v34 = v4;
      v57[1] = 4LL;
      v32 = v5;
    }
    v59 = 4LL;
    tlgWriteTransfer_EtwEventWriteTransfer((int)&dword_1801744F8, (int)v21, v18, v19, v31, &v43);
LABEL_31:
    v26 = qword_180174518;
    qword_180174518 = 0LL;
    dword_1801744F8 = 0;
    EtwNotificationUnregister(v26, 0LL);
LABEL_32:
    if ( v5 && v4 && *(_BYTE *)(a1 + 48) )
    {
      DelayInterval.QuadPart = -10000000LL;
      ZwDelayExecution(0, &DelayInterval);
    }
    *(_DWORD *)(i + 12) = 0;
  }
LABEL_34:
  RtlReleaseSRWLockExclusive(&g_MicrosoftTelemetryAssertLock);
}
