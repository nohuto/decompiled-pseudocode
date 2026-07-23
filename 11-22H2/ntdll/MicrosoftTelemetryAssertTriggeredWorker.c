/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x18007BFAC
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredUM @ 0x18007BF90 (MicrosoftTelemetryAssertTriggeredUM.c)
 * Callees:
 *     EtwEventProviderEnabled @ 0x180030150 (EtwEventProviderEnabled.c)
 *     EtwNotificationUnregister @ 0x1800301E0 (EtwNotificationUnregister.c)
 *     EtwEventRegister @ 0x180031B90 (EtwEventRegister.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033DA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     _tlgCreate1Sz_char @ 0x18007C488 (_tlgCreate1Sz_char.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18007C4B4 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18007C6EC (_tlgKeywordOn.c)
 *     GetImageTuple @ 0x18007C718 (GetImageTuple.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x18007F61C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     toupper @ 0x180094840 (toupper.c)
 *     ZwDelayExecution @ 0x18009F470 (ZwDelayExecution.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(__int64 a1)
{
  unsigned __int64 v1; // r14
  unsigned __int64 v3; // rdi
  int v4; // r15d
  unsigned int v5; // r13d
  __int64 v6; // r8
  __int64 i; // rbx
  unsigned __int8 ImageTuple; // al
  unsigned int v9; // r12d
  unsigned __int64 v10; // rcx
  int v11; // edi
  __int64 v12; // r14
  REGHANDLE v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  const char *v16; // rdx
  int v17; // r8d
  int v18; // r9d
  int v19; // ecx
  const int *v20; // rdx
  REGHANDLE v21; // rcx
  _DWORD *Heap; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  const char *v25; // rdx
  int v26; // ecx
  __int64 v27; // rdx
  int v28; // ecx
  char v29; // dl
  unsigned int v30; // r13d
  _BYTE *v31; // r12
  unsigned int v32; // ecx
  ULONG v33; // [rsp+28h] [rbp-E0h]
  unsigned int v34; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v35; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v36; // [rsp+40h] [rbp-C8h] BYREF
  int v37; // [rsp+44h] [rbp-C4h] BYREF
  int v38; // [rsp+48h] [rbp-C0h] BYREF
  int v39; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v40; // [rsp+50h] [rbp-B8h] BYREF
  int v41; // [rsp+54h] [rbp-B4h] BYREF
  ULONGLONG RegHandle; // [rsp+58h] [rbp-B0h] BYREF
  LARGE_INTEGER DelayInterval; // [rsp+60h] [rbp-A8h] BYREF
  GUID ProviderId; // [rsp+68h] [rbp-A0h] BYREF
  _EVENT_DATA_DESCRIPTOR v45; // [rsp+78h] [rbp-90h] BYREF
  LARGE_INTEGER *v46; // [rsp+98h] [rbp-70h]
  __int64 v47; // [rsp+A0h] [rbp-68h]
  int *v48; // [rsp+A8h] [rbp-60h]
  __int64 v49; // [rsp+B0h] [rbp-58h]
  unsigned int *v50; // [rsp+B8h] [rbp-50h]
  __int64 v51; // [rsp+C0h] [rbp-48h]
  _DWORD *v52; // [rsp+C8h] [rbp-40h]
  __int64 v53; // [rsp+D0h] [rbp-38h]
  _BYTE v54[16]; // [rsp+D8h] [rbp-30h] BYREF
  ULONGLONG *v55; // [rsp+E8h] [rbp-20h]
  __int64 v56; // [rsp+F0h] [rbp-18h]
  ULONGLONG *p_RegHandle; // [rsp+F8h] [rbp-10h]
  __int64 v58; // [rsp+100h] [rbp-8h]
  _QWORD v59[2]; // [rsp+108h] [rbp+0h] BYREF
  unsigned int *v60; // [rsp+118h] [rbp+10h]
  __int64 v61; // [rsp+120h] [rbp+18h]
  unsigned int *v62; // [rsp+128h] [rbp+20h]
  __int64 v63; // [rsp+130h] [rbp+28h]
  int *v64; // [rsp+138h] [rbp+30h]
  __int64 v65; // [rsp+140h] [rbp+38h]
  LARGE_INTEGER *p_DelayInterval; // [rsp+148h] [rbp+40h]
  __int64 v67; // [rsp+150h] [rbp+48h]
  _BYTE v68[272]; // [rsp+158h] [rbp+50h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  v5 = 0;
  RtlAcquireSRWLockExclusive(&g_MicrosoftTelemetryAssertLock);
  for ( i = g_MicrosoftTelemetryAssertsTriggeredList; i; i = *(_QWORD *)(i + 24) )
  {
    if ( *(_QWORD *)i == v3 )
      goto LABEL_4;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x20uLL);
  i = (__int64)Heap;
  if ( !Heap )
    goto LABEL_5;
  *(_QWORD *)Heap = v3;
  v23 = MEMORY[0x7FFE0320];
  v24 = MEMORY[0x7FFE0004];
  Heap[3] = 0;
  Heap[4] = 0;
  Heap[2] = ((unsigned __int64)(v23 * v24) >> 24) - 60001;
  *((_QWORD *)Heap + 3) = g_MicrosoftTelemetryAssertsTriggeredList;
  g_MicrosoftTelemetryAssertsTriggeredList = (__int64)Heap;
LABEL_4:
  ++*(_DWORD *)(i + 12);
  ++*(_DWORD *)(i + 16);
  if ( (unsigned int)((MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24) - *(_DWORD *)(i + 8) <= 0xEA60 )
    goto LABEL_5;
  *(_DWORD *)(i + 8) = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
  ImageTuple = GetImageTuple(v1, v68, v6, &v34, &v35);
  v9 = ImageTuple;
  v36 = ImageTuple;
  if ( ImageTuple && v3 >= v1 && (v10 = v1 + v35, v10 > v1) && v3 <= v10 )
  {
    v11 = v3 - v1;
    v12 = 0LL;
  }
  else
  {
    v12 = 0LL;
    v11 = 0;
  }
  if ( !*(_QWORD *)(a1 + 32) && ImageTuple )
    *(_QWORD *)(a1 + 32) = v68;
  if ( *(_DWORD *)(i + 16) == 1
    && !(unsigned int)TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_18017E420) )
  {
    if ( dword_18017E420 )
    {
      v29 = v68[0];
      v4 = 1;
      v37 = 1;
      v30 = 0;
      ProviderId.Data1 = 488056742;
      *(_DWORD *)&ProviderId.Data2 = 1311216328;
      *(_DWORD *)ProviderId.Data4 = -1961924164;
      *(_DWORD *)&ProviderId.Data4[4] = -1655403451;
      if ( v68[0] )
      {
        v31 = v68;
        do
        {
          *((_BYTE *)&ProviderId.Data1 + v12) += toupper(v29);
          v32 = v30 + 1;
          v29 = *++v31;
          v30 = v32 < 0x10 ? v32 : 0;
          v12 = (v12 + 1) & -(__int64)(v32 < 0x10);
        }
        while ( *v31 );
        v9 = v36;
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
        v5 = v37;
      }
    }
    v13 = ::RegHandle;
    ::RegHandle = 0LL;
    dword_18017E420 = 0;
    EtwNotificationUnregister(v13, 0LL);
  }
  if ( !(unsigned int)TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_18017E458) )
  {
    if ( *(_BYTE *)(a1 + 24) )
    {
      if ( (unsigned int)dword_18017E458 <= 5
        || !(unsigned __int8)tlgKeywordOn(&dword_18017E458, 0x400000000000LL, v14, v15) )
      {
        goto LABEL_26;
      }
      v25 = v68;
      v36 = *(_DWORD *)a1;
      v46 = (LARGE_INTEGER *)&v36;
      v48 = &v37;
      v47 = 4LL;
      v37 = v11;
      v50 = &v34;
      v34 &= -(v9 != 0);
      v49 = 4LL;
      v51 = 4LL;
      v52 = &v35;
      v35 &= -(v9 != 0);
      v53 = 4LL;
      if ( !v9 )
        v25 = "<unknown>";
      tlgCreate1Sz_char(v54, v25);
      v26 = *(_DWORD *)(i + 12);
      v27 = *(_QWORD *)(a1 + 32);
      v55 = (ULONGLONG *)&v38;
      LODWORD(RegHandle) = *(_DWORD *)(i + 16);
      v38 = v26;
      p_RegHandle = &RegHandle;
      v56 = 4LL;
      v58 = 4LL;
      tlgCreate1Sz_char(v59, v27);
      v28 = *(_DWORD *)(a1 + 40);
      v60 = (unsigned int *)&v39;
      v20 = (const int *)&unk_18014B467;
      v40 = *(_DWORD *)(a1 + 44);
      v62 = &v40;
      v64 = &v41;
      p_DelayInterval = &DelayInterval;
      v33 = 14;
      v39 = v28;
      v63 = 4LL;
      v41 = v4;
      v65 = 4LL;
      DelayInterval.LowPart = v5;
      v67 = 4LL;
    }
    else
    {
      if ( (unsigned int)dword_18017E458 <= 5
        || !(unsigned __int8)tlgKeywordOn(&dword_18017E458, 0x400000000000LL, v14, v15) )
      {
        goto LABEL_26;
      }
      v16 = v68;
      DelayInterval.LowPart = *(_DWORD *)a1;
      v46 = &DelayInterval;
      v48 = &v41;
      v47 = 4LL;
      v41 = v11;
      v50 = &v40;
      v40 = v9 != 0 ? v34 : 0;
      v49 = 4LL;
      v52 = &v39;
      v39 = v9 != 0 ? v35 : 0;
      v51 = 4LL;
      if ( !v9 )
        v16 = "<unknown>";
      v53 = 4LL;
      tlgCreate1Sz_char(v54, v16);
      v19 = *(_DWORD *)(i + 12);
      v55 = &RegHandle;
      v20 = &dword_18014B526;
      v38 = *(_DWORD *)(i + 16);
      p_RegHandle = (ULONGLONG *)&v38;
      v59[0] = &v36;
      v60 = &v34;
      v33 = 11;
      LODWORD(RegHandle) = v19;
      v56 = 4LL;
      v58 = 4LL;
      v36 = v4;
      v59[1] = 4LL;
      v34 = v5;
    }
    v61 = 4LL;
    tlgWriteTransfer_EtwEventWriteTransfer((int)&dword_18017E458, (int)v20, v17, v18, v33, &v45);
LABEL_26:
    v21 = qword_18017E478;
    qword_18017E478 = 0LL;
    dword_18017E458 = 0;
    EtwNotificationUnregister(v21, 0LL);
  }
  if ( v5 && v4 && *(_BYTE *)(a1 + 48) )
  {
    DelayInterval.QuadPart = -10000000LL;
    ZwDelayExecution(0, &DelayInterval);
  }
  *(_DWORD *)(i + 12) = 0;
LABEL_5:
  RtlReleaseSRWLockExclusive(&g_MicrosoftTelemetryAssertLock);
}
