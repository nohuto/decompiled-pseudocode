/*
 * XREFs of _RegisterUserApiHook @ 0x1C00E52F4
 * Callers:
 *     NtUserRegisterUserApiHook @ 0x1C00E5270 (NtUserRegisterUserApiHook.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C002393C (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     RemoveHmodDependency @ 0x1C0025104 (RemoveHmodDependency.c)
 *     GetHmodTableIndex @ 0x1C0025248 (GetHmodTableIndex.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     IsPrivileged @ 0x1C00A2D80 (IsPrivileged.c)
 *     AddHmodDependency @ 0x1C00E6268 (AddHmodDependency.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall RegisterUserApiHook(unsigned int *a1, __int64 a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int *v6; // rdi
  __int64 v8; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rsi
  ULONG64 v15; // rdx
  unsigned int **v16; // rax
  unsigned int *v17; // rax
  __int64 v18; // rcx
  char *v19; // rbx
  ULONG64 v20; // rdx
  _BYTE **v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rdi
  ULONG64 v24; // rdx
  unsigned int **v25; // rax
  unsigned int *v26; // rax
  __int64 v27; // rcx
  char *v28; // rbx
  ULONG64 v29; // rdx
  _BYTE **v30; // rax
  unsigned int HmodTableIndex; // eax
  unsigned int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx

  v6 = (unsigned int *)a2;
  if ( gihmodUserApiHook >= 0
    || (unsigned __int8)IsRestricted(KeGetCurrentThread())
    || (v11 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v10) + 780), (_DWORD)v11 != luidSystem[0])
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11),
        a2 = (unsigned int)luidSystem[1],
        *(_DWORD *)(CurrentProcessWin32Process + 784) != (_DWORD)a2)
    || !(unsigned int)IsPrivileged(psTcb) )
  {
    v8 = 5LL;
LABEL_3:
    UserSetLastError(v8, a2);
    return 0LL;
  }
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (unsigned int *)MmUserProbeAddress;
  v13 = *a1;
  v14 = *((_QWORD *)a1 + 1);
  if ( (v14 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v15 = (unsigned __int16)v13 + v14 + 2;
  v16 = (unsigned int **)MmUserProbeAddress;
  if ( v15 < MmUserProbeAddress && (unsigned __int16)v13 <= (unsigned __int16)HIWORD(*a1) )
  {
    if ( (v13 & 1) != 0 )
    {
LABEL_42:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
      v16 = (unsigned int **)MmUserProbeAddress;
      goto LABEL_43;
    }
    if ( v15 > v14 )
      goto LABEL_16;
  }
  if ( (v13 & 1) != 0 )
    goto LABEL_42;
LABEL_43:
  *(_BYTE *)*v16 = 0;
  v16 = (unsigned int **)MmUserProbeAddress;
LABEL_16:
  v17 = *v16;
  if ( v6 >= v17 )
    v6 = v17;
  v18 = *v6;
  v19 = (char *)*((_QWORD *)v6 + 1);
  if ( ((unsigned __int8)v19 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v20 = (ULONG64)&v19[(unsigned __int16)v18 + 2];
  v21 = (_BYTE **)MmUserProbeAddress;
  if ( v20 < MmUserProbeAddress && (unsigned __int16)v18 <= (unsigned __int16)HIWORD(*v6) )
  {
    if ( (v18 & 1) != 0 )
    {
LABEL_46:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v18);
      v21 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_47;
    }
    if ( v20 > (unsigned __int64)v19 )
      goto LABEL_23;
  }
  if ( (v18 & 1) != 0 )
    goto LABEL_46;
LABEL_47:
  **v21 = 0;
LABEL_23:
  RtlStringCchCopyW((char *)gszFunctionUserApiHook, 260LL, v19);
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (unsigned int *)MmUserProbeAddress;
  v22 = *a3;
  v23 = *((_QWORD *)a3 + 1);
  if ( (v23 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v24 = (unsigned __int16)v22 + v23 + 2;
  v25 = (unsigned int **)MmUserProbeAddress;
  if ( v24 < MmUserProbeAddress && (unsigned __int16)v22 <= (unsigned __int16)HIWORD(*a3) )
  {
    if ( (v22 & 1) != 0 )
    {
LABEL_50:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v22);
      v25 = (unsigned int **)MmUserProbeAddress;
      goto LABEL_51;
    }
    if ( v24 > v23 )
      goto LABEL_30;
  }
  if ( (v22 & 1) != 0 )
    goto LABEL_50;
LABEL_51:
  *(_BYTE *)*v25 = 0;
  v25 = (unsigned int **)MmUserProbeAddress;
LABEL_30:
  v26 = *v25;
  if ( a4 >= v26 )
    a4 = v26;
  v27 = *a4;
  v28 = (char *)*((_QWORD *)a4 + 1);
  if ( ((unsigned __int8)v28 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v29 = (ULONG64)&v28[(unsigned __int16)v27 + 2];
  v30 = (_BYTE **)MmUserProbeAddress;
  if ( v29 < MmUserProbeAddress && (unsigned __int16)v27 <= (unsigned __int16)HIWORD(*a4) )
  {
    if ( (v27 & 1) != 0 )
    {
LABEL_38:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v27);
      v30 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_39;
    }
    if ( v29 > (unsigned __int64)v28 )
      goto LABEL_53;
  }
  if ( (v27 & 1) != 0 )
    goto LABEL_38;
LABEL_39:
  **v30 = 0;
LABEL_53:
  RtlStringCchCopyW((char *)gszFunctionUserApiHookWOW, 260LL, v28);
  HmodTableIndex = GetHmodTableIndex(v14);
  gihmodUserApiHook = HmodTableIndex;
  if ( HmodTableIndex == -1 )
  {
    v8 = 126LL;
    goto LABEL_3;
  }
  AddHmodDependency(HmodTableIndex);
  v32 = GetHmodTableIndex(v23);
  gihmodUserApiHookWOW = v32;
  if ( v32 == -1 )
  {
    UserSetLastError(126LL, v33);
    RemoveHmodDependency(gihmodUserApiHook);
    gihmodUserApiHook = -1;
    return 0LL;
  }
  AddHmodDependency(v32);
  gppiUserApiHook = PsGetCurrentProcessWin32Process(v34);
  _InterlockedOr(gpsi, 0x10u);
  return 1LL;
}
