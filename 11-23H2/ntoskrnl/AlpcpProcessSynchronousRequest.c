/*
 * XREFs of AlpcpProcessSynchronousRequest @ 0x14073D7C0
 * Callers:
 *     NtRequestWaitReplyPort @ 0x14071B6F0 (NtRequestWaitReplyPort.c)
 *     NtAlpcSendWaitReceivePort @ 0x14073ADA0 (NtAlpcSendWaitReceivePort.c)
 *     LpcSendWaitReceivePort @ 0x1407E6210 (LpcSendWaitReceivePort.c)
 *     LpcpRequestWaitReplyPort @ 0x14097874C (LpcpRequestWaitReplyPort.c)
 *     NtReplyWaitReplyPort @ 0x140978940 (NtReplyWaitReplyPort.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectSafe @ 0x1403379A0 (ObReferenceObjectSafe.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14071AE10 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpUnlockMessage @ 0x14071C0B8 (AlpcpUnlockMessage.c)
 *     AlpcpReadMessageData @ 0x14071C0E8 (AlpcpReadMessageData.c)
 *     ProbeForWrite @ 0x140729580 (ProbeForWrite.c)
 *     AlpcMessageCleanupProcedure @ 0x140738970 (AlpcMessageCleanupProcedure.c)
 *     AlpcpSendMessage @ 0x140739290 (AlpcpSendMessage.c)
 *     AlpcpUnlockBlob @ 0x14073BE30 (AlpcpUnlockBlob.c)
 *     AlpcpExposeAttributes @ 0x14073BF90 (AlpcpExposeAttributes.c)
 *     AlpcpReceiveSynchronousReply @ 0x14073DED0 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpCancelMessage @ 0x1407793FC (AlpcpCancelMessage.c)
 *     AlpcpExposeCapturedContextAttribute @ 0x1407BA8E8 (AlpcpExposeCapturedContextAttribute.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x1407CE19C (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x14097914C (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpEnterFreeEventMessageLog @ 0x14097ABA8 (AlpcpEnterFreeEventMessageLog.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14097AC10 (AlpcpEnterStateChangeEventMessageLog.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpProcessSynchronousRequest(
        __int64 a1,
        unsigned int a2,
        __int128 *a3,
        _DWORD *a4,
        unsigned __int64 a5,
        unsigned __int64 *a6,
        unsigned int *Address,
        __int64 *a8,
        unsigned __int8 a9)
{
  unsigned int v9; // ebx
  __int64 v11; // r8
  __int64 v12; // rax
  unsigned int v13; // edx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // esi
  ULONG v20; // r9d
  ULONG v21; // eax
  ULONG v22; // ecx
  ULONG v23; // eax
  bool v24; // zf
  unsigned int v25; // ecx
  int v26; // ecx
  int v27; // eax
  int v28; // ecx
  int v29; // edx
  __int64 v30; // rax
  signed __int64 *v31; // rbx
  void *v32; // rsi
  int v34; // eax
  int PreviousMode; // edx
  unsigned int v36; // r15d
  unsigned int v37; // ecx
  ULONG_PTR v38; // rbx
  int v39; // edx
  int v40; // eax
  unsigned __int64 v41; // rax
  __int16 v42; // ax
  __int16 v43; // cx
  char *v44; // rdx
  void *v45; // rcx
  __int64 v46; // rdi
  size_t v47; // rdi
  size_t v48; // rax
  const void *v49; // rdx
  size_t v50; // r8
  signed __int64 v51; // rax
  unsigned int v52; // [rsp+30h] [rbp-E8h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-D8h] BYREF
  void **v54; // [rsp+48h] [rbp-D0h]
  unsigned __int64 v55; // [rsp+50h] [rbp-C8h]
  __int64 v56; // [rsp+58h] [rbp-C0h]
  unsigned __int64 v57; // [rsp+60h] [rbp-B8h]
  __int64 v58; // [rsp+68h] [rbp-B0h] BYREF
  unsigned __int64 v59; // [rsp+70h] [rbp-A8h]
  _DWORD *v60; // [rsp+78h] [rbp-A0h]
  _QWORD v61[2]; // [rsp+80h] [rbp-98h] BYREF
  __int128 v62; // [rsp+90h] [rbp-88h]
  __int128 v63; // [rsp+A0h] [rbp-78h]
  unsigned int v64; // [rsp+B0h] [rbp-68h]
  __int64 v65; // [rsp+B4h] [rbp-64h]
  int v66; // [rsp+BCh] [rbp-5Ch]
  _OWORD v67[5]; // [rsp+C0h] [rbp-58h] BYREF

  v9 = a2;
  v61[1] = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v65 = 0LL;
  v66 = 0;
  v58 = 0LL;
  v52 = 0;
  v55 = -1LL;
  if ( a9 )
  {
    v11 = 0x7FFFFFFF0000LL;
    if ( a8 )
    {
      v12 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a8 < 0x7FFFFFFF0000LL )
        v12 = (__int64)a8;
      v58 = *(_QWORD *)v12;
      a8 = &v58;
    }
    v13 = a2 & 0xC0000000;
    if ( v13 == 0x80000000 )
    {
      if ( (a5 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v14 = 0x7FFFFFFF0000LL;
      if ( a5 < 0x7FFFFFFF0000LL )
        v14 = a5;
      *(_BYTE *)v14 = *(_BYTE *)v14;
      *(_BYTE *)(v14 + 23) = *(_BYTE *)(v14 + 23);
    }
    else
    {
      if ( (a5 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = 0x7FFFFFFF0000LL;
      if ( a5 < 0x7FFFFFFF0000LL )
        v15 = a5;
      *(_BYTE *)v15 = *(_BYTE *)v15;
      *(_BYTE *)(v15 + 39) = *(_BYTE *)(v15 + 39);
    }
    if ( a6 )
    {
      v16 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
        v16 = (__int64)a6;
      v55 = *(_QWORD *)v16;
      v17 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
        v17 = (__int64)a6;
      *(_QWORD *)v17 = *(_QWORD *)v17;
    }
    if ( Address )
    {
      v18 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)Address < 0x7FFFFFFF0000LL )
        v18 = (__int64)Address;
      v19 = *(_DWORD *)v18;
      v20 = 8;
      if ( v13 == 0x80000000 )
      {
        if ( v19 < 0 )
          v20 = 20;
        v21 = v20 + 16;
        if ( (v19 & 0x40000000) == 0 )
          v21 = v20;
        v22 = v21 + 20;
        if ( (v19 & 0x20000000) == 0 )
          v22 = v21;
        v23 = v22 + 16;
        if ( (v19 & 0x10000000) == 0 )
          v23 = v22;
        v24 = (v19 & 0x8000000) == 0;
        v25 = v23 + 24;
        v20 = 4;
      }
      else
      {
        v26 = 8;
        if ( v19 < 0 )
          v26 = 32;
        v27 = v26 + 32;
        if ( (v19 & 0x40000000) == 0 )
          v27 = v26;
        v28 = v27 + 32;
        if ( (v19 & 0x20000000) == 0 )
          v28 = v27;
        v29 = v28 + 24;
        if ( (v19 & 0x10000000) == 0 )
          v29 = v28;
        v23 = v29 + 24;
        if ( (v19 & 0x8000000) == 0 )
          v23 = v29;
        v24 = (v19 & 0x4000000) == 0;
        v25 = v23 + 8;
      }
      if ( v24 )
        v25 = v23;
      v30 = v25 + 8;
      if ( (v19 & 0x2000000) == 0 )
        v30 = v25;
      if ( (unsigned __int64)(v30 - 1) > 0xFFE )
      {
        ProbeForWrite(Address, (unsigned int)v30, v20);
      }
      else
      {
        if ( ((v20 - 1) & (unsigned int)Address) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)Address < 0x7FFFFFFF0000LL )
          v11 = (__int64)Address;
        *(_BYTE *)v11 = *(_BYTE *)v11;
        *(_BYTE *)(v11 + (unsigned int)v30 - 1) = *(_BYTE *)(v11 + (unsigned int)v30 - 1);
      }
      v52 = v19;
    }
  }
  else
  {
    if ( a6 )
      v55 = *a6;
    if ( Address )
      v52 = *Address;
  }
  v60 = (_DWORD *)(a1 + 416);
  if ( (*(_BYTE *)(a1 + 416) & 6) != 6 )
  {
    v32 = (void *)a1;
    v56 = a1;
    goto LABEL_71;
  }
  v54 = *(void ***)(a1 + 16);
  v31 = (signed __int64 *)(v54 - 2);
  ExAcquirePushLockSharedEx((ULONG_PTR)(v54 - 2), 0LL);
  v32 = *v54;
  v56 = (__int64)v32;
  if ( v32 && ObReferenceObjectSafe((__int64)v32) )
  {
    if ( _InterlockedCompareExchange64(v31, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v31);
    KeAbPostRelease((ULONG_PTR)v31);
    v9 = a2;
LABEL_71:
    v61[0] = a1;
    v64 = v9;
    if ( (*(_DWORD *)(a1 + 416) & 0x1000) != 0 )
      v34 = AlpcpSendLegacySynchronousRequest(a1, (__int64)v61, a3, a9);
    else
      v34 = AlpcpSendMessage((__int64)v61, (__m256i *)a3, a4, a9);
    v36 = v34;
    if ( v34 < 0 )
      goto LABEL_122;
    if ( (v9 & 0x100000) != 0 )
    {
      LOBYTE(PreviousMode) = 1;
    }
    else if ( (v9 & 0x2000000) != 0 && (v9 & 2) != 0 )
    {
      LOBYTE(PreviousMode) = 0;
    }
    else
    {
      PreviousMode = (unsigned __int8)KeGetCurrentThread()->PreviousMode;
    }
    BugCheckParameter2 = 0LL;
    v61[0] = v32;
    v36 = AlpcpReceiveSynchronousReply(
            (unsigned int)v61,
            PreviousMode,
            (unsigned int)&BugCheckParameter2,
            v52,
            (__int64)a8);
    if ( v36 )
      goto LABEL_122;
    v37 = v9 & 0xC0000000;
    v38 = BugCheckParameter2;
    v39 = *(unsigned __int16 *)(BugCheckParameter2 + 240);
    v40 = 24;
    if ( v37 != 0x80000000 )
      v40 = 40;
    v41 = (unsigned int)(v39 + v40);
    LODWORD(v54) = v41;
    if ( a6 )
    {
      v57 = v41;
      if ( v41 > v55 )
      {
        memset(v67, 0, 32);
        v36 = AlpcpReturnMessageOnInsufficientBuffer(v32, BugCheckParameter2, v67);
        if ( v36 == -1073741789 )
        {
          AlpcpUnlockMessage(v38);
          *a6 = v57;
          AlpcpExposeCapturedContextAttribute(a2, v67, v52, Address);
        }
        else
        {
          AlpcpCancelMessage(v32, v38, 0x10000LL);
        }
LABEL_122:
        if ( v32 != (void *)a1 )
          ObfDereferenceObject(v32);
        return v36;
      }
    }
    if ( v37 == 0x80000000 )
    {
      *(_WORD *)a5 = v39;
      *(_WORD *)(a5 + 2) = *(_WORD *)(v38 + 240) + 24;
      v42 = *(_WORD *)(v38 + 246);
      if ( v42 )
        *(_WORD *)(a5 + 6) = v42 - 16;
      else
        *(_WORD *)(a5 + 6) = 0;
      v43 = *(_WORD *)(v38 + 244) | 0x1000;
      *(_WORD *)(a5 + 4) = v43;
      *(_DWORD *)(a5 + 8) = *(_DWORD *)(v38 + 248);
      *(_DWORD *)(a5 + 12) = *(_DWORD *)(v38 + 256);
      *(_DWORD *)(a5 + 16) = *(_DWORD *)(v38 + 264);
      *(_DWORD *)(a5 + 20) = *(_DWORD *)(v38 + 272);
      *(_DWORD *)(a5 + 20) = *(_DWORD *)(v38 + 272);
      if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
        *(_WORD *)(a5 + 4) = v43 & 0xC00F;
      v44 = (char *)(a5 + 24);
      if ( *(_QWORD *)(v38 + 176) )
        AlpcpGetDataFromUserVaSafe(v38, v44);
      else
        AlpcpReadMessageData(v38, v44);
    }
    else
    {
      *(_OWORD *)a5 = *(_OWORD *)(BugCheckParameter2 + 240);
      *(_OWORD *)(a5 + 16) = *(_OWORD *)(v38 + 256);
      *(_QWORD *)(a5 + 32) = *(_QWORD *)(v38 + 272);
      if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
        *(_WORD *)(a5 + 4) = *(_WORD *)(v38 + 244) & 0xC00F;
      v45 = (void *)(a5 + 40);
      v59 = a5 + 40;
      if ( *(_QWORD *)(v38 + 176) )
      {
        AlpcpGetDataFromUserVaSafe(v38, a5 + 40);
      }
      else
      {
        v46 = *(_QWORD *)(v38 + 96);
        if ( v46 )
          v47 = *(_QWORD *)(v46 + 32) - 40LL;
        else
          v47 = 512LL;
        v48 = *(unsigned __int16 *)(v38 + 240);
        v57 = v48;
        v49 = (const void *)(v38 + 280);
        if ( v48 > v47 )
        {
          memmove(v45, v49, v47);
          v50 = v57 - v47;
          v45 = (void *)(v47 + v59);
          v49 = *(const void **)(v38 + 224);
        }
        else
        {
          v50 = (unsigned int)v48;
        }
        memmove(v45, v49, v50);
      }
    }
    if ( a6 )
      *a6 = (unsigned int)v54;
    if ( Address )
      AlpcpExposeAttributes(a1, a2, v38, v52, (__int64)Address);
    if ( (*(_DWORD *)(v38 + 40) & 0x200) != 0 && !*(_QWORD *)(v38 + 96) && (*v60 & 0x2000) != 0 )
    {
      v51 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 440), v38, 0LL);
      v38 = BugCheckParameter2;
      if ( !v51 )
      {
        ++*(_WORD *)(BugCheckParameter2 - 30);
        AlpcMessageCleanupProcedure(v38);
        if ( !AlpcpMessageLogEnabled )
        {
LABEL_121:
          AlpcpUnlockBlob(v38);
          goto LABEL_122;
        }
        AlpcpEnterFreeEventMessageLog(v38);
      }
    }
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterStateChangeEventMessageLog(v38);
    goto LABEL_121;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v54 - 2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v54 - 2);
  KeAbPostRelease((ULONG_PTR)(v54 - 2));
  return 3221225527LL;
}
