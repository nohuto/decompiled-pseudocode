/*
 * XREFs of DbgkpPostFakeThreadMessages @ 0x140927D44
 * Callers:
 *     DbgkpPostFakeProcessCreateMessages @ 0x140927C7C (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkpSetProcessDebugObject @ 0x1409286EC (DbgkpSetProcessDebugObject.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     PsMultiResumeThread @ 0x1402EEA18 (PsMultiResumeThread.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PsSuspendThread @ 0x1406E21F0 (PsSuspendThread.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     PsGetNextProcessThread @ 0x1407E7750 (PsGetNextProcessThread.c)
 *     DbgkSendSystemDllMessages @ 0x140927394 (DbgkSendSystemDllMessages.c)
 *     DbgkpQueueMessage @ 0x1409283F4 (DbgkpQueueMessage.c)
 *     DbgkpSectionToFileHandle @ 0x14092AAC4 (DbgkpSectionToFileHandle.c)
 *     PsSynchronizeWithThreadInsertion @ 0x1409AD5B8 (PsSynchronizeWithThreadInsertion.c)
 */

__int64 __fastcall DbgkpPostFakeThreadMessages(_KPROCESS *a1, struct _KEVENT *a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  void *v7; // r14
  void *v8; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  int v10; // r12d
  char v11; // r13
  _QWORD *NextProcessThread; // rax
  char v13; // si
  _DWORD *v14; // r9
  char v15; // r13
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  char v19; // [rsp+30h] [rbp-1E8h]
  struct _KTHREAD *v22; // [rsp+50h] [rbp-1C8h]
  HANDLE v24[34]; // [rsp+90h] [rbp-188h] BYREF
  _BYTE v25[48]; // [rsp+1A0h] [rbp-78h] BYREF

  memset(v25, 0, sizeof(v25));
  memset(v24, 0, sizeof(v24));
  v7 = 0LL;
  v8 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v22 = CurrentThread;
  v10 = -1073741823;
  if ( !a3 )
  {
    NextProcessThread = PsGetNextProcessThread((__int64)a1, 0LL);
    v11 = 1;
    v19 = 1;
    goto LABEL_4;
  }
  v11 = 0;
  v19 = 0;
  v7 = (void *)a3;
  ObfReferenceObjectWithTag((PVOID)a3, 0x4F676244u);
  while ( a3 )
  {
    if ( v8 )
      ObfDereferenceObjectWithTag(v8, 0x4F676244u);
    v8 = (void *)a3;
    ObfReferenceObjectWithTag((PVOID)a3, 0x4F676244u);
    if ( (*(_DWORD *)(a3 + 116) & 0x400) == 0 )
    {
      if ( (*(_DWORD *)(a3 + 1376) & 2) != 0
        || (PsSynchronizeWithThreadInsertion(a3, CurrentThread), (*(_DWORD *)(a3 + 1376) & 2) != 0) )
      {
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a3 + 1352)) )
        {
          v13 = 10;
          if ( (int)PsSuspendThread(a3, 0LL) >= 0 )
            v13 = 42;
        }
        else
        {
          v13 = 18;
        }
        memset(v24, 0, sizeof(v24));
        if ( !v11 || (v13 & 0x10) != 0 )
        {
          v15 = 0;
          LODWORD(v24[5]) = 1;
          v24[7] = *(HANDLE *)(a3 + 1312);
        }
        else
        {
          v15 = 1;
          LODWORD(v24[5]) = 2;
          v16 = a1[1].Affinity.StaticBitmap[17];
          if ( v16 )
            v24[7] = (HANDLE)DbgkpSectionToFileHandle(v16);
          else
            v24[7] = 0LL;
          v24[8] = (HANDLE)a1[1].Affinity.StaticBitmap[18];
          KiStackAttachProcess(a1, 0LL, (__int64)v25, v14);
          v17 = RtlImageNtHeader(a1[1].Affinity.StaticBitmap[18]);
          if ( v17 )
          {
            v24[11] = 0LL;
            v24[9] = *(HANDLE *)(v17 + 12);
          }
          KiUnstackDetachProcess((__int64)v25, 0LL);
        }
        v10 = DbgkpQueueMessage(a1, (PVOID)a3, a2);
        if ( v10 < 0 )
        {
          if ( (v13 & 0x20) != 0 )
            PsMultiResumeThread(a3, 0LL, 1u);
          if ( (v13 & 8) != 0 )
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a3 + 1352));
          if ( LODWORD(v24[5]) == 2 && v24[7] )
            ObCloseHandle(v24[7], 0);
          ObfDereferenceObjectWithTag((PVOID)a3, 0x6E457350u);
          break;
        }
        if ( v15 )
        {
          v11 = 0;
          v19 = 0;
          ObfReferenceObjectWithTag((PVOID)a3, 0x4F676244u);
          v7 = (void *)a3;
          DbgkSendSystemDllMessages((_QWORD *)a3, a2, v24);
        }
        else
        {
          v11 = v19;
        }
        CurrentThread = v22;
      }
    }
    NextProcessThread = PsGetNextProcessThread((__int64)a1, (_QWORD *)a3);
LABEL_4:
    a3 = (__int64)NextProcessThread;
  }
  if ( v10 >= 0 )
  {
    if ( v7 )
    {
      *a4 = v7;
      *a5 = v8;
    }
    else
    {
      if ( v8 )
        ObfDereferenceObjectWithTag(v8, 0x4F676244u);
      return (unsigned int)-1073741823;
    }
  }
  else
  {
    if ( v7 )
      ObfDereferenceObjectWithTag(v7, 0x4F676244u);
    if ( v8 )
      ObfDereferenceObjectWithTag(v8, 0x4F676244u);
  }
  return (unsigned int)v10;
}
