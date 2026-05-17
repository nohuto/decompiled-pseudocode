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

__int64 __fastcall MicrosoftTelemetryAssertTriggeredWorker(__int64 a1)
{
  unsigned __int64 v1; // r14
  unsigned __int64 v3; // rdi
  int v4; // r15d
  int v5; // r13d
  __int64 v6; // r8
  __int64 i; // rbx
  __int64 Heap; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int8 ImageTuple; // al
  int v12; // r12d
  unsigned __int64 v13; // rcx
  int v14; // edi
  __int64 v15; // r14
  __int64 v16; // rcx
  char *v17; // rdx
  int v18; // r8d
  int v19; // r9d
  int v20; // ecx
  void *v21; // rdx
  char *v22; // rdx
  int v23; // ecx
  _BYTE *v24; // rdx
  int v25; // ecx
  __int64 v26; // rcx
  char v28; // dl
  unsigned int v29; // r13d
  _BYTE *v30; // r12
  unsigned int v31; // ecx
  int v32; // [rsp+28h] [rbp-E0h]
  int v33; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v34; // [rsp+3Ch] [rbp-CCh] BYREF
  int v35; // [rsp+40h] [rbp-C8h] BYREF
  int v36; // [rsp+44h] [rbp-C4h] BYREF
  int v37; // [rsp+48h] [rbp-C0h] BYREF
  int v38; // [rsp+4Ch] [rbp-BCh] BYREF
  int v39; // [rsp+50h] [rbp-B8h] BYREF
  int v40; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v41; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v42; // [rsp+60h] [rbp-A8h] BYREF
  _DWORD v43[4]; // [rsp+68h] [rbp-A0h] BYREF
  char v44[32]; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v45; // [rsp+98h] [rbp-70h]
  __int64 v46; // [rsp+A0h] [rbp-68h]
  int *v47; // [rsp+A8h] [rbp-60h]
  __int64 v48; // [rsp+B0h] [rbp-58h]
  int *v49; // [rsp+B8h] [rbp-50h]
  __int64 v50; // [rsp+C0h] [rbp-48h]
  _DWORD *v51; // [rsp+C8h] [rbp-40h]
  __int64 v52; // [rsp+D0h] [rbp-38h]
  _BYTE v53[16]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 *v54; // [rsp+E8h] [rbp-20h]
  __int64 v55; // [rsp+F0h] [rbp-18h]
  __int64 *v56; // [rsp+F8h] [rbp-10h]
  __int64 v57; // [rsp+100h] [rbp-8h]
  _QWORD v58[2]; // [rsp+108h] [rbp+0h] BYREF
  int *v59; // [rsp+118h] [rbp+10h]
  __int64 v60; // [rsp+120h] [rbp+18h]
  int *v61; // [rsp+128h] [rbp+20h]
  __int64 v62; // [rsp+130h] [rbp+28h]
  int *v63; // [rsp+138h] [rbp+30h]
  __int64 v64; // [rsp+140h] [rbp+38h]
  __int64 *v65; // [rsp+148h] [rbp+40h]
  __int64 v66; // [rsp+150h] [rbp+48h]
  _BYTE v67[272]; // [rsp+158h] [rbp+50h] BYREF

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
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, 32LL);
  i = Heap;
  if ( !Heap )
    return RtlReleaseSRWLockExclusive(&g_MicrosoftTelemetryAssertLock);
  *(_QWORD *)Heap = v3;
  v9 = MEMORY[0x7FFE0320];
  v10 = MEMORY[0x7FFE0004];
  *(_DWORD *)(Heap + 12) = 0;
  *(_DWORD *)(Heap + 16) = 0;
  *(_DWORD *)(Heap + 8) = ((unsigned __int64)(v9 * v10) >> 24) - 60001;
  *(_QWORD *)(Heap + 24) = g_MicrosoftTelemetryAssertsTriggeredList;
  g_MicrosoftTelemetryAssertsTriggeredList = Heap;
LABEL_5:
  ++*(_DWORD *)(i + 12);
  ++*(_DWORD *)(i + 16);
  if ( (unsigned int)((MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24) - *(_DWORD *)(i + 8) > 0xEA60 )
  {
    *(_DWORD *)(i + 8) = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    ImageTuple = GetImageTuple(v1, v67, v6, &v33, &v34);
    v12 = ImageTuple;
    v35 = ImageTuple;
    if ( ImageTuple && v3 >= v1 && (v13 = v1 + v34, v13 > v1) && v3 <= v13 )
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
      *(_QWORD *)(a1 + 32) = v67;
    if ( *(_DWORD *)(i + 16) == 1
      && !(unsigned int)TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801744C0) )
    {
      if ( dword_1801744C0 )
      {
        v28 = v67[0];
        v4 = 1;
        v36 = 1;
        v29 = 0;
        v43[0] = 488056742;
        v43[1] = 1311216328;
        v43[2] = -1961924164;
        v43[3] = -1655403451;
        if ( v67[0] )
        {
          v30 = v67;
          do
          {
            *((_BYTE *)v43 + v15) += toupper(v28);
            v31 = v29 + 1;
            v28 = *++v30;
            v29 = v31 < 0x10 ? v31 : 0;
            v15 = (v15 + 1) & -(__int64)(v31 < 0x10);
          }
          while ( *v30 );
          v12 = v35;
        }
        if ( (unsigned int)EtwEventRegister(v43, 0LL, 0LL, &v41) )
        {
          v5 = 1;
        }
        else
        {
          if ( (unsigned __int8)EtwEventProviderEnabled(v41, 0LL, 0LL) )
            v4 = 0;
          EtwNotificationUnregister(v41, 0LL);
          v5 = v36;
        }
      }
      v16 = qword_1801744E0;
      qword_1801744E0 = 0LL;
      dword_1801744C0 = 0;
      EtwNotificationUnregister(v16, 0LL);
    }
    if ( (unsigned int)TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801744F8) )
      goto LABEL_32;
    if ( *(_BYTE *)(a1 + 24) )
    {
      if ( (unsigned int)dword_1801744F8 <= 5 || !tlgKeywordOn((__int64)&dword_1801744F8, 0x400000000000LL) )
        goto LABEL_31;
      v22 = v67;
      v35 = *(_DWORD *)a1;
      v45 = (__int64 *)&v35;
      v47 = &v36;
      v46 = 4LL;
      v36 = v14;
      v49 = &v33;
      v33 = v12 != 0 ? v33 : 0;
      v48 = 4LL;
      v50 = 4LL;
      v51 = &v34;
      v34 &= -(v12 != 0);
      v52 = 4LL;
      if ( !v12 )
        v22 = "<unknown>";
      tlgCreate1Sz_char((__int64)v53, v22);
      v23 = *(_DWORD *)(i + 12);
      v24 = *(_BYTE **)(a1 + 32);
      v54 = (__int64 *)&v37;
      LODWORD(v41) = *(_DWORD *)(i + 16);
      v37 = v23;
      v56 = &v41;
      v55 = 4LL;
      v57 = 4LL;
      tlgCreate1Sz_char((__int64)v58, v24);
      v25 = *(_DWORD *)(a1 + 40);
      v59 = &v38;
      v21 = &unk_180141F89;
      v39 = *(_DWORD *)(a1 + 44);
      v61 = &v39;
      v63 = &v40;
      v65 = &v42;
      v32 = 14;
      v38 = v25;
      v62 = 4LL;
      v40 = v4;
      v64 = 4LL;
      LODWORD(v42) = v5;
      v66 = 4LL;
    }
    else
    {
      if ( (unsigned int)dword_1801744F8 <= 5 || !tlgKeywordOn((__int64)&dword_1801744F8, 0x400000000000LL) )
        goto LABEL_31;
      v17 = v67;
      LODWORD(v42) = *(_DWORD *)a1;
      v45 = &v42;
      v47 = &v40;
      v46 = 4LL;
      v40 = v14;
      v49 = &v39;
      v39 = v12 != 0 ? v33 : 0;
      v48 = 4LL;
      v51 = &v38;
      v38 = v12 != 0 ? v34 : 0;
      v50 = 4LL;
      if ( !v12 )
        v17 = "<unknown>";
      v52 = 4LL;
      tlgCreate1Sz_char((__int64)v53, v17);
      v20 = *(_DWORD *)(i + 12);
      v54 = &v41;
      v21 = &unk_180142048;
      v37 = *(_DWORD *)(i + 16);
      v56 = (__int64 *)&v37;
      v58[0] = &v35;
      v59 = &v33;
      v32 = 11;
      LODWORD(v41) = v20;
      v55 = 4LL;
      v57 = 4LL;
      v35 = v4;
      v58[1] = 4LL;
      v33 = v5;
    }
    v60 = 4LL;
    tlgWriteTransfer_EtwEventWriteTransfer((unsigned int)&dword_1801744F8, (_DWORD)v21, v18, v19, v32, (__int64)v44);
LABEL_31:
    v26 = qword_180174518;
    qword_180174518 = 0LL;
    dword_1801744F8 = 0;
    EtwNotificationUnregister(v26, 0LL);
LABEL_32:
    if ( v5 && v4 && *(_BYTE *)(a1 + 48) )
    {
      v42 = -10000000LL;
      ZwDelayExecution(0LL, &v42);
    }
    *(_DWORD *)(i + 12) = 0;
  }
  return RtlReleaseSRWLockExclusive(&g_MicrosoftTelemetryAssertLock);
}
