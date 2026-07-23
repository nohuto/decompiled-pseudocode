/*
 * XREFs of PfTStart @ 0x1408461D0
 * Callers:
 *     PfSetSuperfetchInformation @ 0x14075FB84 (PfSetSuperfetchInformation.c)
 *     PfpParametersPropagate @ 0x140980250 (PfpParametersPropagate.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
 *     PfFbBufferListUpdateMax @ 0x14036F2E4 (PfFbBufferListUpdateMax.c)
 *     PfFbBufferListAllocate @ 0x1403A1910 (PfFbBufferListAllocate.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14076BA80 (ObCloseHandle.c)
 *     PsCreateSystemThreadEx @ 0x1407727F0 (PsCreateSystemThreadEx.c)
 *     PsEnumProcesses @ 0x1407CF79C (PsEnumProcesses.c)
 *     PfTAllocateBuffers @ 0x140846468 (PfTAllocateBuffers.c)
 *     PfpCreateEvent @ 0x140846FB4 (PfpCreateEvent.c)
 *     PfTInitialize @ 0x14084722C (PfTInitialize.c)
 *     PfTCleanup @ 0x14097F368 (PfTCleanup.c)
 *     PfTAccessTracingStart @ 0x140A88964 (PfTAccessTracingStart.c)
 */

__int64 __fastcall PfTStart(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  int SystemThread; // esi
  HANDLE v6; // rcx
  _SLIST_ENTRY *v7; // rcx
  _SLIST_ENTRY *v8; // rcx
  __int64 v10; // r8
  signed __int32 v11[8]; // [rsp+0h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+10h] BYREF
  PVOID Object; // [rsp+98h] [rbp+20h] BYREF

  Handle = 0LL;
  v3 = a3;
  DestinationString = 0LL;
  if ( (a3 & 1) != 0 && (xmmword_140C64DD4 & 1) == 0 )
    v3 = a3 & 0xFFFFFFFE;
  if ( (v3 & 2) != 0 && (xmmword_140C64DD4 & 1) == 0 && (_DWORD)qword_140C64DF0 != 1 && HIDWORD(qword_140C64DF0) != 1 )
    v3 &= ~2u;
  if ( (v3 & 1) != 0 )
  {
    SystemThread = PfTAllocateBuffers(a1 + 24, 0x8000LL, 8LL, 1112303184LL);
    if ( SystemThread < 0 )
      goto LABEL_30;
    SystemThread = PfTAllocateBuffers(a1 + 64, 81960LL, 2LL, 1413834320LL);
    if ( SystemThread < 0 )
      goto LABEL_30;
    SystemThread = PsCreateSystemThreadEx(
                     (__int64)&Handle,
                     0x1FFFFF,
                     0LL,
                     0LL,
                     0LL,
                     (__int64)PfTLoggingWorker,
                     a1 + 104,
                     0LL,
                     0LL);
    if ( SystemThread < 0 )
      goto LABEL_30;
    Object = 0LL;
    ObReferenceObjectByHandle(Handle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
    v6 = Handle;
    *(_QWORD *)(a1 + 104) = Object;
    ObCloseHandle(v6, 0);
  }
  if ( (v3 & 3) != 0 && !*(_QWORD *)(a1 + 616) )
  {
    RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\SuperfetchTracesReady");
    SystemThread = PfpCreateEvent(&DestinationString, 1LL, a1 + 616);
    if ( SystemThread < 0 )
    {
LABEL_30:
      PfTCleanup(a1, &PfKernelGlobals);
      LOBYTE(v10) = 1;
      PfTInitialize(a1, &PfKernelGlobals, v10);
      return (unsigned int)SystemThread;
    }
  }
  if ( (v3 & 1) != 0 )
  {
    PfFbBufferListUpdateMax(a1 + 352, 0x100000);
    PfFbBufferListAllocate(v7, ((_DWORD)KeNumberProcessors_0 + 2) << 12, 2 * KeNumberProcessors_0 + 4);
  }
  if ( (v3 & 2) != 0 )
  {
    PfFbBufferListUpdateMax(a1 + 224, 0x1000000);
    PfFbBufferListAllocate(v8, ((_DWORD)KeNumberProcessors_0 + 7) << 15, 2 * KeNumberProcessors_0 + 14);
  }
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 560));
  if ( (v3 & 1) != 0 )
  {
    *(_DWORD *)(a1 + 540) = HIDWORD(xmmword_140C64DD4);
    if ( dword_140C65358 < (unsigned int)dword_140C6535C )
      PfTAccessTracingStart(a1, &PfKernelGlobals, 2LL);
  }
  if ( (v3 & 2) != 0 )
    *(_DWORD *)(a1 + 548) = DWORD2(xmmword_140C64DD4);
  ExReleaseFastMutex((PFAST_MUTEX)(a1 + 560));
  *(_DWORD *)(a1 + 8) |= v3;
  if ( (v3 & 1) != 0 )
  {
    _InterlockedOr(v11, 0);
    PsEnumProcesses((__int64 (__fastcall *)(__int64 *, __int64))PfCalculateProcessHash, 0LL);
    PfTAccessTracingStart(a1, &PfKernelGlobals, 1LL);
  }
  return 0;
}
