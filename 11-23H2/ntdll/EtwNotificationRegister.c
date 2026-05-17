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

__int64 __fastcall EtwNotificationRegister(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, unsigned __int64 *a5)
{
  unsigned __int64 *v7; // r14
  __int64 v8; // rax
  __int64 Registration; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rcx
  ULONG v13; // ebx
  __int64 v14; // rcx
  unsigned int v16; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    goto LABEL_13;
  v7 = a5;
  if ( !a5 )
    goto LABEL_13;
  v8 = *a1 - *(_QWORD *)&PrivateLoggerNotificationGuid.Data1;
  if ( *a1 == *(_QWORD *)&PrivateLoggerNotificationGuid.Data1 )
    v8 = a1[1] - *(_QWORD *)PrivateLoggerNotificationGuid.Data4;
  if ( !v8 && PrivateLoggerNotificationEntry )
  {
LABEL_13:
    v13 = 87;
LABEL_16:
    RtlSetLastWin32Error(v13);
    return v13;
  }
  *a5 = 0LL;
  Registration = EtwpAllocateRegistration(a1, a3, a4, a2);
  v10 = Registration;
  if ( !Registration )
  {
    v13 = 14;
    goto LABEL_16;
  }
  v11 = Registration + 64;
  RtlAcquireSRWLockExclusive(Registration + 64);
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
  if ( a2 != 10 )
  {
    v13 = EtwpRegisterProvider(v10, a3, a2);
    if ( v13 )
    {
      ProviderHandleRemove(v14, v16);
      goto LABEL_15;
    }
  }
  EtwpInsertRegistration(v10);
  EtwpCheckForPrivatePreEnable(v10);
  *(_DWORD *)(v10 + 80) = 0;
  RtlReleaseSRWLockExclusive(v11);
  *v7 = v16 | ((unsigned __int64)*(unsigned __int16 *)(v10 + 84) << 32);
  return v13;
}
