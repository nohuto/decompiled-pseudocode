/*
 * XREFs of xxxClientAllocWindowClassExtraBytes @ 0x1C0099F1C
 * Callers:
 *     xxxValidateClassAndSize @ 0x1C0020EA4 (xxxValidateClassAndSize.c)
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E0F8 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0122344 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

volatile void *__fastcall xxxClientAllocWindowClassExtraBytes(SIZE_T Length, __int64 a2)
{
  SIZE_T v3; // r15
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // di
  int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  volatile void **v14; // rcx
  volatile void *v15; // rdi
  __int64 CurrentProcessWow64Process; // rax
  int v18; // [rsp+88h] [rbp+10h] BYREF
  int v19; // [rsp+90h] [rbp+18h] BYREF
  unsigned __int64 v20; // [rsp+98h] [rbp+20h] BYREF

  v3 = (unsigned int)Length;
  v4 = 0LL;
  v20 = 0LL;
  v18 = 0;
  v19 = Length;
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 232LL) & 0x10) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6682LL);
  if ( IS_USERCRIT_OWNED_EXCLUSIVE() || (v9 = 1, !IS_USERCRIT_OWNED_AT_ALL()) )
    v9 = 0;
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  EtwTraceBeginCallback(123LL);
  v10 = KeUserModeCallback(123LL, &v19, 4LL, &v20, &v18);
  EtwTraceEndCallback(123LL);
  if ( v9 )
    EnterSharedCrit(v12, v11, v13);
  else
    EnterCrit(0LL, 0LL);
  if ( v10 < 0 || v18 != 24 )
    return 0LL;
  v14 = (volatile void **)v20;
  if ( v20 + 8 < v20 || v20 + 8 > MmUserProbeAddress )
    v14 = (volatile void **)MmUserProbeAddress;
  v15 = *v14;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
  ProbeForRead(v15, v3, CurrentProcessWow64Process != 0 ? 1 : 4);
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 232LL) & 0x10) == 0 )
    return v15;
  return (volatile void *)v4;
}
