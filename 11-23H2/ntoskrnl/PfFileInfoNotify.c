/*
 * XREFs of PfFileInfoNotify @ 0x1402DF7B0
 * Callers:
 *     <none>
 * Callees:
 *     ExRundownCompleted @ 0x140208880 (ExRundownCompleted.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     PfFbLogEntryReserve @ 0x14028BE64 (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x14028C110 (PfFbLogEntryComplete.c)
 *     PfLogEvent @ 0x14028C318 (PfLogEvent.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     PfLogFileDataAccess @ 0x1402DFE64 (PfLogFileDataAccess.c)
 *     PfSnLogFileDataAccess @ 0x1402E26EC (PfSnLogFileDataAccess.c)
 *     ExWaitForRundownProtectionRelease @ 0x14030A5D0 (ExWaitForRundownProtectionRelease.c)
 *     PfLogDeleteHelper @ 0x1403610E0 (PfLogDeleteHelper.c)
 *     _wcsupr @ 0x1403D9F50 (_wcsupr.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     PfpRpFileKeyUpdate @ 0x1406D9860 (PfpRpFileKeyUpdate.c)
 *     PfSnLogStreamCreate @ 0x140773B18 (PfSnLogStreamCreate.c)
 *     PfSnNameRemoveAll @ 0x1407C3504 (PfSnNameRemoveAll.c)
 *     PfSnLogVolumeCreate @ 0x1407DAD10 (PfSnLogVolumeCreate.c)
 */

__int64 __fastcall PfFileInfoNotify(_DWORD *a1)
{
  bool v2; // zf
  int v3; // eax
  int *v4; // rax
  int *v5; // rsi
  int v6; // eax
  __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  int v9; // ebp
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // edx
  const void *v16; // r12
  int v17; // ebx
  unsigned int v18; // r15d
  unsigned int v19; // r14d
  __int64 v20; // rdx
  unsigned int *v21; // rsi
  int v22; // edx
  int v23; // r9d
  wchar_t *v24; // rcx
  __int64 v25; // rdx
  int v26; // eax
  int *v27; // rcx
  int v28; // edx
  unsigned __int64 v29; // rdx
  int v30; // ecx
  __int64 v31; // rdx
  unsigned int v32; // r15d
  unsigned int *v33; // rsi
  int v34; // edx
  __int16 v35; // cx
  int v36; // ecx
  struct _KTHREAD *v37; // rax
  struct _KTHREAD *v38; // rax
  int v39; // ecx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v41; // rax
  __int64 i; // rdi
  __int64 *v43; // rcx
  __int64 v44; // [rsp+30h] [rbp-58h] BYREF
  __int64 v45; // [rsp+38h] [rbp-50h]
  unsigned __int64 v46; // [rsp+40h] [rbp-48h]
  PSLIST_ENTRY ListEntry; // [rsp+90h] [rbp+8h] BYREF
  unsigned int *v48; // [rsp+98h] [rbp+10h] BYREF

  v2 = *a1 == 15;
  ListEntry = 0LL;
  v48 = 0LL;
  if ( !v2 )
  {
    v9 = -1073741811;
    v5 = a1 + 1;
    goto LABEL_28;
  }
  v3 = a1[2];
  if ( (v3 & 8) != 0 )
  {
    v5 = a1 + 1;
    v11 = a1[1];
    if ( v11 == 7 )
    {
      a1[4] = _InterlockedIncrement(&dword_140D0C190);
      return 0;
    }
    v36 = v11 - 10;
    if ( v36 )
    {
      v39 = v36 - 1;
      if ( v39 )
      {
        if ( v39 != 1 )
        {
LABEL_59:
          v9 = -1073741637;
          goto LABEL_28;
        }
        if ( (dword_140C6A710 & 2) != 0 )
        {
          v9 = -1073741431;
          goto LABEL_28;
        }
        return 0;
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C650D8, 0LL);
      if ( qword_140C650C8 )
      {
        v41 = KeGetCurrentThread();
        --v41->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C650E0, 0LL);
        dword_140C650F8 |= 1u;
        for ( i = qword_140C650E8; (__int64 *)i != &qword_140C650E8; i = *(_QWORD *)i )
        {
          *(_DWORD *)(i + 68) |= 4u;
          KeSetEvent((PRKEVENT)(i + 88), 0, 0);
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C650E0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C650E0);
        KeAbPostRelease((ULONG_PTR)&qword_140C650E0);
        KeLeaveCriticalRegion();
        ExWaitForRundownProtectionRelease(&stru_140C650D0);
        ExRundownCompleted(&stru_140C650D0);
        qword_140C650C8 = 0LL;
        v9 = 0;
      }
      else
      {
        v9 = -1073741275;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C650D8, 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
      {
LABEL_52:
        KeAbPostRelease((ULONG_PTR)&qword_140C650D8);
        KeLeaveCriticalRegion();
LABEL_12:
        if ( v9 >= 0 )
          return (unsigned int)v9;
        goto LABEL_28;
      }
    }
    else
    {
      v37 = KeGetCurrentThread();
      --v37->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C650D8, 0LL);
      if ( qword_140C650C8 )
      {
        v9 = -1073741791;
      }
      else
      {
        v38 = KeGetCurrentThread();
        --v38->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C650E0, 0LL);
        dword_140C650F8 &= ~1u;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C650E0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C650E0);
        KeAbPostRelease((ULONG_PTR)&qword_140C650E0);
        KeLeaveCriticalRegion();
        (*(void (__fastcall **)(__int64 (__fastcall *)()))(*((_QWORD *)a1 + 2) + 32LL))(PfpPrefetchSharedConflictNotifyStart);
        v9 = 0;
        qword_140C650C8 = *((_QWORD *)a1 + 2);
        _InterlockedExchange64((volatile __int64 *)&stru_140C650D0, 0LL);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C650D8, 0xFFFFFFFFFFFFFFFFuLL) & 6) != 2 )
        goto LABEL_52;
    }
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C650D8);
    goto LABEL_52;
  }
  if ( (v3 & 4) != 0 )
  {
    v26 = a1[1];
    if ( v26 == 2 )
    {
      PfSnLogStreamCreate(*((_QWORD *)a1 + 2));
    }
    else if ( v26 )
    {
      if ( v26 == 3 )
        PfSnNameRemoveAll(*((_QWORD *)a1 + 2));
    }
    else
    {
      PfSnLogVolumeCreate(*((_QWORD *)a1 + 2));
    }
  }
  if ( (a1[2] & 1) == 0 )
    return 0;
  if ( dword_140C65360 >= (unsigned int)dword_140C65364 )
  {
    v12 = a1[1];
    v5 = a1 + 1;
    v4 = a1 + 1;
    if ( v12 != 4 && v12 != 2 && v12 != 3 )
    {
      v9 = -1073741697;
      goto LABEL_28;
    }
  }
  else
  {
    v4 = a1 + 1;
  }
  v5 = v4;
  v6 = *v4;
  if ( v6 == 4 )
  {
    v7 = *((_QWORD *)a1 + 2);
    v8 = ((*(_DWORD *)(v7 + 8) & 0xFFF) + (unsigned __int64)*(unsigned int *)(v7 + 16) + 4095) >> 12;
    if ( PfSnNumActiveTraces )
      PfSnLogFileDataAccess(*(_QWORD *)v7, *(_QWORD *)(v7 + 24), *(_QWORD *)(v7 + 32), *(_QWORD *)(v7 + 8), v8);
    if ( dword_140C65360 < (unsigned int)dword_140C65364 )
    {
      v9 = PfLogFileDataAccess(
             *(_QWORD *)(*((_QWORD *)a1 + 2) + 24LL),
             *(_QWORD *)(*((_QWORD *)a1 + 2) + 32LL),
             *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL),
             v8,
             *(_DWORD *)(*((_QWORD *)a1 + 2) + 20LL));
      goto LABEL_12;
    }
    v9 = -1073741697;
LABEL_28:
    if ( *v5 <= 3 )
      ++dword_140C65464;
    return (unsigned int)v9;
  }
  switch ( v6 )
  {
    case 0:
      v32 = 2 * *(unsigned __int16 *)(*((_QWORD *)a1 + 2) + 30LL);
      v19 = (v32 + 65) & 0xFFFFFFF8;
      v9 = PfFbLogEntryReserve(&stru_140C65220, &ListEntry, &v48, v19);
      if ( v9 < 0 )
        goto LABEL_70;
      v33 = v48;
      *v48 = (8 * v19) | *v48 & 0x80000002 | 2;
      v33[1] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 52LL);
      v33[2] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 56LL);
      *((_QWORD *)v33 + 3) = *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL);
      v34 = v33[9] ^ ((unsigned __int8)v33[9] ^ (unsigned __int8)*(_DWORD *)(*((_QWORD *)a1 + 2) + 48LL)) & 0xF;
      v33[9] = v34;
      v33[9] = v34 ^ (*(_DWORD *)(*((_QWORD *)a1 + 2) + 48LL) ^ v34) & 0xF0;
      *((_QWORD *)v33 + 2) = *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL);
      v33[8] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 24LL);
      v35 = 2 * *(_WORD *)(*((_QWORD *)a1 + 2) + 30LL);
      *((_WORD *)v33 + 20) = v35;
      *((_WORD *)v33 + 21) = v35;
      memmove(v33 + 14, *(const void **)(*((_QWORD *)a1 + 2) + 40LL), v32);
      v24 = (wchar_t *)(v33 + 14);
      *((_WORD *)v33 + *(unsigned __int16 *)(*((_QWORD *)a1 + 2) + 30LL) + 28) = 0;
      goto LABEL_26;
    case 1:
      PfLogDeleteHelper(2LL, *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL), *(unsigned int *)(*((_QWORD *)a1 + 2) + 56LL));
      return 0;
    case 2:
      v13 = *((_QWORD *)a1 + 2);
      if ( HIWORD(*(_DWORD *)(v13 + 32)) <= (unsigned int)(unsigned __int16)*(_DWORD *)(v13 + 32) )
        return 0;
      PfpRpFileKeyUpdate(&unk_140C65028, v13, 1LL);
      if ( dword_140C65360 >= (unsigned int)dword_140C65364 )
      {
        v9 = -1073741697;
        goto LABEL_28;
      }
      v14 = *((_QWORD *)a1 + 2);
      v15 = *(_DWORD *)(v14 + 32);
      v16 = (const void *)(*(_QWORD *)(v14 + 24) + 2LL * (unsigned __int16)v15);
      v17 = HIWORD(v15) - (unsigned __int16)v15;
      v18 = 2 * v17;
      v19 = (2 * v17 + 53) & 0xFFFFFFF8;
      v9 = PfFbLogEntryReserve(&stru_140C65220, &ListEntry, &v48, v19);
      if ( v9 < 0 )
      {
LABEL_70:
        if ( ListEntry )
          PfFbLogEntryComplete(ListEntry, v20, 0LL);
        goto LABEL_12;
      }
      v21 = v48;
      *v48 = *v48 & 0x80000000 | (8 * ((v18 + 53) & 0xFFFFFF8));
      v21[1] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 40LL);
      v21[2] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 44LL);
      *((_QWORD *)v21 + 3) = *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL);
      v21[8] = *(_DWORD *)(*((_QWORD *)a1 + 2) + 48LL);
      *((_QWORD *)v21 + 2) = *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL);
      v22 = v21[10] ^ ((unsigned __int8)v21[10] ^ (unsigned __int8)*(_DWORD *)(*((_QWORD *)a1 + 2) + 36LL)) & 1;
      v21[10] = v22;
      v23 = v22 ^ ((unsigned __int8)v22 ^ (unsigned __int8)(*(_DWORD *)(*((_QWORD *)a1 + 2) + 36LL) >> 3)) & 2;
      v21[10] = v23;
      v21[10] = v23 ^ ((unsigned __int8)v23 ^ (unsigned __int8)(2 * *(_DWORD *)(*((_QWORD *)a1 + 2) + 36LL))) & 4;
      *((_WORD *)v21 + 21) = v17;
      memmove(v21 + 11, v16, v18);
      v24 = (wchar_t *)(v21 + 11);
      *((_WORD *)v21 + *((unsigned __int16 *)v21 + 21) + 22) = 0;
LABEL_26:
      wcsupr(v24);
      PfFbLogEntryComplete(ListEntry, v25, v19);
      return 0;
    case 3:
      v31 = *((_QWORD *)a1 + 2);
      if ( HIWORD(*(_DWORD *)(v31 + 32)) <= (unsigned int)(unsigned __int16)*(_DWORD *)(v31 + 32) )
        return 0;
      PfpRpFileKeyUpdate(&unk_140C65028, v31, 0LL);
      if ( dword_140C65360 < (unsigned int)dword_140C65364 )
      {
        PfLogDeleteHelper(0LL, *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL), *(unsigned int *)(*((_QWORD *)a1 + 2) + 44LL));
        return 0;
      }
      v9 = -1073741697;
      goto LABEL_28;
    case 8:
      v27 = (int *)*((_QWORD *)a1 + 2);
      HIDWORD(v44) = 0;
      v28 = *v27;
      LODWORD(v44) = v27[1];
      v45 = *((_QWORD *)v27 + 1);
      v46 = (*((_QWORD *)v27 + 2) + 4095LL) & 0xFFFFFFFFFFFFF000uLL | (2LL * (v28 & 3));
      v29 = ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
          + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24);
      v30 = 24;
      goto LABEL_34;
    case 13:
      v43 = (__int64 *)*((_QWORD *)a1 + 2);
      if ( !v43[1] )
      {
        v9 = -1073741747;
        goto LABEL_28;
      }
      v45 = v43[1];
      v46 = (unsigned int)dword_140D0C190;
      v44 = *v43;
      v29 = ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
          + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24);
      v30 = 31;
LABEL_34:
      PfLogEvent(v30, dword_140C64FAC + (v29 >> 10), &v44, 0x18u);
      v9 = 0;
      break;
    default:
      goto LABEL_59;
  }
  return (unsigned int)v9;
}
