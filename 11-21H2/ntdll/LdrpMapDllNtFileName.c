/*
 * XREFs of LdrpMapDllNtFileName @ 0x18004FDE4
 * Callers:
 *     LdrpMapDllFullPath @ 0x18005133C (LdrpMapDllFullPath.c)
 *     LdrpMapDllSearchPath @ 0x180051844 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllRetry @ 0x1800569C0 (LdrpMapDllRetry.c)
 * Callees:
 *     LdrpValidateIntegrityContinuity @ 0x18000247C (LdrpValidateIntegrityContinuity.c)
 *     RtlGetCurrentServiceSessionId @ 0x180027780 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogDllState @ 0x180044F74 (LdrpLogDllState.c)
 *     LdrpMapDllWithSectionHandle @ 0x18004CD54 (LdrpMapDllWithSectionHandle.c)
 *     LdrpCheckForRetryLoading @ 0x18004FFEC (LdrpCheckForRetryLoading.c)
 *     LdrpLogError @ 0x180053F2C (LdrpLogError.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtOpenFile @ 0x1800A46D0 (NtOpenFile.c)
 *     NtCreateSection @ 0x1800A49B0 (NtCreateSection.c)
 *     NtRaiseHardError @ 0x1800A6E60 (NtRaiseHardError.c)
 *     ZwSystemDebugControl @ 0x1800A7980 (ZwSystemDebugControl.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800D6600 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800DAD8C (LdrpCheckComponentOnDemandEtwEvent.c)
 *     LdrpLogEtwEvent @ 0x1800DB4E4 (LdrpLogEtwEvent.c)
 *     LdrpSetModuleSigningLevel @ 0x1800E0C90 (LdrpSetModuleSigningLevel.c)
 */

__int64 __fastcall LdrpMapDllNtFileName(__int64 a1, _UNICODE_STRING *a2)
{
  __int64 v3; // rbx
  unsigned __int64 v5; // r12
  ULONG v6; // eax
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // r14
  int i; // esi
  NTSTATUS v11; // eax
  char v12; // r8
  __int64 v13; // r9
  int v14; // ebx
  ULONG v15; // esi
  NTSTATUS v16; // eax
  int v18; // r8d
  int v19; // r9d
  char *v20; // rcx
  int v21; // r8d
  int v22; // r9d
  int v23; // eax
  HANDLE FileHandle; // [rsp+40h] [rbp-69h] BYREF
  HANDLE SectionHandle; // [rsp+48h] [rbp-61h] BYREF
  __int64 v26; // [rsp+50h] [rbp-59h]
  unsigned __int64 Parameters[2]; // [rsp+58h] [rbp-51h] BYREF
  _UNICODE_STRING InputBuffer; // [rsp+68h] [rbp-41h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-31h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-1h] BYREF
  char v31; // [rsp+110h] [rbp+67h] BYREF
  _UNICODE_STRING *v32; // [rsp+118h] [rbp+6Fh]
  char v33; // [rsp+120h] [rbp+77h] BYREF
  ULONG Response; // [rsp+128h] [rbp+7Fh] BYREF

  v32 = a2;
  v3 = *(_QWORD *)(a1 + 56);
  v26 = *(_QWORD *)(a1 + 176);
  if ( (unsigned __int8)LdrpCheckForRetryLoading(a1, 0LL) )
    return 3221226029LL;
  v5 = v3 + 72;
  LdrpLogDllState(*(_QWORD *)(v3 + 48), v3 + 72, 0x14A5u);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a2;
  v6 = 64;
  if ( !LdrpUseImpersonatedDeviceMap )
    v6 = 2112;
  ObjectAttributes.Attributes = v6;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = 2147353476LL;
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v8 = 2147353476LL;
  v9 = 2147353477LL;
  if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v20 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v20 & 0x20) != 0 )
    {
      LOBYTE(v19) = -1;
      LOBYTE(v18) = -1;
      LdrpLogEtwEvent(5253, -1, v18, v19, 0LL, 0LL);
    }
  }
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x40000) != 0 )
  {
    InputBuffer = *a2;
    ZwSystemDebugControl(SysDbgKdPullRemoteFile, &InputBuffer, 0x10u, 0LL, 0, 0LL);
  }
  for ( i = 0; ; i = 1 )
  {
    v11 = NtOpenFile(&FileHandle, 0x100021u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
    v14 = v11;
    if ( v11 >= 0 )
      break;
    if ( v11 == -1073741772 || v11 == -1073741766 )
      return (unsigned int)-1073741515;
    if ( v11 != -1073741790 || i || !(unsigned __int8)LdrpCheckComponentOnDemandEtwEvent(a1) )
      return (unsigned int)v14;
  }
  if ( LdrpAuditIntegrityContinuity
    && (v14 = LdrpValidateIntegrityContinuity(a1, (__int64)FileHandle, v12, v13), v14 < 0)
    && LdrpEnforceIntegrityContinuity
    || (v15 = 0x1000000, (*(_DWORD *)(a1 + 32) & 0x1000000) != 0)
    && (NtCurrentPeb()->BitField & 0x10) == 0
    && (LOBYTE(v13) = 8, v14 = LdrpSetModuleSigningLevel(FileHandle, *(_QWORD *)(a1 + 56), &v33, v13, &v31), v14 < 0) )
  {
LABEL_23:
    NtClose(FileHandle);
    return (unsigned int)v14;
  }
  if ( UseWOW64 && (*(_DWORD *)(a1 + 32) & 0x800) == 0 )
    v15 = 17825792;
  v16 = NtCreateSection(&SectionHandle, 0xDu, 0LL, 0LL, 0x10u, v15, FileHandle);
  v14 = v16;
  if ( v16 < 0 )
  {
    if ( v16 == -1073740702 || (unsigned int)(v16 + 1073740674) <= 1 )
    {
      v14 = LdrAppxHandleIntegrityFailure((unsigned int)v16);
    }
    else if ( v16 != -1073741801 && v16 != -1073741670 && v16 != -1073741523 )
    {
      Parameters[0] = v5;
      Parameters[1] = v16;
      if ( NtRaiseHardError(-1073741701, 2u, 1u, Parameters, 1u, &Response) >= 0 && LdrInitState != 3 )
        ++LdrpFatalHardErrorCount;
    }
    LdrpLogError((unsigned int)v14, 5253LL, 0LL, v5);
    goto LABEL_23;
  }
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 554;
  if ( *(_BYTE *)v7 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v9 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v9 & 0x20) != 0 )
    {
      LOBYTE(v22) = -1;
      LOBYTE(v21) = -1;
      LdrpLogEtwEvent(5254, -1, v21, v22, 0LL, 0LL);
    }
  }
  if ( !UseWOW64
    && (*(_DWORD *)(a1 + 32) & 0x100) == 0
    && LdrpAdvapi32DllHandle
    && (v23 = ((__int64 (__fastcall *)(HANDLE, _UNICODE_STRING *))(__ROR8__(
                                                                     LdrpSaferIsDllAllowedRoutine,
                                                                     64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
                FileHandle,
                v32),
        v14 = v23,
        v23 != -1073741275)
    && v23 < 0
    || (v14 = LdrpMapDllWithSectionHandle(a1, SectionHandle), !v26)
    || v14 < 0 )
  {
    NtClose(SectionHandle);
    goto LABEL_23;
  }
  *(_QWORD *)(a1 + 184) = FileHandle;
  *(_QWORD *)(a1 + 24) = SectionHandle;
  return (unsigned int)v14;
}
