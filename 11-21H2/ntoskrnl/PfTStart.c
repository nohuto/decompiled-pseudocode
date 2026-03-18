/*
 * XREFs of PfTStart @ 0x1409884F4
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1406AD6BC (PfSetSuperfetchInformation.c)
 *     PfpParametersPropagate @ 0x140989028 (PfpParametersPropagate.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     PfFbBufferListAllocate @ 0x1405C6550 (PfFbBufferListAllocate.c)
 *     PfFbBufferListUpdateMax @ 0x1405C6648 (PfFbBufferListUpdateMax.c)
 *     PsEnumProcesses @ 0x1406BF0AC (PsEnumProcesses.c)
 *     PsCreateSystemThreadEx @ 0x1406F0360 (PsCreateSystemThreadEx.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     PfTInitialize @ 0x14084F9EC (PfTInitialize.c)
 *     PfpCreateEvent @ 0x14085075C (PfpCreateEvent.c)
 *     PfTAllocateBuffers @ 0x1409881B4 (PfTAllocateBuffers.c)
 *     PfTCleanup @ 0x1409882B4 (PfTCleanup.c)
 *     PfTAccessTracingStart @ 0x140A484F0 (PfTAccessTracingStart.c)
 */

__int64 __fastcall PfTStart(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  __int64 v5; // rdx
  int SystemThread; // esi
  HANDLE v7; // rcx
  __int64 v8; // rdx
  _SLIST_ENTRY *v9; // rcx
  _SLIST_ENTRY *v10; // rcx
  signed __int32 v12[8]; // [rsp+0h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+10h] BYREF
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  Handle = 0LL;
  v3 = a3;
  DestinationString = 0LL;
  if ( (a3 & 1) != 0 && (xmmword_140C54344 & 1) == 0 )
    v3 = a3 & 0xFFFFFFFE;
  if ( (v3 & 2) != 0 && (xmmword_140C54344 & 1) == 0 && (_DWORD)qword_140C54360 != 1 && HIDWORD(qword_140C54360) != 1 )
    v3 &= ~2u;
  if ( (v3 & 1) != 0 )
  {
    SystemThread = PfTAllocateBuffers(a1 + 24, 0x8000u, 8u, 0x424C6650u);
    if ( SystemThread < 0 )
      goto LABEL_17;
    SystemThread = PfTAllocateBuffers(a1 + 64, 0x14028u, 2u, 0x54456650u);
    if ( SystemThread < 0 )
      goto LABEL_17;
    SystemThread = PsCreateSystemThreadEx(
                     (int)&Handle,
                     0x1FFFFF,
                     0LL,
                     0LL,
                     0LL,
                     (__int64)PfTLoggingWorker,
                     a1 + 104,
                     0LL,
                     0LL);
    if ( SystemThread < 0 )
      goto LABEL_17;
    Object = 0LL;
    ObReferenceObjectByHandle(Handle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
    v7 = Handle;
    *(_QWORD *)(a1 + 104) = Object;
    ObCloseHandle(v7, 0);
  }
  if ( (v3 & 3) != 0 && !*(_QWORD *)(a1 + 616) )
  {
    RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\SuperfetchTracesReady");
    SystemThread = PfpCreateEvent(&DestinationString, SynchronizationEvent, (PVOID *)(a1 + 616));
    if ( SystemThread < 0 )
    {
LABEL_17:
      PfTCleanup(a1, v5);
      PfTInitialize((_QWORD *)a1, v8, 1);
      return (unsigned int)SystemThread;
    }
  }
  if ( (v3 & 1) != 0 )
  {
    PfFbBufferListUpdateMax(a1 + 352, 0x100000);
    PfFbBufferListAllocate(v9, ((_DWORD)KeNumberProcessors_0 + 2) << 12, 2 * KeNumberProcessors_0 + 4);
  }
  if ( (v3 & 2) != 0 )
  {
    PfFbBufferListUpdateMax(a1 + 224, 0x1000000);
    PfFbBufferListAllocate(v10, ((_DWORD)KeNumberProcessors_0 + 7) << 15, 2 * KeNumberProcessors_0 + 14);
  }
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 560));
  if ( (v3 & 1) != 0 )
  {
    *(_DWORD *)(a1 + 540) = HIDWORD(xmmword_140C54344);
    if ( dword_140C4EB78 < (unsigned int)dword_140C4EB7C )
      PfTAccessTracingStart(a1, &PfKernelGlobals, 2LL);
  }
  if ( (v3 & 2) != 0 )
    *(_DWORD *)(a1 + 548) = DWORD2(xmmword_140C54344);
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 560));
  *(_DWORD *)(a1 + 8) |= v3;
  if ( (v3 & 1) != 0 )
  {
    _InterlockedOr(v12, 0);
    PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))PfCalculateProcessHash, 0LL);
    PfTAccessTracingStart(a1, &PfKernelGlobals, 1LL);
  }
  return 0;
}
