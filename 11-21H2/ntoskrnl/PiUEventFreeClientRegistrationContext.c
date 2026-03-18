/*
 * XREFs of PiUEventFreeClientRegistrationContext @ 0x1406DD8D0
 * Callers:
 *     PiUEventDispatch @ 0x14078C520 (PiUEventDispatch.c)
 *     PiUEventHandleRegistration @ 0x14078D764 (PiUEventHandleRegistration.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     ZwDeleteWnfStateName @ 0x14041D320 (ZwDeleteWnfStateName.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PiDmObjectRelease @ 0x14077B394 (PiDmObjectRelease.c)
 *     PiUEventDequeuePendingEventWorker @ 0x14078AE24 (PiUEventDequeuePendingEventWorker.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall PiUEventFreeClientRegistrationContext(char *P, __int64 a2)
{
  __int64 v3; // r8
  PFAST_MUTEX v4; // rcx
  PVOID *v5; // rax
  int v6; // ecx
  char *v7; // rdi
  char *v8; // rdi
  int v9; // ecx
  void *v10; // rcx
  int v11; // ecx
  char *v12; // rdx
  char *v13; // rdx

  if ( (_BYTE)a2 )
  {
    ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
    ExAcquireFastMutex(*((PFAST_MUTEX *)P + 2));
    v4 = *(PFAST_MUTEX *)P;
    if ( *(char **)(*(_QWORD *)P + 8LL) != P || (v5 = (PVOID *)*((_QWORD *)P + 1), *v5 != P) )
      __fastfail(3u);
    *v5 = v4;
    v4->Owner = v5;
    v6 = *((_DWORD *)P + 33);
    if ( v6 )
    {
      v9 = v6 - 1;
      if ( v9 )
      {
        v11 = v9 - 1;
        if ( v11 )
        {
          if ( v11 == 1 )
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
    v7 = (char *)*((_QWORD *)P + 14);
    while ( v7 != P + 112 )
    {
      v13 = v7;
      v7 = *(char **)v7;
      PiUEventDequeuePendingEventWorker(P, v13, 0LL);
    }
    v8 = (char *)*((_QWORD *)P + 12);
    while ( v8 != P + 96 )
    {
      v12 = v8;
      LOBYTE(v3) = 1;
      v8 = *(char **)v8;
      PiUEventDequeuePendingEventWorker(P, v12, v3);
    }
    KeReleaseGuardedMutex(*((PKGUARDED_MUTEX *)P + 2));
    KeReleaseGuardedMutex(&PiUEventClientRegistrationListLock);
  }
  if ( *((_DWORD *)P + 33) == 1 || (unsigned int)(*((_DWORD *)P + 33) - 2) < 2 )
  {
    v10 = (void *)*((_QWORD *)P + 3);
    if ( v10 )
      PiDmObjectRelease(v10);
  }
  ZwDeleteWnfStateName((__int64)(P + 88), a2);
  SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(P + 56));
  ExFreePoolWithTag(*((PVOID *)P + 2), 0x59706E50u);
  memset(P, 0, 0x90uLL);
  ExFreePoolWithTag(P, 0x59706E50u);
}
