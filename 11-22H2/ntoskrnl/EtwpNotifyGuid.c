/*
 * XREFs of EtwpNotifyGuid @ 0x14077FEF8
 * Callers:
 *     NtTraceControl @ 0x140725C40 (NtTraceControl.c)
 *     EtwpSendSessionNotification @ 0x14077ED30 (EtwpSendSessionNotification.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231190 (ExReleasePushLockEx.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     PsGetCurrentThreadProcessId @ 0x1402AF870 (PsGetCurrentThreadProcessId.c)
 *     PsGetProcessId @ 0x1402FA490 (PsGetProcessId.c)
 *     memset @ 0x140435400 (memset.c)
 *     EtwpAccessCheck @ 0x1406BDBDC (EtwpAccessCheck.c)
 *     EtwpFindGuidEntryByGuid @ 0x1406BF870 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x1406BF9A4 (EtwpUnreferenceGuidEntry.c)
 *     EtwpCreateUmReplyObject @ 0x14077EFDC (EtwpCreateUmReplyObject.c)
 *     EtwpFreeFilterInfo @ 0x140780CA8 (EtwpFreeFilterInfo.c)
 *     EtwpSendDataBlock @ 0x140781500 (EtwpSendDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x140781CF8 (EtwpUnreferenceDataBlock.c)
 *     EtwpCheckGuidAccess @ 0x140782074 (EtwpCheckGuidAccess.c)
 *     EtwpAllocDataBlock @ 0x140782148 (EtwpAllocDataBlock.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x1409EC360 (EtwpCheckCurrentUserProcessAccess.c)
 *     EtwpDemuxPrivateTraceHandle @ 0x1409EC580 (EtwpDemuxPrivateTraceHandle.c)
 *     EtwpApplyTransientFilters @ 0x1409F51C8 (EtwpApplyTransientFilters.c)
 *     EtwpValidateTraceControlFilterDescriptors @ 0x1409F5374 (EtwpValidateTraceControlFilterDescriptors.c)
 */

__int64 __fastcall EtwpNotifyGuid(__int64 a1, __int64 a2, char a3)
{
  int v6; // r13d
  __int64 v7; // r8
  int v8; // ebx
  ACCESS_MASK v9; // ebx
  int v10; // esi
  int v11; // eax
  __int64 *GuidEntryByGuid; // rax
  __int64 *v13; // r14
  int v14; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 **v17; // r15
  int v18; // esi
  __int64 *v19; // rbx
  __int16 v20; // ax
  int v21; // eax
  HANDLE v22; // rax
  unsigned __int64 v23; // rcx
  unsigned int v24; // eax
  int v25; // eax
  unsigned int ProcessId; // eax
  bool v27; // [rsp+20h] [rbp-79h]
  int v28; // [rsp+24h] [rbp-75h]
  PVOID Object; // [rsp+38h] [rbp-61h] BYREF
  unsigned __int64 v30; // [rsp+40h] [rbp-59h]
  HANDLE Handle; // [rsp+48h] [rbp-51h] BYREF
  _BYTE v32[160]; // [rsp+50h] [rbp-49h] BYREF
  __int16 v33; // [rsp+108h] [rbp+6Fh] BYREF
  int v34; // [rsp+118h] [rbp+7Fh]

  Handle = 0LL;
  Object = 0LL;
  v34 = 0;
  v6 = 0;
  v27 = 0;
  v30 = 0LL;
  memset(v32, 0, 0x68uLL);
  v7 = *(unsigned int *)(a2 + 4);
  if ( (unsigned int)v7 <= 0x10000 )
  {
    v8 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 == 11 )
    {
      if ( (unsigned int)v7 < 0x78 || (v23 = (*(_DWORD *)(a2 + 72) + 7) & 0xFFFFFFF8, v23 >= v7 - 76) )
      {
        v14 = -2147483643;
        goto LABEL_7;
      }
      v24 = *(_DWORD *)(v23 + a2 + 72);
      if ( v24 )
      {
        v30 = v23 + a2 + 76;
        if ( (unsigned int)EtwpValidateTraceControlFilterDescriptors(v24, v30, (unsigned int)(v7 - (v23 + 76)), v32) )
        {
          v14 = -1073741811;
          goto LABEL_7;
        }
      }
      *(_DWORD *)a2 = 4;
      v8 = 4;
    }
    *(_DWORD *)(a2 + 36) = PsGetCurrentThreadProcessId();
    if ( v8 == 4 )
    {
      if ( *(_DWORD *)(a2 + 4) < 0xF8u )
      {
        v14 = -1073741789;
        goto LABEL_7;
      }
      v9 = 128;
      v10 = 0;
      v25 = EtwpCheckGuidAccess(&PrivateLoggerSecurityGuid, 128LL, 0LL);
      *(GUID *)(a2 + 40) = PrivateLoggerNotificationGuid;
      v27 = v25 < 0;
    }
    else
    {
      v9 = 4;
      v10 = 1;
    }
    v11 = *(_DWORD *)(a2 + 32);
    *(_DWORD *)(a2 + 20) = 0;
    v28 = v11;
    GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, (_DWORD *)(a2 + 40), v10);
    v13 = GuidEntryByGuid;
    if ( !GuidEntryByGuid )
    {
      v14 = -1073741163;
LABEL_7:
      EtwpFreeFilterInfo(v32);
      return (unsigned int)v14;
    }
    if ( a3 )
    {
      if ( *(_DWORD *)a2 != 4 )
      {
        v14 = EtwpAccessCheck((PSECURITY_DESCRIPTOR)GuidEntryByGuid[9], v9, 0LL);
        if ( v14 < 0 )
        {
LABEL_29:
          EtwpUnreferenceGuidEntry(v13);
          goto LABEL_7;
        }
      }
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v13 + 51), 0LL);
    v17 = (__int64 **)(v13 + 7);
    v13[52] = (__int64)KeGetCurrentThread();
    if ( *v17 == (__int64 *)v17 )
    {
      v14 = -1073741162;
    }
    else
    {
      if ( !*(_BYTE *)(a2 + 12) )
        goto LABEL_13;
      v14 = EtwpCreateUmReplyObject((ULONG_PTR)v13, &Handle, &Object);
      if ( v14 >= 0 )
      {
        *(_QWORD *)(a2 + 24) = Object;
LABEL_13:
        v18 = EtwpAllocDataBlock(*(unsigned int *)(a2 + 4), (void *)a2);
        if ( v18 < 0 )
        {
LABEL_46:
          v14 = -1073741801;
        }
        else
        {
          v19 = *v17;
          if ( *v17 != (__int64 *)v17 )
          {
            while ( 1 )
            {
              v20 = *((_WORD *)v19 + 49);
              if ( (v20 & 2) != 0
                && (v20 & 0x40) == 0
                && (!v30 || (unsigned __int8)EtwpApplyTransientFilters(v19, v32))
                && (!v28 || (unsigned int)PsGetProcessId((PEPROCESS)v19[10]) == v28) )
              {
                if ( !v27 || (v18 = EtwpCheckCurrentUserProcessAccess(v19[10]), v18 >= 0) )
                {
                  if ( *(_DWORD *)a2 != 4 )
                    goto LABEL_21;
                  v33 = 0;
                  if ( *(_DWORD *)(a2 + 76) == 1 )
                    goto LABEL_21;
                  ProcessId = (unsigned int)PsGetProcessId((PEPROCESS)v19[10]);
                  v18 = EtwpDemuxPrivateTraceHandle(ProcessId, *(_WORD *)(a2 + 80) & 0x7FFF, &v33);
                  if ( v18 >= 0 )
                    break;
                }
              }
              v6 = v34;
LABEL_23:
              v19 = (__int64 *)*v19;
              if ( v19 == v13 + 7 )
                goto LABEL_24;
            }
            v18 = EtwpAllocDataBlock(*(unsigned int *)(a2 + 4), (void *)a2);
            if ( v18 < 0 )
              goto LABEL_46;
            MEMORY[0x50] = v33;
LABEL_21:
            v21 = EtwpSendDataBlock(v19, 0LL);
            v6 = v34;
            if ( v21 < 0 )
              v18 = v21;
            else
              v6 = ++v34;
            goto LABEL_23;
          }
LABEL_24:
          v22 = Handle;
          v14 = 0;
          *(_DWORD *)(a2 + 20) = v6;
          if ( !v6 )
            v14 = v18;
          *(_QWORD *)(a2 + 24) = v22;
        }
      }
    }
    v13[52] = 0LL;
    ExReleasePushLockEx(v13 + 51, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( Object )
      ObfDereferenceObject(Object);
    goto LABEL_29;
  }
  return 3221225990LL;
}
