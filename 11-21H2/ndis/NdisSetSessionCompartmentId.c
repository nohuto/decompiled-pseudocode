/*
 * XREFs of NdisSetSessionCompartmentId @ 0x1C00B1CA0
 * Callers:
 *     ?ndisNsiSetAllSessionInformation@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C00B1C50 (-ndisNsiSetAllSessionInformation@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     NdisGetSessionCompartmentId @ 0x1C00089C0 (NdisGetSessionCompartmentId.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C002BA64 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     memset @ 0x1C0036340 (memset.c)
 *     ?ndisCmLazyInitializeCleanup@@YAXXZ @ 0x1C00B1B0C (-ndisCmLazyInitializeCleanup@@YAXXZ.c)
 *     ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x1C00B2EEC (-ndisCmValidateCompartmentChange@@YAPEAXII@Z.c)
 *     ?ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z @ 0x1C00B3B78 (-ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z.c)
 */

__int64 __fastcall NdisSetSessionCompartmentId(unsigned int a1, unsigned int a2)
{
  void *v2; // r14
  unsigned int ThreadSessionId; // ebp
  void *v5; // rdi
  __int64 v6; // r12
  __int64 v7; // r15
  KIRQL v8; // r13
  char *Pool2; // rbx
  unsigned int SessionCompartmentId; // eax
  PVOID v12; // r15

  v2 = 0LL;
  ThreadSessionId = a1;
  if ( a1 == -1 )
    ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
  if ( a2 )
  {
    SessionCompartmentId = NdisGetSessionCompartmentId(ThreadSessionId);
    v5 = ndisCmValidateCompartmentChange(SessionCompartmentId, a2);
    if ( !v5 )
      return 3221225485LL;
  }
  else
  {
    v5 = 0LL;
  }
  v6 = ThreadSessionId + 1;
  v7 = v6;
  v8 = KeAcquireSpinLockRaiseToDpc(&qword_1C00ECD98);
  if ( ThreadSessionId < dword_1C00EE550 )
  {
    Pool2 = (char *)qword_1C00EE558;
  }
  else
  {
    ndisCmLazyInitializeCleanup();
    Pool2 = (char *)ExAllocatePool2(66LL, 24 * v6, 1835222094);
    if ( !Pool2 )
    {
      KeReleaseSpinLock(&qword_1C00ECD98, v8);
      if ( v5 )
        ndisIfDereferenceCompartmentForUser(v5);
      return 3221225626LL;
    }
    v12 = qword_1C00EE558;
    if ( qword_1C00EE558 )
    {
      memmove(Pool2, qword_1C00EE558, 24LL * (unsigned int)dword_1C00EE550);
      ExFreePoolWithTag(v12, 0);
    }
    memset(&Pool2[24 * dword_1C00EE550], 0, 24LL * (unsigned int)(v6 - dword_1C00EE550));
    v7 = ThreadSessionId + 1;
    qword_1C00EE558 = Pool2;
    dword_1C00EE550 = v6;
  }
  if ( *(_QWORD *)&Pool2[24 * ThreadSessionId + 8] )
  {
    v2 = *(void **)&Pool2[24 * ThreadSessionId + 16];
    if ( !a2 )
    {
      *(_QWORD *)&Pool2[24 * ThreadSessionId + 8] = 0LL;
      a2 = 1;
      v5 = 0LL;
    }
    goto LABEL_21;
  }
  if ( a2 )
  {
    *(_QWORD *)&Pool2[24 * ThreadSessionId + 8] = v7;
LABEL_21:
    *(_QWORD *)&Pool2[24 * ThreadSessionId + 16] = v5;
    *(_DWORD *)&Pool2[24 * ThreadSessionId] = a2;
  }
  KeReleaseSpinLock(&qword_1C00ECD98, v8);
  if ( v2 )
    ndisIfDereferenceCompartmentForUser(v2);
  _InterlockedExchangeAdd(&dword_1C00EE548, 2u);
  return 0LL;
}
