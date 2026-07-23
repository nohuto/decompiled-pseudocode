/*
 * XREFs of DbgkRegisterErrorPort @ 0x140939B14
 * Callers:
 *     NtSetSystemInformation @ 0x14075F020 (NtSetSystemInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     PsGetProcessServerSilo @ 0x14028C410 (PsGetProcessServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140297924 (PsGetServerSiloGlobals.c)
 *     PsIsHostSilo @ 0x1402AFB90 (PsIsHostSilo.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwAlpcConnectPort @ 0x14041C010 (ZwAlpcConnectPort.c)
 *     ZwAlpcDisconnectPort @ 0x14041C170 (ZwAlpcDisconnectPort.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlFreeUnicodeString @ 0x14076F5C0 (RtlFreeUnicodeString.c)
 *     DbgkpDeleteErrorPort @ 0x14093A144 (DbgkpDeleteErrorPort.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall DbgkRegisterErrorPort(void *Src, size_t Size)
{
  unsigned int v2; // edi
  wchar_t *Pool2; // rax
  __int64 v6; // rax
  _DWORD *v7; // r15
  unsigned int v8; // edi
  NTSTATUS v9; // eax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // r13
  __int64 ProcessServerSilo; // r12
  char *v13; // r14
  __int64 v14; // rsi
  ULONG_PTR BufferLength; // [rsp+60h] [rbp-F8h] BYREF
  UNICODE_STRING PortName; // [rsp+68h] [rbp-F0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-E0h] BYREF
  _PORT_MESSAGE ConnectionMessage; // [rsp+A8h] [rbp-B0h] BYREF
  _ALPC_PORT_ATTRIBUTES PortAttributes; // [rsp+D0h] [rbp-88h] BYREF

  v2 = Size;
  PortName = 0LL;
  memset(&ConnectionMessage, 0, sizeof(ConnectionMessage));
  BufferLength = 0LL;
  memset(&ObjectAttributes, 0, 44);
  memset(&PortAttributes, 0, sizeof(PortAttributes));
  if ( !v2 || (v2 & 1) != 0 || v2 > 0xFFFF )
    return 3221225485LL;
  Pool2 = (wchar_t *)ExAllocatePool2(257LL, v2, 1348952644LL);
  PortName.Buffer = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  PortName.MaximumLength = v2;
  PortName.Length = v2;
  memmove(Pool2, Src, v2);
  v6 = ExAllocatePool2(257LL, 16LL, 1348952644LL);
  v7 = (_DWORD *)v6;
  if ( v6 )
  {
    *(unsigned int *)((char *)&ConnectionMessage.u1.Length + 2) = -2147483608;
    BufferLength = 40LL;
    PortAttributes.MaxMessageLength = 272LL;
    PortAttributes.MaxPoolUsage = 8704LL;
    PortAttributes.Flags = 0x100000;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v9 = ZwAlpcConnectPort(
           (PHANDLE)(v6 + 8),
           &PortName,
           &ObjectAttributes,
           &PortAttributes,
           0x120000u,
           0LL,
           &ConnectionMessage,
           &BufferLength,
           0LL,
           0LL,
           0LL);
    v8 = v9;
    if ( v9 == 192 )
    {
      v8 = -1073741749;
    }
    else if ( v9 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      *v7 = 1;
      v7[1] = 0;
      Process = (__int64)CurrentThread->ApcState.Process;
      ProcessServerSilo = PsGetProcessServerSilo(Process);
      v13 = (char *)PsGetServerSiloGlobals(ProcessServerSilo) + 968;
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v13, 0LL);
      v14 = *((_QWORD *)v13 + 1);
      if ( !v14 && PsIsHostSilo(ProcessServerSilo) )
        _interlockedbittestandset((volatile signed __int32 *)(MmWriteableSharedUserData + 752), 0);
      *((_QWORD *)v13 + 1) = v7;
      *((_QWORD *)v13 + 2) = Process;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v13);
      KeAbPostRelease((ULONG_PTR)v13);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      v8 = 0;
      v7 = 0LL;
      if ( v14 )
      {
        if ( !_interlockedbittestandset((volatile signed __int32 *)(v14 + 4), 0) )
          ZwAlpcDisconnectPort(*(HANDLE *)(v14 + 8), 0);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v14, 0xFFFFFFFF) == 1 )
          DbgkpDeleteErrorPort((PVOID)v14);
      }
      KeSetEvent(*((PRKEVENT *)v13 + 3), 0, 0);
    }
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
  }
  else
  {
    v8 = -1073741670;
  }
  RtlFreeUnicodeString(&PortName);
  return v8;
}
