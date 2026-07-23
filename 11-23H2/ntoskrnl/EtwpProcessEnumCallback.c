/*
 * XREFs of EtwpProcessEnumCallback @ 0x140820730
 * Callers:
 *     EtwpProcessThreadImageRundown @ 0x140820620 (EtwpProcessThreadImageRundown.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     KeGetPrcb @ 0x1402573F0 (KeGetPrcb.c)
 *     ExAcquireRundownProtection_0 @ 0x14028B5F0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     PsGetProcessServerSilo @ 0x14028C410 (PsGetProcessServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140297924 (PsGetServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     EtwpEnumerateAddressSpace @ 0x1406ADB2C (EtwpEnumerateAddressSpace.c)
 *     EtwpIsProcessZombie @ 0x140820A80 (EtwpIsProcessZombie.c)
 *     EtwpTraceProcessRundown @ 0x140820AB4 (EtwpTraceProcessRundown.c)
 *     PsEnumProcessThreads @ 0x140820C2C (PsEnumProcessThreads.c)
 *     EtwpThreadEnumCallback @ 0x140820CB0 (EtwpThreadEnumCallback.c)
 *     EtwpSysModuleRunDown @ 0x140820D88 (EtwpSysModuleRunDown.c)
 *     EtwpProcessPerfCtrsRundown @ 0x1408A8350 (EtwpProcessPerfCtrsRundown.c)
 *     EtwpEnumerateWorkingSet @ 0x1409EED74 (EtwpEnumerateWorkingSet.c)
 *     EtwpObjectHandleRundown @ 0x1409EF608 (EtwpObjectHandleRundown.c)
 */

__int64 __fastcall EtwpProcessEnumCallback(__int64 BugCheckParameter1, __int64 a2)
{
  __int64 v2; // r14
  char v3; // r12
  int *v5; // rbx
  char v7; // r13
  char v8; // r15
  __int64 ProcessServerSilo; // rax
  __int64 v10; // rdx
  int v11; // ecx
  char v12; // bp
  unsigned int v14; // r15d
  unsigned int i; // ebp
  __int64 Prcb; // rax
  unsigned int v17; // ebp
  unsigned int j; // r15d
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *ServerSiloGlobals; // rax
  __int64 v22; // rdx
  $115DCDF994C6370D29323EAB0E0C9502 v23; // [rsp+20h] [rbp-78h] BYREF

  v2 = *(_QWORD *)(a2 + 32);
  v3 = *(_BYTE *)(a2 + 64);
  v5 = *(int **)a2;
  memset(&v23, 0, sizeof(v23));
  v7 = 0;
  v8 = 0;
  ProcessServerSilo = PsGetProcessServerSilo(BugCheckParameter1);
  if ( *(_QWORD *)(v2 + 1096) != EtwpHostSiloState )
  {
    ServerSiloGlobals = PsGetServerSiloGlobals(ProcessServerSilo);
    if ( ServerSiloGlobals[108] != v22 )
      return 0LL;
  }
  *(_BYTE *)(a2 + 65) = 0;
  if ( !(unsigned int)EtwpIsProcessZombie(BugCheckParameter1) )
  {
    v12 = 1;
    if ( (PVOID)BugCheckParameter1 == PsIdleProcess )
    {
      v8 = 1;
    }
    else
    {
      if ( KeGetCurrentThread()->ApcState.Process == (_KPROCESS *)BugCheckParameter1 )
      {
LABEL_7:
        *(_BYTE *)(a2 + 65) = v12;
        *(_BYTE *)(a2 + 67) = v8;
        if ( v5 )
        {
          if ( v3 )
          {
            if ( (*v5 & 1) != 0 )
              EtwpTraceProcessRundown(BugCheckParameter1);
            if ( (*v5 & 2) != 0 && (*(_BYTE *)(BugCheckParameter1 + 992) & 1) == 0 )
            {
              if ( (PVOID)BugCheckParameter1 == PsIdleProcess )
              {
                v14 = KeNumberProcessors_0;
                for ( i = 0; i < v14; ++i )
                {
                  Prcb = KeGetPrcb(i);
                  EtwpThreadEnumCallback(BugCheckParameter1, *(_QWORD *)(Prcb + 24), a2);
                }
              }
              else
              {
                PsEnumProcessThreads(BugCheckParameter1, EtwpThreadEnumCallback, a2);
              }
            }
            if ( (*v5 & 0xC004) != 0 )
              EtwpEnumerateAddressSpace(BugCheckParameter1, a2, v5);
            if ( (*v5 & 4) != 0 && (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
            {
              LOBYTE(v10) = v3;
              EtwpSysModuleRunDown(v2, v10);
            }
            if ( (v5[1] & 0x8000000) != 0 )
              EtwpEnumerateWorkingSet(BugCheckParameter1, a2);
          }
          else
          {
            if ( (v5[1] & 0x8000000) != 0 )
              EtwpEnumerateWorkingSet(BugCheckParameter1, a2);
            if ( (*v5 & 4) != 0 && (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
              EtwpSysModuleRunDown(v2, 0LL);
            if ( (*v5 & 0xC004) != 0 )
              EtwpEnumerateAddressSpace(BugCheckParameter1, a2, v5);
            if ( (v5[4] & 0x40) != 0 && (PVOID)BugCheckParameter1 != PsIdleProcess )
              EtwpObjectHandleRundown((PEPROCESS)BugCheckParameter1);
            if ( (*v5 & 2) != 0 )
            {
              if ( (PVOID)BugCheckParameter1 == PsIdleProcess )
              {
                v17 = KeNumberProcessors_0;
                for ( j = 0; j < v17; ++j )
                {
                  v19 = KeGetPrcb(j);
                  EtwpThreadEnumCallback(BugCheckParameter1, *(_QWORD *)(v19 + 24), a2);
                  v20 = KeGetPrcb(j);
                  EtwpThreadEnumCallback(BugCheckParameter1, *(_QWORD *)(v20 + 13112), a2);
                }
              }
              else
              {
                PsEnumProcessThreads(BugCheckParameter1, EtwpThreadEnumCallback, a2);
              }
            }
            if ( (*v5 & 8) != 0 )
              EtwpProcessPerfCtrsRundown(BugCheckParameter1, v2);
            if ( (*v5 & 1) != 0 )
              EtwpTraceProcessRundown(BugCheckParameter1);
          }
        }
        if ( v7 )
        {
          KiUnstackDetachProcess(&v23);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
        }
        return 0LL;
      }
      if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112)) )
      {
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v23);
        v7 = 1;
        goto LABEL_7;
      }
    }
    v12 = 0;
    goto LABEL_7;
  }
  if ( v5 && (*v5 & 1) != 0 && !v3 )
    EtwpTraceProcessRundown(v11);
  return 0LL;
}
