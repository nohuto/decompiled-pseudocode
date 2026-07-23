/*
 * XREFs of EtwNotificationRegister @ 0x180016730
 * Callers:
 *     EtwRegisterTraceGuidsW @ 0x180015410 (EtwRegisterTraceGuidsW.c)
 *     EtwEventRegister @ 0x180015AA0 (EtwEventRegister.c)
 * Callees:
 *     EtwpFreeRegistration @ 0x180006708 (EtwpFreeRegistration.c)
 *     RtlSetLastWin32Error @ 0x1800067C0 (RtlSetLastWin32Error.c)
 *     EtwpCheckForPrivatePreEnable @ 0x180016194 (EtwpCheckForPrivatePreEnable.c)
 *     EtwpInsertRegistration @ 0x1800162A8 (EtwpInsertRegistration.c)
 *     EtwpAllocateRegistration @ 0x1800164B0 (EtwpAllocateRegistration.c)
 *     EtwpRegisterProvider @ 0x1800165B8 (EtwpRegisterProvider.c)
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     ProviderHandleInsert @ 0x1800A3920 (ProviderHandleInsert.c)
 *     ProviderHandleRemove @ 0x1800A3AC8 (ProviderHandleRemove.c)
 */

ULONG __cdecl EtwNotificationRegister(
        LPCGUID Guid,
        ULONG Type,
        PETW_NOTIFICATION_CALLBACK Callback,
        PVOID Context,
        PREGHANDLE RegHandle)
{
  PREGHANDLE v7; // r14
  PSLIST_ENTRY Registration; // rax
  __int64 v9; // rdi
  ULONG v10; // ebx
  _RTL_SRWLOCK *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int v15; // [rsp+40h] [rbp+8h] BYREF

  if ( !Guid
    || (v7 = RegHandle) == 0LL
    || *(_QWORD *)&Guid->Data1 == *(_QWORD *)&PrivateLoggerNotificationGuid.Data1
    && *(_QWORD *)Guid->Data4 == *(_QWORD *)PrivateLoggerNotificationGuid.Data4
    && PrivateLoggerNotificationEntry )
  {
    v10 = 87;
    goto LABEL_15;
  }
  *RegHandle = 0LL;
  Registration = EtwpAllocateRegistration((_SLIST_ENTRY *)Guid, (_SLIST_ENTRY *)Callback, (__int64)Context, Type);
  v9 = (__int64)Registration;
  if ( !Registration )
  {
    v10 = 14;
LABEL_15:
    RtlSetLastWin32Error(v10);
    return v10;
  }
  v11 = (_RTL_SRWLOCK *)&Registration[4];
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)&Registration[4]);
  *(_DWORD *)(v9 + 80) = NtCurrentTeb()->ClientId.UniqueThread;
  v10 = ProviderHandleInsert(v12, v9, &v15);
  if ( v10 )
  {
LABEL_9:
    *(_DWORD *)(v9 + 80) = 0;
    RtlReleaseSRWLockExclusive(v11);
    EtwpFreeRegistration(v9);
    goto LABEL_15;
  }
  if ( Type != 10 )
  {
    v10 = EtwpRegisterProvider(v9, (__int64)Callback, Type);
    if ( v10 )
    {
      ProviderHandleRemove(v13, v15);
      goto LABEL_9;
    }
  }
  EtwpInsertRegistration((PRTL_BALANCED_NODE)v9);
  EtwpCheckForPrivatePreEnable(v9);
  *(_DWORD *)(v9 + 80) = 0;
  RtlReleaseSRWLockExclusive(v11);
  *v7 = v15 | ((unsigned __int64)*(unsigned __int16 *)(v9 + 96) << 32);
  return v10;
}
