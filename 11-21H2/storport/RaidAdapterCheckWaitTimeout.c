/*
 * XREFs of RaidAdapterCheckWaitTimeout @ 0x1C0020F3C
 * Callers:
 *     RaidQueueWaitCheckDpcRoutine @ 0x1C0020F10 (RaidQueueWaitCheckDpcRoutine.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C000B52C (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C000B570 (RaUnitAcquireRemoveLock.c)
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     StorGetPendingIoCount @ 0x1C00210F8 (StorGetPendingIoCount.c)
 *     RaidDeleteDeviceQueueEntry @ 0x1C003DE5C (RaidDeleteDeviceQueueEntry.c)
 *     RaidLunQueueCheckWaitTimeout @ 0x1C003DEC0 (RaidLunQueueCheckWaitTimeout.c)
 */

void __fastcall RaidAdapterCheckWaitTimeout(__int64 a1)
{
  __int64 v1; // r14
  ULONGLONG UnbiasedInterruptTime; // rax
  __int64 *v3; // rbx
  unsigned int v4; // r12d
  char v5; // r13
  unsigned int PendingIoCount; // r15d
  __int64 *v7; // rax
  __int64 v8; // rdi
  unsigned int v9; // esi
  __int64 *Pool; // r14
  _QWORD *v11; // r15
  _QWORD *v12; // rdi
  unsigned int v13; // esi
  _QWORD *v14; // rbx
  unsigned int v15; // edi
  __int64 *v16; // rbx
  __int64 *v17; // rax
  unsigned int v18; // r8d
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 ****v22; // r14
  __int64 ***v23; // r8
  unsigned int v24; // r9d
  __int64 **v25; // rdx
  ULONGLONG v26; // rcx
  __int64 **v27; // rcx
  __int64 ****v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 *v31; // rcx
  _QWORD *v32; // rax
  __int64 *v33; // rcx
  __int64 *v34; // rdi
  __int64 v35; // rbx
  __int64 v36; // r14
  char v37; // si
  __int64 v38; // rbx
  __int64 v39; // rax
  char v40; // al
  char v41; // cl
  char v42; // cl
  char v43; // al
  unsigned int v44; // r8d
  char v45; // al
  __int64 v46; // rax
  unsigned int v47; // eax
  __int64 v48; // rcx
  __int64 *v49; // rdi
  IRP *v50; // rsi
  __int64 v51; // rcx
  char v52; // r14
  _IO_SECURITY_CONTEXT *SecurityContext; // rbx
  _SECURITY_QUALITY_OF_SERVICE *v54; // rax
  char v55; // al
  char v56; // cl
  char v57; // cl
  char v58; // al
  unsigned int v59; // r8d
  char v60; // al
  __int64 v61; // [rsp+20h] [rbp-58h]
  __int64 *v62; // [rsp+28h] [rbp-50h] BYREF
  __int64 **v63; // [rsp+30h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE v65; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v67; // [rsp+C0h] [rbp+48h]
  unsigned int v68; // [rsp+C8h] [rbp+50h]
  unsigned int v69; // [rsp+D0h] [rbp+58h]
  ULONGLONG v70; // [rsp+D8h] [rbp+60h]

  v1 = *(_QWORD *)(a1 + 832);
  v69 = 0;
  v63 = &v62;
  v62 = (__int64 *)&v62;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v68 = DpcCompletionLimit;
  v61 = v1;
  memset(&v65, 0, sizeof(v65));
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  v3 = *(__int64 **)(v1 + 48);
  v4 = 0;
  v70 = UnbiasedInterruptTime;
  v5 = 0;
  PendingIoCount = 0;
  if ( !(unsigned int)StorGetPendingIoCount(v3) )
    goto LABEL_2;
  v18 = *((_DWORD *)v3 + 210);
  v19 = 0LL;
  if ( !v18 )
    goto LABEL_2;
  while ( *(_QWORD *)(320 * v19 + v3[104] + 264) == 320 * v19 + v3[104] + 264 )
  {
    v19 = (unsigned int)(v19 + 1);
    if ( (unsigned int)v19 >= v18 )
      goto LABEL_2;
  }
  v20 = 0LL;
  do
  {
    v21 = v1 + 320 * v20;
    v22 = (__int64 ****)(v21 + 264);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v21, &v65);
    v23 = *(__int64 ****)(v21 + 264);
    if ( *v22 != (__int64 ***)v22 )
    {
      v24 = v68;
      do
      {
        v25 = v23[3];
        if ( (*((_BYTE *)v25 + 450) & 2) == 0 )
        {
          v26 = (ULONGLONG)*(v23 - 2);
          if ( v26 == -1LL || v26 >= v70 )
            break;
        }
        if ( (*((_BYTE *)v25 + 450) & 2) == 0 && !v5 )
        {
          v3 = v25[3];
          v5 = 1;
          PendingIoCount = StorGetPendingIoCount(v3);
        }
        v27 = *v23;
        if ( (*v23)[1] != (__int64 *)v23 )
          goto LABEL_91;
        v28 = (__int64 ****)v23[1];
        if ( *v28 != v23 )
          goto LABEL_91;
        *v28 = (__int64 ***)v27;
        v27[1] = (__int64 *)v28;
        v29 = (__int64)(v23[2] + 15);
        v30 = *(_QWORD *)v29;
        if ( *(_QWORD *)(*(_QWORD *)v29 + 8LL) == v29 )
        {
          v31 = v23[2][16];
          if ( *v31 == v29 )
          {
            *v31 = v30;
            *(_QWORD *)(v30 + 8) = v31;
            --*(_DWORD *)(v21 + 24);
            v32 = v63;
            if ( *v63 == (__int64 *)&v62 )
              goto LABEL_95;
          }
        }
LABEL_91:
        __fastfail(3u);
LABEL_95:
        v23[1] = v63;
        *v23 = &v62;
        ++v4;
        *v32 = v23;
        v63 = (__int64 **)v23;
        v23 = *v22;
        if ( v4 == v24 )
          break;
      }
      while ( v23 != (__int64 ***)v22 );
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v65);
    if ( v4 == v68 )
      break;
    v1 = v61;
    v20 = (unsigned int)(v20 + 1);
  }
  while ( (unsigned int)v20 < *(_DWORD *)(*(_QWORD *)(v61 + 48) + 840LL) );
  if ( v5 && PendingIoCount > *((_DWORD *)v3 + 1305) )
    *((_DWORD *)v3 + 1305) = PendingIoCount;
LABEL_2:
  while ( 1 )
  {
    v7 = v62;
    if ( v62 == (__int64 *)&v62 )
      break;
    if ( (__int64 **)v62[1] != &v62 )
      goto LABEL_91;
    v33 = (__int64 *)*v62;
    if ( *(__int64 **)(*v62 + 8) != v62 )
      goto LABEL_91;
    v62 = (__int64 *)*v62;
    v33[1] = (__int64)&v62;
    v34 = v7 - 3;
    v35 = v7[3];
    v36 = v7[2];
    v37 = *(_BYTE *)(v35 + 450);
    RaidDeleteDeviceQueueEntry(v35 + 656, *(_BYTE *)(v36 + 142) & 1);
    _InterlockedIncrement64((volatile signed __int64 *)(v35 + 2120));
    RaUnitReleaseRemoveLock(v35);
    v38 = *(_QWORD *)(*(_QWORD *)(v36 + 184) + 8LL);
    v39 = v34[2];
    if ( *(_BYTE *)(v38 + 2) == 40 )
    {
      *(_QWORD *)(v38 + 96) = v39;
    }
    else
    {
      *(_QWORD *)(v38 + 56) = 0LL;
      *(_QWORD *)(v38 + 40) = 0LL;
      *(_QWORD *)(v38 + 48) = v39;
    }
    ExFreePoolWithTag(v34, 0x54436152u);
    v40 = *(_BYTE *)(v38 + 2);
    v41 = *(_BYTE *)(v38 + 3);
    if ( (v37 & 2) != 0 )
    {
      if ( v40 == 40 )
      {
        v42 = ((v41 >> 7) & 0x80) + 56;
      }
      else
      {
        v43 = 56;
        if ( v41 < 0 )
          v43 = -72;
        v42 = v43;
      }
      v44 = -1073740534;
    }
    else
    {
      if ( v40 == 40 )
      {
        v42 = ((v41 >> 7) & 0x80) + 9;
      }
      else
      {
        v45 = 9;
        if ( v41 < 0 )
          v45 = -119;
        v42 = v45;
      }
      v44 = 258;
    }
    *(_BYTE *)(v38 + 3) = v42;
    RaidCompleteRequestEx((PIRP)v36, 0, v44);
  }
  if ( v68 != v4 )
  {
    v8 = a1;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
    v9 = *(_DWORD *)(a1 + 160);
    v67 = v9;
    if ( v9 && (Pool = (__int64 *)RaidAllocatePool(64LL, 8LL * v9, 1280663890LL, *(_QWORD *)(v8 + 8))) != 0LL )
    {
      v11 = (_QWORD *)(v8 + 144);
      v12 = *(_QWORD **)(v8 + 144);
      if ( v12 != v11 )
      {
        v13 = 0;
        do
        {
          v14 = v12 - 7;
          if ( *((_BYTE *)v12 + 3176)
            && (*((_DWORD *)v14 + 814) != -1 || (*((_BYTE *)v14 + 450) & 2) != 0)
            && (int)RaUnitAcquireRemoveLock((__int64)(v12 - 7), 0LL, 0LL) >= 0 )
          {
            v46 = v13++;
            Pool[v46] = (__int64)v14;
          }
          v12 = (_QWORD *)*v12;
        }
        while ( v12 != v11 );
        v69 = v13;
        v9 = v67;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( v69 < v9 )
        Pool[v69] = 0LL;
      v15 = 0;
      if ( v9 )
      {
        v16 = Pool;
        do
        {
          if ( !*v16 )
            break;
          if ( v68 > v4 )
          {
            v47 = RaidLunQueueCheckWaitTimeout(*v16 + 656, v68 - v4, &v62);
            v4 += v47;
            if ( v47 )
              _InterlockedExchangeAdd64((volatile signed __int64 *)(*v16 + 2128), v47);
          }
          RaUnitReleaseRemoveLock(*v16);
          ++v15;
          ++v16;
        }
        while ( v15 < v9 );
      }
      ExFreePoolWithTag(Pool, 0x4C556152u);
      while ( 1 )
      {
        v17 = v62;
        if ( v62 == (__int64 *)&v62 )
          break;
        if ( (__int64 **)v62[1] != &v62 )
          goto LABEL_91;
        v48 = *v62;
        if ( *(__int64 **)(*v62 + 8) != v62 )
          goto LABEL_91;
        v62 = (__int64 *)*v62;
        v49 = v17 - 3;
        *(_QWORD *)(v48 + 8) = &v62;
        v50 = (IRP *)v17[2];
        v51 = v17[3];
        v52 = *(_BYTE *)(v51 + 450);
        SecurityContext = v50->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
        RaUnitReleaseRemoveLock(v51);
        v54 = (_SECURITY_QUALITY_OF_SERVICE *)v49[2];
        if ( BYTE2(SecurityContext->SecurityQos) == 40 )
        {
          SecurityContext[4].SecurityQos = v54;
        }
        else
        {
          SecurityContext[2].AccessState = 0LL;
          *(_QWORD *)&SecurityContext[1].DesiredAccess = 0LL;
          SecurityContext[2].SecurityQos = v54;
        }
        ExFreePoolWithTag(v49, 0x54436152u);
        v55 = BYTE2(SecurityContext->SecurityQos);
        v56 = BYTE3(SecurityContext->SecurityQos);
        if ( (v52 & 2) != 0 )
        {
          if ( v55 == 40 )
          {
            v57 = ((v56 >> 7) & 0x80) + 56;
          }
          else
          {
            v58 = 56;
            if ( v56 < 0 )
              v58 = -72;
            v57 = v58;
          }
          v59 = -1073740534;
        }
        else
        {
          if ( v55 == 40 )
          {
            v57 = ((v56 >> 7) & 0x80) + 9;
          }
          else
          {
            v60 = 9;
            if ( v56 < 0 )
              v60 = -119;
            v57 = v60;
          }
          v59 = 258;
        }
        BYTE3(SecurityContext->SecurityQos) = v57;
        RaidCompleteRequestEx(v50, 0, v59);
      }
    }
    else
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
  }
}
