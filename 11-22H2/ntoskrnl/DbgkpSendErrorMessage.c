/*
 * XREFs of DbgkpSendErrorMessage @ 0x14093A32C
 * Callers:
 *     PsDispatchIumService @ 0x1405A4EF4 (PsDispatchIumService.c)
 *     DbgkForwardException @ 0x140939614 (DbgkForwardException.c)
 * Callees:
 *     PsThawMultiProcess @ 0x1402044E4 (PsThawMultiProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     PsGetProcessServerSilo @ 0x14028C060 (PsGetProcessServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140297574 (PsGetServerSiloGlobals.c)
 *     MmGetSessionIdEx @ 0x1402A1600 (MmGetSessionIdEx.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6890 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x1402BD830 (ExfReleasePushLockShared.c)
 *     PsGetServerSiloServiceSessionId @ 0x1402C0850 (PsGetServerSiloServiceSessionId.c)
 *     KeTestAlertThread @ 0x14030CF00 (KeTestAlertThread.c)
 *     AlpcGetMessageAttribute @ 0x14032B830 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x14032B870 (AlpcInitializeMessageAttribute.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x14041B820 (ZwAlpcSendWaitReceivePort.c)
 *     memset @ 0x140435400 (memset.c)
 *     KeCopyExceptionRecord @ 0x140578940 (KeCopyExceptionRecord.c)
 *     PsTestProtectedProcessIncompatibility @ 0x1406B8204 (PsTestProtectedProcessIncompatibility.c)
 *     MmGetSectionInformation @ 0x1407BA640 (MmGetSectionInformation.c)
 *     DbgkpSuspendProcess @ 0x1409395D4 (DbgkpSuspendProcess.c)
 *     DbgkForwardException @ 0x140939614 (DbgkForwardException.c)
 *     DbgkpDeleteErrorPort @ 0x140939FF4 (DbgkpDeleteErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x14093A020 (DbgkpRemoveErrorPort.c)
 *     DbgkpStartSystemErrorHandler @ 0x14093A80C (DbgkpStartSystemErrorHandler.c)
 */

__int64 __fastcall DbgkpSendErrorMessage(__int64 a1, int a2, __int64 a3)
{
  char v3; // r12
  PVOID v5; // rdi
  struct _KTHREAD *CurrentThread; // r13
  ULONG_PTR Process; // r14
  __int64 ProcessServerSilo; // rbx
  PVOID *v9; // rsi
  signed int started; // ebx
  int ServerSiloServiceSessionId; // ebx
  LARGE_INTEGER *Timeout; // rax
  NTSTATUS v13; // eax
  PVOID v14; // rax
  __int64 v15; // rdx
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // rcx
  __int16 v20; // ax
  char v21; // r12
  int v22; // ebx
  _DWORD *MessageAttribute; // rax
  char v24; // si
  NTSTATUS v25; // eax
  char v27; // [rsp+40h] [rbp-C0h]
  ULONG_PTR RequiredBufferSize; // [rsp+48h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+50h] [rbp-B0h]
  int v30; // [rsp+58h] [rbp-A8h]
  LARGE_INTEGER v31; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+68h] [rbp-98h]
  _ALPC_MESSAGE_ATTRIBUTES Buffer[20]; // [rsp+70h] [rbp-90h] BYREF

  v3 = a2;
  v30 = a2;
  v32 = a1;
  memset(&Buffer[8], 0, 0x60uLL);
  v5 = 0LL;
  RequiredBufferSize = 0LL;
  CurrentThread = KeGetCurrentThread();
  v31.QuadPart = 0LL;
  v27 = 0;
  Process = (ULONG_PTR)CurrentThread->Process;
  ProcessServerSilo = PsGetProcessServerSilo(Process);
  v9 = (PVOID *)((char *)PsGetServerSiloGlobals(ProcessServerSilo) + 968);
  memset(Buffer, 0, 0x40uLL);
  if ( (*(_DWORD *)(Process + 2172) & 1) != 0 )
    return (unsigned int)-1073741637;
  MmGetSectionInformation(*(_QWORD *)(Process + 1304), 1, (__int64)Buffer);
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(ProcessServerSilo);
  if ( (unsigned int)MmGetSessionIdEx(Process) != ServerSiloServiceSessionId
    && Buffer[4].AllocatedAttributes != 1
    && (v3 & 2) != 0 )
  {
    v27 = DbgkpSuspendProcess(Process);
  }
  started = DbgkpStartSystemErrorHandler();
  if ( started >= 0 )
  {
    if ( DbgkErrorPortStartTimeout == -1 )
    {
      Timeout = 0LL;
    }
    else
    {
      Timeout = &v31;
      v31.QuadPart = -10000LL * DbgkErrorPortStartTimeout;
    }
    v13 = KeWaitForSingleObject(v9[3], Executive, 1, 0, Timeout);
    if ( v13 == 258 || !v9[1] )
    {
      started = -1073740973;
    }
    else if ( v13 == 257 || v13 == 192 )
    {
      started = -1073741749;
    }
    else
    {
      Object = 0LL;
      started = 0;
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)v9, 0LL);
      v14 = v9[2];
      if ( (PVOID)Process == v14 )
      {
        started = -1073741420;
      }
      else
      {
        v5 = v9[1];
        if ( v5 )
        {
          Object = v9[2];
          ObfReferenceObjectWithTag(v14, 0x50676244u);
          _InterlockedIncrement((volatile signed __int32 *)v5);
          v3 = v30;
        }
        else
        {
          started = -1073740973;
        }
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v9);
      KeAbPostRelease((ULONG_PTR)v9);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      if ( started >= 0 )
      {
        v15 = v32;
        *(_QWORD *)(a3 + 8) = 0LL;
        *(_QWORD *)(a3 + 16) = 0LL;
        *(_QWORD *)(a3 + 24) = 0LL;
        *(_QWORD *)(a3 + 32) = 0LL;
        *(_DWORD *)(a3 + 4) = 8;
        *(_WORD *)(a3 + 4) = -32761;
        *(_DWORD *)a3 = 17826024;
        *(_DWORD *)(a3 + 40) = 7;
        *(_DWORD *)(a3 + 44) = -2147418111;
        KeCopyExceptionRecord((_OWORD *)(a3 + 48), v15);
        v16 = *(_OWORD *)&Buffer[2].AllocatedAttributes;
        *(_OWORD *)(a3 + 200) = *(_OWORD *)&Buffer[0].AllocatedAttributes;
        *(_DWORD *)(a3 + 264) = 0;
        v17 = *(_OWORD *)&Buffer[4].AllocatedAttributes;
        *(_OWORD *)(a3 + 216) = v16;
        v18 = *(_OWORD *)&Buffer[6].AllocatedAttributes;
        *(_OWORD *)(a3 + 232) = v17;
        *(_OWORD *)(a3 + 248) = v18;
        if ( (*(_BYTE *)(Process + 2170) & 7) != 0 )
        {
          *(_DWORD *)(a3 + 264) = 1;
          v19 = 1LL;
        }
        else
        {
          v19 = 0LL;
        }
        if ( (*(_BYTE *)(Process + 992) & 1) != 0 )
        {
          v19 = (unsigned int)v19 | 8;
          *(_DWORD *)(a3 + 264) = v19;
        }
        if ( *(_QWORD *)(Process + 1408) )
        {
          v20 = *(_WORD *)(Process + 2412);
          if ( v20 == 332 || v20 == 452 )
          {
            v19 = (unsigned int)v19 | 2;
            *(_DWORD *)(a3 + 264) = v19;
          }
        }
        if ( (v3 & 1) != 0 )
        {
          v19 = (unsigned int)v19 | 4;
          v21 = 1;
          *(_DWORD *)(a3 + 264) = v19;
        }
        else
        {
          v21 = 0;
        }
        LOBYTE(v19) = 1;
        v22 = PsTestProtectedProcessIncompatibility(v19, (__int64)Object, Process) ? 1055744 : 0x1FFFFF;
        AlpcInitializeMessageAttribute(0x10000000u, Buffer, 0xA0uLL, &RequiredBufferSize);
        Buffer[0].ValidAttributes = 0x10000000;
        MessageAttribute = AlpcGetMessageAttribute(Buffer, 0x10000000u);
        MessageAttribute[5] = v22;
        *MessageAttribute = 0;
        MessageAttribute[4] = 4;
        *((_QWORD *)MessageAttribute + 1) = -2LL;
        RequiredBufferSize = 272LL;
        KeTestAlertThread(0);
        if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
          goto LABEL_36;
        v25 = ZwAlpcSendWaitReceivePort(
                *((HANDLE *)v5 + 1),
                0x220000u,
                (PPORT_MESSAGE)a3,
                Buffer,
                (PPORT_MESSAGE)a3,
                &RequiredBufferSize,
                0LL,
                0LL);
        started = v25;
        if ( v25 < 0 )
        {
          if ( v25 == -1073741769 )
            DbgkpRemoveErrorPort((__int64)CurrentThread, (ULONG_PTR)v9, (volatile signed __int32 *)v5);
          goto LABEL_37;
        }
        if ( v25 == 257 )
        {
LABEL_36:
          started = -1073741749;
        }
        else
        {
          if ( _bittest16((const signed __int16 *)(a3 + 4), 0xDu) )
            ZwAlpcSendWaitReceivePort(*((HANDLE *)v5 + 1), 0x10000u, (PPORT_MESSAGE)a3, 0LL, 0LL, 0LL, 0LL, 0LL);
          started = *(_DWORD *)(a3 + 44);
          if ( started >= 0 && !v21 && started == 65538 )
          {
            v24 = v27;
            if ( v27 )
            {
              PsThawMultiProcess(Process, 0LL, 1u);
              KeLeaveCriticalRegion();
              v24 = 0;
            }
            started = !DbgkForwardException(v32, 1, 1) ? 0xC0000144 : 0;
            goto LABEL_38;
          }
        }
LABEL_37:
        v24 = v27;
LABEL_38:
        ObfDereferenceObjectWithTag(Object, 0x50676244u);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
          DbgkpDeleteErrorPort((HANDLE *)v5);
        goto LABEL_55;
      }
    }
  }
  v24 = v27;
LABEL_55:
  if ( v24 )
  {
    PsThawMultiProcess(Process, 0LL, 1u);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)started;
}
