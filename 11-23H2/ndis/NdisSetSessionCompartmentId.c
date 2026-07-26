/*
 * XREFs of NdisSetSessionCompartmentId @ 0x1C00B6EB0
 * Callers:
 *     ?ndisNsiSetAllSessionInformation@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C00B6E60 (-ndisNsiSetAllSessionInformation@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     NdisGetSessionCompartmentId @ 0x1C0006AC0 (NdisGetSessionCompartmentId.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C002F7C8 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ?ndisCmLazyInitializeCleanup@@YAXXZ @ 0x1C00B6D0C (-ndisCmLazyInitializeCleanup@@YAXXZ.c)
 *     ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x1C00B813C (-ndisCmValidateCompartmentChange@@YAPEAXII@Z.c)
 *     ?ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z @ 0x1C00B8B6C (-ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z.c)
 */

__int64 __fastcall NdisSetSessionCompartmentId(unsigned int a1, unsigned int a2)
{
  void *v2; // r14
  unsigned int ThreadSessionId; // ebp
  void *v5; // rdi
  __int64 v6; // r12
  KIRQL v7; // r13
  char *Pool2; // rbx
  unsigned int SessionCompartmentId; // eax
  PVOID v11; // r15

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
  v7 = KeAcquireSpinLockRaiseToDpc(&qword_1C00F5D80);
  if ( ThreadSessionId < dword_1C00F7620 )
  {
    Pool2 = (char *)qword_1C00F7628;
  }
  else
  {
    ndisCmLazyInitializeCleanup();
    Pool2 = (char *)ExAllocatePool2(66LL, 24 * v6, 1835222094);
    if ( !Pool2 )
    {
      KeReleaseSpinLock(&qword_1C00F5D80, v7);
      if ( v5 )
        ndisIfDereferenceCompartmentForUser(v5);
      return 3221225626LL;
    }
    v11 = qword_1C00F7628;
    if ( qword_1C00F7628 )
    {
      memmove(Pool2, qword_1C00F7628, 24LL * (unsigned int)dword_1C00F7620);
      ExFreePoolWithTag(v11, 0);
    }
    memset(&Pool2[24 * dword_1C00F7620], 0, 24LL * (ThreadSessionId + 1 - dword_1C00F7620));
    qword_1C00F7628 = Pool2;
    dword_1C00F7620 = ThreadSessionId + 1;
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
    *(_QWORD *)&Pool2[24 * ThreadSessionId + 8] = v6;
LABEL_21:
    *(_QWORD *)&Pool2[24 * ThreadSessionId + 16] = v5;
    *(_DWORD *)&Pool2[24 * ThreadSessionId] = a2;
  }
  KeReleaseSpinLock(&qword_1C00F5D80, v7);
  if ( v2 )
    ndisIfDereferenceCompartmentForUser(v2);
  _InterlockedExchangeAdd(&dword_1C00F75B8, 2u);
  return 0LL;
}
