/*
 * XREFs of EtwNotificationRegister @ 0x180032680
 * Callers:
 *     EtwEventRegister @ 0x180031A30 (EtwEventRegister.c)
 *     EtwRegisterTraceGuidsW @ 0x18005DBB0 (EtwRegisterTraceGuidsW.c)
 * Callees:
 *     EtwpFreeRegistration @ 0x18002FF34 (EtwpFreeRegistration.c)
 *     ProviderHandleRemove @ 0x1800305B0 (ProviderHandleRemove.c)
 *     EtwpCheckForPrivatePreEnable @ 0x180032238 (EtwpCheckForPrivatePreEnable.c)
 *     EtwpInsertRegistration @ 0x18003241C (EtwpInsertRegistration.c)
 *     EtwpRegisterProvider @ 0x18003250C (EtwpRegisterProvider.c)
 *     EtwpAllocateRegistration @ 0x1800327CC (EtwpAllocateRegistration.c)
 *     ProviderHandleInsert @ 0x1800329E0 (ProviderHandleInsert.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlSetLastWin32Error @ 0x180053850 (RtlSetLastWin32Error.c)
 */

ULONG __cdecl EtwNotificationRegister(
        LPCGUID Guid,
        ULONG Type,
        PETW_NOTIFICATION_CALLBACK Callback,
        PVOID Context,
        PREGHANDLE RegHandle)
{
  PREGHANDLE v7; // r14
  __int64 v8; // rax
  _RTL_SRWLOCK *Registration; // rax
  __int64 v10; // rdi
  _RTL_SRWLOCK *v11; // rsi
  __int64 v12; // rcx
  ULONG v13; // ebx
  __int64 v14; // rcx
  unsigned int v16; // [rsp+40h] [rbp+8h] BYREF

  if ( !Guid )
    goto LABEL_13;
  v7 = RegHandle;
  if ( !RegHandle )
    goto LABEL_13;
  v8 = *(_QWORD *)&Guid->Data1 - *(_QWORD *)&PrivateLoggerNotificationGuid.Data1;
  if ( *(_QWORD *)&Guid->Data1 == *(_QWORD *)&PrivateLoggerNotificationGuid.Data1 )
    v8 = *(_QWORD *)Guid->Data4 - *(_QWORD *)PrivateLoggerNotificationGuid.Data4;
  if ( !v8 && PrivateLoggerNotificationEntry )
  {
LABEL_13:
    v13 = 87;
LABEL_16:
    RtlSetLastWin32Error(v13);
    return v13;
  }
  *RegHandle = 0LL;
  Registration = (_RTL_SRWLOCK *)EtwpAllocateRegistration(Guid, Callback, Context, Type);
  v10 = (__int64)Registration;
  if ( !Registration )
  {
    v13 = 14;
    goto LABEL_16;
  }
  v11 = Registration + 8;
  RtlAcquireSRWLockExclusive(Registration + 8);
  *(_DWORD *)(v10 + 80) = NtCurrentTeb()->ClientId.UniqueThread;
  v13 = ProviderHandleInsert(v12, v10, &v16);
  if ( v13 )
  {
LABEL_15:
    *(_DWORD *)(v10 + 80) = 0;
    RtlReleaseSRWLockExclusive(v11);
    EtwpFreeRegistration(v10);
    goto LABEL_16;
  }
  if ( Type != 10 )
  {
    v13 = EtwpRegisterProvider(v10, (__int64)Callback, Type);
    if ( v13 )
    {
      ProviderHandleRemove(v14, v16);
      goto LABEL_15;
    }
  }
  EtwpInsertRegistration((PRTL_BALANCED_NODE)v10);
  EtwpCheckForPrivatePreEnable(v10);
  *(_DWORD *)(v10 + 80) = 0;
  RtlReleaseSRWLockExclusive(v11);
  *v7 = v16 | ((unsigned __int64)*(unsigned __int16 *)(v10 + 84) << 32);
  return v13;
}
