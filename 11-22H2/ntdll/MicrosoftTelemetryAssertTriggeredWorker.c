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

signed __int64 __fastcall MicrosoftTelemetryAssertTriggeredWorker(__int64 a1)
{
  unsigned __int64 v1; // r14
  unsigned __int64 v3; // rdi
  int v4; // r15d
  int v5; // r13d
  __int64 v6; // r8
  __int64 i; // rbx
  unsigned __int8 ImageTuple; // al
  int v10; // r12d
  unsigned __int64 v11; // rcx
  int v12; // edi
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  const char *v17; // rdx
  int v18; // r8d
  int v19; // r9d
  int v20; // ecx
  void *v21; // rdx
  __int64 v22; // rcx
  __int64 Heap; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  const char *v26; // rdx
  int v27; // ecx
  __int64 v28; // rdx
  int v29; // ecx
  char v30; // dl
  unsigned int v31; // r13d
  _BYTE *v32; // r12
  unsigned int v33; // ecx
  int v34; // [rsp+28h] [rbp-E0h]
  int v35; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v36; // [rsp+3Ch] [rbp-CCh] BYREF
  int v37; // [rsp+40h] [rbp-C8h] BYREF
  int v38; // [rsp+44h] [rbp-C4h] BYREF
  int v39; // [rsp+48h] [rbp-C0h] BYREF
  int v40; // [rsp+4Ch] [rbp-BCh] BYREF
  int v41; // [rsp+50h] [rbp-B8h] BYREF
  int v42; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v43; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v44; // [rsp+60h] [rbp-A8h] BYREF
  _DWORD v45[4]; // [rsp+68h] [rbp-A0h] BYREF
  char v46[32]; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v47; // [rsp+98h] [rbp-70h]
  __int64 v48; // [rsp+A0h] [rbp-68h]
  int *v49; // [rsp+A8h] [rbp-60h]
  __int64 v50; // [rsp+B0h] [rbp-58h]
  int *v51; // [rsp+B8h] [rbp-50h]
  __int64 v52; // [rsp+C0h] [rbp-48h]
  _DWORD *v53; // [rsp+C8h] [rbp-40h]
  __int64 v54; // [rsp+D0h] [rbp-38h]
  _BYTE v55[16]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 *v56; // [rsp+E8h] [rbp-20h]
  __int64 v57; // [rsp+F0h] [rbp-18h]
  __int64 *v58; // [rsp+F8h] [rbp-10h]
  __int64 v59; // [rsp+100h] [rbp-8h]
  _QWORD v60[2]; // [rsp+108h] [rbp+0h] BYREF
  int *v61; // [rsp+118h] [rbp+10h]
  __int64 v62; // [rsp+120h] [rbp+18h]
  int *v63; // [rsp+128h] [rbp+20h]
  __int64 v64; // [rsp+130h] [rbp+28h]
  int *v65; // [rsp+138h] [rbp+30h]
  __int64 v66; // [rsp+140h] [rbp+38h]
  __int64 *v67; // [rsp+148h] [rbp+40h]
  __int64 v68; // [rsp+150h] [rbp+48h]
  _BYTE v69[272]; // [rsp+158h] [rbp+50h] BYREF

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
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 32LL);
  i = Heap;
  if ( !Heap )
    return RtlReleaseSRWLockExclusive(&g_MicrosoftTelemetryAssertLock);
  *(_QWORD *)Heap = v3;
  v24 = MEMORY[0x7FFE0320];
  v25 = MEMORY[0x7FFE0004];
  *(_DWORD *)(Heap + 12) = 0;
  *(_DWORD *)(Heap + 16) = 0;
  *(_DWORD *)(Heap + 8) = ((unsigned __int64)(v24 * v25) >> 24) - 60001;
  *(_QWORD *)(Heap + 24) = g_MicrosoftTelemetryAssertsTriggeredList;
  g_MicrosoftTelemetryAssertsTriggeredList = Heap;
LABEL_4:
  ++*(_DWORD *)(i + 12);
  ++*(_DWORD *)(i + 16);
  if ( (unsigned int)((MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24) - *(_DWORD *)(i + 8) <= 0xEA60 )
    return RtlReleaseSRWLockExclusive(&g_MicrosoftTelemetryAssertLock);
  *(_DWORD *)(i + 8) = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
  ImageTuple = GetImageTuple(v1, v69, v6, &v35, &v36);
  v10 = ImageTuple;
  v37 = ImageTuple;
  if ( ImageTuple && v3 >= v1 && (v11 = v1 + v36, v11 > v1) && v3 <= v11 )
  {
    v12 = v3 - v1;
    v13 = 0LL;
  }
  else
  {
    v13 = 0LL;
    v12 = 0;
  }
  if ( !*(_QWORD *)(a1 + 32) && ImageTuple )
    *(_QWORD *)(a1 + 32) = v69;
  if ( *(_DWORD *)(i + 16) == 1
    && !(unsigned int)TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_18017E420) )
  {
    if ( dword_18017E420 )
    {
      v30 = v69[0];
      v4 = 1;
      v38 = 1;
      v31 = 0;
      v45[0] = 488056742;
      v45[1] = 1311216328;
      v45[2] = -1961924164;
      v45[3] = -1655403451;
      if ( v69[0] )
      {
        v32 = v69;
        do
        {
          *((_BYTE *)v45 + v13) += toupper(v30);
          v33 = v31 + 1;
          v30 = *++v32;
          v31 = v33 < 0x10 ? v33 : 0;
          v13 = (v13 + 1) & -(__int64)(v33 < 0x10);
        }
        while ( *v32 );
        v10 = v37;
      }
      if ( (unsigned int)EtwEventRegister((int)v45, 0LL, 0LL, (__int64)&v43) )
      {
        v5 = 1;
      }
      else
      {
        if ( EtwEventProviderEnabled(v43, 0, 0LL) )
          v4 = 0;
        EtwNotificationUnregister(v43, 0LL);
        v5 = v38;
      }
    }
    v14 = qword_18017E440;
    qword_18017E440 = 0LL;
    dword_18017E420 = 0;
    EtwNotificationUnregister(v14, 0LL);
  }
  if ( !(unsigned int)TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_18017E458) )
  {
    if ( *(_BYTE *)(a1 + 24) )
    {
      if ( (unsigned int)dword_18017E458 <= 5
        || !(unsigned __int8)tlgKeywordOn(&dword_18017E458, 0x400000000000LL, v15, v16) )
      {
        goto LABEL_26;
      }
      v26 = v69;
      v37 = *(_DWORD *)a1;
      v47 = (__int64 *)&v37;
      v49 = &v38;
      v48 = 4LL;
      v38 = v12;
      v51 = &v35;
      v35 = v10 != 0 ? v35 : 0;
      v50 = 4LL;
      v52 = 4LL;
      v53 = &v36;
      v36 &= -(v10 != 0);
      v54 = 4LL;
      if ( !v10 )
        v26 = "<unknown>";
      tlgCreate1Sz_char(v55, v26);
      v27 = *(_DWORD *)(i + 12);
      v28 = *(_QWORD *)(a1 + 32);
      v56 = (__int64 *)&v39;
      LODWORD(v43) = *(_DWORD *)(i + 16);
      v39 = v27;
      v58 = &v43;
      v57 = 4LL;
      v59 = 4LL;
      tlgCreate1Sz_char(v60, v28);
      v29 = *(_DWORD *)(a1 + 40);
      v61 = &v40;
      v21 = &unk_18014B467;
      v41 = *(_DWORD *)(a1 + 44);
      v63 = &v41;
      v65 = &v42;
      v67 = &v44;
      v34 = 14;
      v40 = v29;
      v64 = 4LL;
      v42 = v4;
      v66 = 4LL;
      LODWORD(v44) = v5;
      v68 = 4LL;
    }
    else
    {
      if ( (unsigned int)dword_18017E458 <= 5
        || !(unsigned __int8)tlgKeywordOn(&dword_18017E458, 0x400000000000LL, v15, v16) )
      {
        goto LABEL_26;
      }
      v17 = v69;
      LODWORD(v44) = *(_DWORD *)a1;
      v47 = &v44;
      v49 = &v42;
      v48 = 4LL;
      v42 = v12;
      v51 = &v41;
      v41 = v10 != 0 ? v35 : 0;
      v50 = 4LL;
      v53 = &v40;
      v40 = v10 != 0 ? v36 : 0;
      v52 = 4LL;
      if ( !v10 )
        v17 = "<unknown>";
      v54 = 4LL;
      tlgCreate1Sz_char(v55, v17);
      v20 = *(_DWORD *)(i + 12);
      v56 = &v43;
      v21 = &unk_18014B526;
      v39 = *(_DWORD *)(i + 16);
      v58 = (__int64 *)&v39;
      v60[0] = &v37;
      v61 = &v35;
      v34 = 11;
      LODWORD(v43) = v20;
      v57 = 4LL;
      v59 = 4LL;
      v37 = v4;
      v60[1] = 4LL;
      v35 = v5;
    }
    v62 = 4LL;
    tlgWriteTransfer_EtwEventWriteTransfer((unsigned int)&dword_18017E458, (_DWORD)v21, v18, v19, v34, (__int64)v46);
LABEL_26:
    v22 = qword_18017E478;
    qword_18017E478 = 0LL;
    dword_18017E458 = 0;
    EtwNotificationUnregister(v22, 0LL);
  }
  if ( v5 && v4 && *(_BYTE *)(a1 + 48) )
  {
    v44 = -10000000LL;
    ZwDelayExecution(0LL, &v44);
  }
  *(_DWORD *)(i + 12) = 0;
  return RtlReleaseSRWLockExclusive(&g_MicrosoftTelemetryAssertLock);
}
