/*
 * XREFs of KiSoftParkElectionUnparkProcessor @ 0x1404112D8
 * Callers:
 *     KiSoftParkElectionDpcRoutine @ 0x14057E740 (KiSoftParkElectionDpcRoutine.c)
 * Callees:
 *     KiCompleteRescheduleContext @ 0x140201EB0 (KiCompleteRescheduleContext.c)
 *     KiStartRescheduleContext @ 0x140238FF0 (KiStartRescheduleContext.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140242670 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140246840 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KeAddProcessorAffinityEx @ 0x140257460 (KeAddProcessorAffinityEx.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140307B50 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiUpdateThreadPriority @ 0x140307E20 (KiUpdateThreadPriority.c)
 *     KiCommitRescheduleContext @ 0x140308804 (KiCommitRescheduleContext.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KiAdjustReadyQueueScanOwnerOnParkingChange @ 0x14057DEAC (KiAdjustReadyQueueScanOwnerOnParkingChange.c)
 */

char __fastcall KiSoftParkElectionUnparkProcessor(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 v8; // r14
  __int64 v9; // rdx
  int v10; // r8d
  char v11; // al
  char v12; // r14
  bool v13; // si
  int v14; // eax
  char v15; // r11
  int v16; // edx
  unsigned __int16 *v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v21; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int8 v23[336]; // [rsp+40h] [rbp-C0h] BYREF

  memset(v23, 0, sizeof(v23));
  v22 = 0LL;
  KiAcquirePrcbLocksForIsolationUnit(a2, 0, &v22);
  v8 = *(_QWORD *)(a2 + 200);
  _InterlockedXor64((volatile signed __int64 *)(a3 + 80), v8);
  KiAdjustReadyQueueScanOwnerOnParkingChange(a2, a3, 0LL, 0LL);
  v11 = *(_BYTE *)(a2 + 35) & 0xF7;
  *(_BYTE *)(a2 + 35) = v11;
  if ( (v11 & 1) != 0 )
  {
    v12 = 0;
    v13 = 0;
  }
  else
  {
    v21 &= v10;
    while ( _interlockedbittestandset64((volatile signed __int32 *)a3, 0LL) )
    {
      do
        KeYieldProcessorEx(&v21);
      while ( *(_QWORD *)a3 );
    }
    *(_QWORD *)(a3 + 8) ^= v8;
    _InterlockedAnd64((volatile signed __int64 *)a3, 0LL);
    *(_BYTE *)(a2 + 13243) = 1;
    v12 = 1;
    v13 = a2 != a1;
  }
  KiUpdateThreadPriority(a2, v9, *(_QWORD *)(a2 + 24), 0, v12);
  _InterlockedIncrement16((volatile signed __int16 *)(MmWriteableSharedUserData + 874));
  if ( v12 )
  {
    memset(v23, 0, sizeof(v23));
    KiStartRescheduleContext((__int64)v23, &v22, 0LL);
    KiSearchForNewThreadsForRescheduleContext(v23, (__int64)a4);
    KiCommitRescheduleContext(v23, a1, 0, a4);
  }
  LOBYTE(v14) = KiReleasePrcbLocksForIsolationUnit(&v22);
  if ( v15 )
    LOBYTE(v14) = KiCompleteRescheduleContext(v23, a1);
  if ( v13 )
  {
    LOBYTE(v14) = *(_BYTE *)(a1 + 12761);
    if ( (_BYTE)v14 )
    {
      if ( (_BYTE)v14 == 1 )
      {
        v16 = *(_DWORD *)(a1 + 12764);
        if ( v16 == *(_DWORD *)(a2 + 36) )
          return v14;
        *(_BYTE *)(a1 + 12761) = 2;
        v17 = (unsigned __int16 *)(a1 + 12768);
        LOBYTE(v14) = KeAddProcessorAffinityEx(v17, v16);
      }
      else
      {
        v17 = (unsigned __int16 *)(a1 + 12768);
      }
      v18 = *(unsigned __int8 *)(a2 + 208);
      v19 = *(_QWORD *)(a2 + 200);
      if ( *v17 <= (unsigned __int16)v18 )
      {
        if ( v17[1] <= (unsigned __int16)v18 )
          return v14;
        LOBYTE(v14) = v18 + 1;
        *v17 = v18 + 1;
      }
      *(_QWORD *)&v17[4 * v18 + 4] |= v19;
      return v14;
    }
    *(_BYTE *)(a1 + 12761) = 1;
    v14 = *(_DWORD *)(a2 + 36);
    *(_DWORD *)(a1 + 12764) = v14;
  }
  return v14;
}
