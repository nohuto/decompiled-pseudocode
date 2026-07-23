/*
 * XREFs of PiUEventFreeClientRegistrationContext @ 0x14077F198
 * Callers:
 *     PiUEventDispatch @ 0x14077F6E0 (PiUEventDispatch.c)
 *     PiUEventHandleRegistration @ 0x14077FBAC (PiUEventHandleRegistration.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     ZwDeleteWnfStateName @ 0x14041C280 (ZwDeleteWnfStateName.c)
 *     memset @ 0x140435400 (memset.c)
 *     PiDmObjectRelease @ 0x1406D6C18 (PiDmObjectRelease.c)
 *     SeReleaseSubjectContext @ 0x140738340 (SeReleaseSubjectContext.c)
 *     PiUEventDequeuePendingEventWorker @ 0x14078258C (PiUEventDequeuePendingEventWorker.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall PiUEventFreeClientRegistrationContext(char *P, char a2)
{
  PFAST_MUTEX *v2; // r14
  __int64 v4; // r8
  _QWORD *v5; // rcx
  PVOID *v6; // rax
  int v7; // ecx
  int v8; // ecx
  char *v9; // rdi
  char *v10; // rdi
  char *v11; // rcx
  int v12; // ecx
  char *v13; // rdx
  char *v14; // rdx

  v2 = (PFAST_MUTEX *)(P + 16);
  if ( a2 )
  {
    ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
    ExAcquireFastMutex(*v2);
    v5 = *(_QWORD **)P;
    if ( *(char **)(*(_QWORD *)P + 8LL) != P || (v6 = (PVOID *)*((_QWORD *)P + 1), *v6 != P) )
      __fastfail(3u);
    *v6 = v5;
    v5[1] = v6;
    v7 = *((_DWORD *)P + 33);
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v12 = v8 - 1;
        if ( v12 )
        {
          if ( v12 == 1 )
            --PiUEventDevInstancePropertyClientCount;
        }
        else
        {
          --PiUEventDevInstanceClientCount;
        }
      }
      else
      {
        --PiUEventDevHandleClientCount;
      }
    }
    else
    {
      --PiUEventDevInterfaceClientCount;
    }
    v9 = (char *)*((_QWORD *)P + 14);
    while ( v9 != P + 112 )
    {
      v13 = v9;
      v9 = *(char **)v9;
      PiUEventDequeuePendingEventWorker(P, v13, 0LL);
    }
    v10 = (char *)*((_QWORD *)P + 12);
    while ( v10 != P + 96 )
    {
      v14 = v10;
      LOBYTE(v4) = 1;
      v10 = *(char **)v10;
      PiUEventDequeuePendingEventWorker(P, v14, v4);
    }
    ExReleaseFastMutex(*v2);
    ExReleaseFastMutex(&PiUEventClientRegistrationListLock);
  }
  if ( *((_DWORD *)P + 33) == 1 || (unsigned int)(*((_DWORD *)P + 33) - 2) <= 1 )
  {
    v11 = (char *)*((_QWORD *)P + 3);
    if ( v11 )
      PiDmObjectRelease(v11);
  }
  ZwDeleteWnfStateName((PCWNF_STATE_NAME)P + 11);
  SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(P + 56));
  ExFreePoolWithTag(*v2, 0x59706E50u);
  memset(P, 0, 0x90uLL);
  ExFreePoolWithTag(P, 0x59706E50u);
}
