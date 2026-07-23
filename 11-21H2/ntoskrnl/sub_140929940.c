/*
 * XREFs of sub_140929940 @ 0x140929940
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 * Callees:
 *     sub_140204738 @ 0x140204738 (sub_140204738.c)
 *     PsIsHostSilo @ 0x1402A6DF0 (PsIsHostSilo.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     PsGetProcessServerSilo @ 0x140347680 (PsGetProcessServerSilo.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwAlpcConnectPort @ 0x14041C680 (ZwAlpcConnectPort.c)
 *     ZwAlpcDisconnectPort @ 0x14041C7E0 (ZwAlpcDisconnectPort.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_140929F64 @ 0x140929F64 (sub_140929F64.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140929940(void *Src, size_t Size)
{
  unsigned int v2; // edi
  wchar_t *PoolWithQuotaTag; // rax
  PVOID v6; // rax
  _DWORD *v7; // r15
  unsigned int v8; // edi
  NTSTATUS v9; // eax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v11; // r13
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
  PoolWithQuotaTag = (wchar_t *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v2, 0x50676244u);
  PortName.Buffer = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return 3221225626LL;
  PortName.MaximumLength = v2;
  PortName.Length = v2;
  memmove(PoolWithQuotaTag, Src, v2);
  v6 = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x10uLL, 0x50676244u);
  v7 = v6;
  if ( v6 )
  {
    *(ULONG *)((char *)&ConnectionMessage.u1.Length + 2) = -2147483608;
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
           (PHANDLE)v6 + 1,
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
      v11 = *((_QWORD *)CurrentThread + 23);
      ProcessServerSilo = PsGetProcessServerSilo(v11);
      v13 = (char *)sub_140204738(ProcessServerSilo) + 968;
      --*((_WORD *)CurrentThread + 242);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v13, 0LL);
      v14 = *((_QWORD *)v13 + 1);
      if ( !v14 && PsIsHostSilo(ProcessServerSilo) )
        _interlockedbittestandset((volatile signed __int32 *)0xFFFFF780000002F0LL, 0);
      *((_QWORD *)v13 + 1) = v7;
      *((_QWORD *)v13 + 2) = v11;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v13);
      sub_1402AFC00((ULONG_PTR)v13);
      sub_1402F9540((__int64)CurrentThread);
      v8 = 0;
      v7 = 0LL;
      if ( v14 )
      {
        if ( !_interlockedbittestandset((volatile signed __int32 *)(v14 + 4), 0) )
          ZwAlpcDisconnectPort(*(HANDLE *)(v14 + 8), 0);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v14, 0xFFFFFFFF) == 1 )
          sub_140929F64((PVOID)v14);
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
