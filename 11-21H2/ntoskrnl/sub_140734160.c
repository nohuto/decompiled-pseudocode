/*
 * XREFs of sub_140734160 @ 0x140734160
 * Callers:
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     ObDuplicateObject @ 0x1407A1F80 (ObDuplicateObject.c)
 * Callees:
 *     sub_14025032C @ 0x14025032C (sub_14025032C.c)
 *     PsDereferenceSiloContext @ 0x140251C40 (PsDereferenceSiloContext.c)
 *     sub_14025C4BC @ 0x14025C4BC (sub_14025C4BC.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402D7F90 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402D7FB0 (PsAttachSiloToCurrentThread.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     PsGetProcessServerSilo @ 0x140347680 (PsGetProcessServerSilo.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     sub_140353BB0 @ 0x140353BB0 (sub_140353BB0.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x14041AC40 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     KeRaiseUserException @ 0x14056E010 (KeRaiseUserException.c)
 *     sub_140668C60 @ 0x140668C60 (sub_140668C60.c)
 *     sub_14066960C @ 0x14066960C (sub_14066960C.c)
 *     sub_14066B3D8 @ 0x14066B3D8 (sub_14066B3D8.c)
 *     sub_1406A9B40 @ 0x1406A9B40 (sub_1406A9B40.c)
 *     sub_1406B96B0 @ 0x1406B96B0 (sub_1406B96B0.c)
 *     sub_1406B96E8 @ 0x1406B96E8 (sub_1406B96E8.c)
 *     sub_140733340 @ 0x140733340 (sub_140733340.c)
 *     sub_1407ED9FC @ 0x1407ED9FC (sub_1407ED9FC.c)
 *     sub_140883EDC @ 0x140883EDC (sub_140883EDC.c)
 *     SeCloseObjectAuditAlarm @ 0x1409CAD20 (SeCloseObjectAuditAlarm.c)
 *     sub_1409E3B48 @ 0x1409E3B48 (sub_1409E3B48.c)
 *     sub_1409F92FC @ 0x1409F92FC (sub_1409F92FC.c)
 */

__int64 __fastcall sub_140734160(__int64 BugCheckParameter1, char a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // r14
  struct _EX_RUNDOWN_REF *v5; // rsi
  __int64 Count; // r15
  signed __int64 *v7; // rbx
  signed __int64 v8; // r8
  unsigned __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // r13
  unsigned int v12; // r12d
  ULONG_PTR v13; // rdi
  signed __int64 v14; // rax
  __int64 v15; // r8
  unsigned __int64 v16; // rcx
  __int64 v17; // rdi
  signed __int64 v18; // r14
  struct _EX_RUNDOWN_REF *v19; // r13
  struct _KTHREAD *v21; // rax
  __int64 v22; // rdx
  int v23; // ecx
  __int64 ProcessServerSilo; // rax
  __int64 v25; // rbx
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rbx
  struct _KTHREAD *v29; // rax
  volatile signed __int32 *v30; // r15
  struct _KTHREAD *v31; // rax
  unsigned __int64 v32; // rax
  _QWORD *v33; // r8
  _QWORD *v34; // rbx
  int v35; // r8d
  int v36; // ecx
  struct _KTHREAD *v37; // rax
  __int64 v38; // rdx
  _QWORD *v39; // rax
  __int64 v40; // rax
  signed __int32 v41[8]; // [rsp+0h] [rbp-B9h] BYREF
  char v42; // [rsp+30h] [rbp-89h]
  char v43; // [rsp+31h] [rbp-88h] BYREF
  char v44; // [rsp+32h] [rbp-87h]
  _BYTE v45[5]; // [rsp+33h] [rbp-86h] BYREF
  ULONG_PTR BugCheckParameter1a; // [rsp+38h] [rbp-81h]
  __int128 v47; // [rsp+48h] [rbp-71h] BYREF
  __int64 v48; // [rsp+58h] [rbp-61h]
  int v49; // [rsp+60h] [rbp-59h]
  unsigned __int64 v50; // [rsp+68h] [rbp-51h]
  __int64 v51; // [rsp+70h] [rbp-49h]
  _OWORD v52[3]; // [rsp+78h] [rbp-41h] BYREF
  _OWORD v53[3]; // [rsp+A8h] [rbp-11h] BYREF

  CurrentThread = KeGetCurrentThread();
  v45[0] = 0;
  v4 = BugCheckParameter1;
  v43 = 0;
  v44 = 0;
  v5 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)CurrentThread + 23);
  if ( !a2
    && (BugCheckParameter1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL
    && BugCheckParameter1 != -2
    && BugCheckParameter1 != -1 )
  {
    v4 = BugCheckParameter1 ^ 0xFFFFFFFF80000000uLL;
    Count = qword_140C24F88;
    BugCheckParameter1a = (ULONG_PTR)PsInitialSystemProcess;
    goto LABEL_4;
  }
  BugCheckParameter1a = *((_QWORD *)CurrentThread + 23);
  if ( *((_BYTE *)KeGetCurrentThread() + 586) == 1 )
  {
    Count = sub_14066B3D8(v5);
    if ( Count )
    {
      v44 = 1;
      goto LABEL_4;
    }
    return (unsigned int)-1073741816;
  }
  Count = v5[174].Count;
  if ( Count == qword_140C24F88 )
    return (unsigned int)-1073741816;
LABEL_4:
  --*((_WORD *)CurrentThread + 242);
  if ( (v4 & 0x3FC) == 0 || (v7 = (signed __int64 *)sub_140733340((unsigned int *)Count, v4)) == 0LL )
  {
LABEL_80:
    sub_1402AC800((__int64)CurrentThread);
    if ( v4 > 0 || v4 < -6 )
    {
      sub_14025C4BC(Count, v45, &v43);
      if ( (*(_BYTE *)(Count + 44) & 0x10) != 0 && v43 )
        sub_14025032C(Count, v4, a2);
      if ( a2 )
      {
        if ( (NtGlobalFlag & 0x400000) != 0 || v5[175].Count || *(_QWORD *)(Count + 96) )
        {
          if ( *((_BYTE *)KeGetCurrentThread() + 586) == 1 )
            v12 = -1073741816;
          else
            v12 = KeRaiseUserException(0xC0000008);
          goto LABEL_37;
        }
      }
      else if ( (*((_DWORD *)CurrentThread + 344) & 1) == 0 && v5[170].Count && (_BYTE)KdDebuggerEnabled )
      {
        KeBugCheckEx(0x93u, v4, 1uLL, 0LL, 0LL);
      }
    }
    v36 = -1073741816;
    if ( (unsigned __int64)(v4 + 6) <= 5 )
      v36 = 0;
    v12 = v36;
    goto LABEL_37;
  }
  do
  {
    while ( 1 )
    {
      _m_prefetchw(v7);
      v8 = *v7;
      if ( (*v7 & 1) != 0 )
        break;
      if ( !v8 )
        goto LABEL_80;
      sub_1407ED9FC(Count, v7, v8);
    }
  }
  while ( v8 != _InterlockedCompareExchange64(v7, v8 - 1, v8) );
  v9 = (*v7 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  v42 = 0;
  memset(v52, 0, sizeof(v52));
  v51 = BYTE1(v9);
  v10 = qword_140D07490[*(unsigned __int8 *)(v9 + 24) ^ (unsigned __int8)dword_140D06C0C ^ (unsigned __int64)BYTE1(v9)];
  if ( *(_QWORD *)(v10 + 168) )
  {
    if ( *((_QWORD *)KeGetCurrentThread() + 23) != BugCheckParameter1a )
    {
      sub_14030D5C0(BugCheckParameter1a, 0LL, (__int64)v52, BugCheckParameter1a);
      v42 = 1;
    }
    v19 = (struct _EX_RUNDOWN_REF *)BugCheckParameter1a;
    if ( !(unsigned __int8)sub_14042A5E0(BugCheckParameter1a, v9 + 48) )
    {
      _InterlockedExchangeAdd64(v7, 1uLL);
      _InterlockedOr(v41, 0);
      if ( *(_QWORD *)(Count + 48) )
        ExfUnblockPushLock((volatile __int64 *)(Count + 48), 0LL);
      KeLeaveCriticalRegion();
      if ( v42 )
        sub_1402D0930((__int64)v52, 0LL);
      v12 = -1073741259;
      goto LABEL_38;
    }
  }
  v11 = *v7 >> 17;
  if ( (v11 & 1) == 0 )
  {
    if ( (xmmword_140D06910 & 0x40) != 0 )
    {
      v38 = v4;
      if ( (PEPROCESS)BugCheckParameter1a == PsInitialSystemProcess )
        v38 = v4 | 0x80000000LL;
      sub_1409E3B48(4385LL, v38, v9 + 48, v10);
    }
    if ( *(_QWORD *)(Count + 96) )
      sub_1409F92FC(Count, KeGetCurrentThread(), v4, 2LL);
    v12 = 0;
    v49 = (unsigned __int16)((unsigned __int64)*(unsigned int *)v7 >> 1);
    *v7 = 0LL;
    _InterlockedOr(v41, 0);
    if ( *(_QWORD *)(Count + 48) )
      ExfUnblockPushLock((volatile __int64 *)(Count + 48), 0LL);
    v50 = v4 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( *(_DWORD *)(Count + 4) )
    {
      v39 = (_QWORD *)sub_140883EDC(Count);
      if ( v39 )
        *v39 = 0LL;
    }
    v7[1] = 0LL;
    if ( (*(_BYTE *)(Count + 44) & 1) != 0 )
    {
      v13 = Count + 64;
      ExAcquirePushLockExclusiveEx(Count + 64, 0LL);
      v40 = *(_QWORD *)(Count + 80);
      if ( v40 )
        *(_QWORD *)(v40 + 8) = v7;
      else
        *(_QWORD *)(Count + 72) = v7;
      *(_QWORD *)(Count + 80) = v7;
    }
    else
    {
      v13 = Count + ((HIDWORD(KeGetPcr()[1].LockArray) + 1LL) << 6);
      ExAcquirePushLockExclusiveEx(v13, 0LL);
      v14 = *(_QWORD *)(v13 + 8);
      v7[1] = v14;
      if ( !v14 )
        *(_QWORD *)(v13 + 16) = v7;
      *(_QWORD *)(v13 + 8) = v7;
    }
    --*(_DWORD *)(v13 + 24);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v13);
    sub_1402AFC00(v13);
    KeLeaveCriticalRegion();
    if ( (v11 & 4) != 0 )
    {
      LOBYTE(v15) = 1;
      SeCloseObjectAuditAlarm(v9 + 48, v4 & 0xFFFFFFFFFFFFFFFCuLL, v15);
    }
    v16 = *(unsigned __int8 *)(v9 + 24) ^ (unsigned __int8)dword_140D06C0C ^ (unsigned __int64)(unsigned __int8)v51;
    memset(v53, 0, sizeof(v53));
    v17 = qword_140D07490[v16];
    if ( (*(_BYTE *)(v17 + 66) & 0x10) == 0 && (*(_BYTE *)(v9 + 27) & 8) == 0 )
    {
      v18 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 8), 0xFFFFFFFFFFFFFFFFuLL);
LABEL_27:
      if ( *(_QWORD *)(v17 + 128) )
      {
        if ( *((_QWORD *)KeGetCurrentThread() + 23) == BugCheckParameter1a )
        {
          sub_14042A5E0(BugCheckParameter1a, v9 + 48);
        }
        else
        {
          ProcessServerSilo = PsGetProcessServerSilo(BugCheckParameter1a);
          v25 = PsAttachSiloToCurrentThread(ProcessServerSilo);
          sub_14030D5C0(BugCheckParameter1a, 0LL, (__int64)v53, v26);
          sub_14042A5E0(BugCheckParameter1a, v9 + 48);
          sub_1402D0930((__int64)v53, 0LL);
          PsDetachSiloFromCurrentThread(v25);
        }
      }
      if ( v18 == 1 && (*(_BYTE *)(v9 + 26) & 2) != 0 )
      {
        v27 = byte_140C25440[*(_BYTE *)(v9 + 26) & 3];
        v28 = v9 - v27;
        if ( v9 != v27 )
        {
          while ( 1 )
          {
            v29 = KeGetCurrentThread();
            --*((_WORD *)v29 + 242);
            ExAcquirePushLockExclusiveEx(v9 + 16, 0LL);
            v30 = *(volatile signed __int32 **)v28;
            if ( !*(_QWORD *)v28 || (*(_BYTE *)(v9 + 27) & 0x10) != 0 || *(_QWORD *)(v9 + 8) )
            {
              ExReleasePushLockEx(v9 + 16, 0LL);
              KeLeaveCriticalRegion();
              goto LABEL_32;
            }
            v48 = 0x10000000000LL;
            v31 = KeGetCurrentThread();
            v47 = (unsigned __int64)v30;
            --*((_WORD *)v31 + 242);
            v32 = sub_140347C10((__int64)(v30 + 74), 0LL);
            if ( !_interlockedbittestandset64(v30 + 74, 0LL) )
              break;
            if ( v32 )
              sub_140353BB0((ULONG_PTR)(v30 + 74), v32);
            KeLeaveCriticalRegion();
            *(_QWORD *)&v47 = 0LL;
            BYTE5(v48) = 0;
            ObfReferenceObject((PVOID)v30);
            ExReleasePushLockEx(v9 + 16, 0LL);
            KeLeaveCriticalRegion();
            sub_1406B96B0((__int64)&v47, (__int64)v30);
            v37 = KeGetCurrentThread();
            --*((_WORD *)v37 + 242);
            ExAcquirePushLockExclusiveEx(v9 + 16, 0LL);
            if ( *(volatile signed __int32 **)v28 == v30 && (*(_BYTE *)(v9 + 27) & 0x10) == 0 && !*(_QWORD *)(v9 + 8) )
            {
              PsDereferenceSiloContext((void *)v30);
              goto LABEL_67;
            }
            if ( (_QWORD)v47 )
              sub_14066960C((__int64)&v47);
            ExReleasePushLockEx(v9 + 16, 0LL);
            KeLeaveCriticalRegion();
            PsDereferenceSiloContext((void *)v30);
          }
          if ( v32 )
            *(_BYTE *)(v32 + 18) = 1;
LABEL_67:
          if ( *(_DWORD *)(v28 + 24) )
          {
            ExReleasePushLockEx(v9 + 16, 0LL);
            KeLeaveCriticalRegion();
          }
          else
          {
            if ( (POBJECT_TYPE)qword_140D07490[*(unsigned __int8 *)(v9 + 24) ^ (unsigned __int8)dword_140D06C0C ^ (unsigned __int64)(unsigned __int8)v51] == qword_140C24FC0 )
              sub_1406B96E8(v9 + 48);
            sub_1406A9B40((unsigned __int16 *)(v28 + 8), 0, (__int64 *)&v47);
            v33 = (_QWORD *)*((_QWORD *)&v47 + 1);
            v34 = (_QWORD *)**((_QWORD **)&v47 + 1);
            *(_QWORD *)(*(_QWORD *)(**((_QWORD **)&v47 + 1) + 8LL)
                      - 48LL
                      - byte_140C25440[*(_BYTE *)(*(_QWORD *)(**((_QWORD **)&v47 + 1) + 8LL) - 48LL + 26) & 3]) = 0LL;
            *v33 = *v34;
            *v34 = 0LL;
            ExReleasePushLockEx(v9 + 16, 0LL);
            KeLeaveCriticalRegion();
            if ( v34 )
              sub_140668C60(v34, (void **)&v47);
          }
          if ( (_QWORD)v47 )
            sub_14066960C((__int64)&v47);
        }
      }
LABEL_32:
      _InterlockedDecrement((volatile signed __int32 *)(v17 + 48));
      if ( v42 )
        sub_1402D0930((__int64)v52, 0LL);
      if ( v49 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)v9, -v49);
      ObfDereferenceObjectWithTag((PVOID)(v9 + 48), 0x6E48624Fu);
      goto LABEL_37;
    }
    v21 = KeGetCurrentThread();
    --*((_WORD *)v21 + 242);
    ExAcquirePushLockExclusiveEx(v9 + 16, 0LL);
    v18 = *(_QWORD *)(v9 + 8);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 8), 0xFFFFFFFFFFFFFFFFuLL) == 1
      && (*(_BYTE *)(v9 + 27) & 8) != 0 )
    {
      *(_QWORD *)(v9 - byte_140C25440[*(_BYTE *)(v9 + 26) & 0x1F]) = 0LL;
    }
    if ( (*(_BYTE *)(v17 + 66) & 0x10) == 0 )
    {
LABEL_57:
      ExReleasePushLockEx(v9 + 16, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_27;
    }
    if ( (*(_BYTE *)(v9 + 26) & 4) != 0 )
      v22 = v9 - byte_140C25440[*(_BYTE *)(v9 + 26) & 7];
    else
      v22 = 0LL;
    if ( (*(_BYTE *)(v9 + 27) & 0x40) != 0 )
    {
      v23 = *(_DWORD *)(v22 + 8);
    }
    else
    {
      v35 = **(_DWORD **)v22;
      v22 = *(_QWORD *)v22 + 8LL;
      if ( !v35 )
        goto LABEL_54;
      while ( 1 )
      {
        v23 = *(_DWORD *)(v22 + 8);
        if ( (v23 & 0xFFFFFF) != 0 && *(_QWORD *)v22 == BugCheckParameter1a )
          break;
        v22 += 16LL;
        if ( !--v35 )
          goto LABEL_54;
      }
    }
    *(_DWORD *)(v22 + 8) = v23 ^ (v23 ^ (v23 - 1)) & 0xFFFFFF;
LABEL_54:
    if ( !*(_BYTE *)(v22 + 11) && (*(_DWORD *)(v22 + 8) & 0xFFFFFF) == 0 )
      *(_QWORD *)v22 = 0LL;
    goto LABEL_57;
  }
  if ( !a2 )
    KeBugCheckEx(0x93u, v4, 0LL, 0LL, 0LL);
  _InterlockedExchangeAdd64(v7, 1uLL);
  _InterlockedOr(v41, 0);
  if ( *(_QWORD *)(Count + 48) )
    ExfUnblockPushLock((volatile __int64 *)(Count + 48), 0LL);
  KeLeaveCriticalRegion();
  if ( v42 )
    sub_1402D0930((__int64)v52, 0LL);
  if ( *((_BYTE *)KeGetCurrentThread() + 586) != 1
    && ((NtGlobalFlag & 0x400000) != 0
     || *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1400LL)
     || *(_QWORD *)(Count + 96)) )
  {
    v12 = KeRaiseUserException(0xC0000235);
  }
  else
  {
    v12 = -1073741259;
  }
LABEL_37:
  v19 = (struct _EX_RUNDOWN_REF *)BugCheckParameter1a;
LABEL_38:
  if ( v44 )
    sub_1402AD030(v19 + 139);
  return v12;
}
