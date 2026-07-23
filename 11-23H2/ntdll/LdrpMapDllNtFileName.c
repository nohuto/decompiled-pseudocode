/*
 * XREFs of LdrpMapDllNtFileName @ 0x1800109E4
 * Callers:
 *     LdrpMapDllSearchPath @ 0x180010E68 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllFullPath @ 0x180011480 (LdrpMapDllFullPath.c)
 *     LdrpMapDllRetry @ 0x18007330C (LdrpMapDllRetry.c)
 * Callees:
 *     LdrpCodeAuthzCheckDllAllowed @ 0x180010BE8 (LdrpCodeAuthzCheckDllAllowed.c)
 *     LdrpCheckForRetryLoading @ 0x180010C40 (LdrpCheckForRetryLoading.c)
 *     LdrpLogDllState @ 0x180019AB4 (LdrpLogDllState.c)
 *     LdrpMapDllWithSectionHandle @ 0x18002C7AC (LdrpMapDllWithSectionHandle.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogError @ 0x180082B5C (LdrpLogError.c)
 *     LdrpValidateIntegrityContinuity @ 0x180088D20 (LdrpValidateIntegrityContinuity.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtOpenFile @ 0x1800A1510 (NtOpenFile.c)
 *     NtCreateSection @ 0x1800A17F0 (NtCreateSection.c)
 *     NtRaiseHardError @ 0x1800A3D00 (NtRaiseHardError.c)
 *     ZwSystemDebugControl @ 0x1800A4840 (ZwSystemDebugControl.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800D5FE0 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800DAB20 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     LdrpLogEtwEvent @ 0x1800DB3AC (LdrpLogEtwEvent.c)
 *     LdrpSetModuleSigningLevel @ 0x1800E08C8 (LdrpSetModuleSigningLevel.c)
 */

__int64 __fastcall LdrpMapDllNtFileName(__int64 a1, _UNICODE_STRING *a2)
{
  __int64 v3; // rbx
  int v5; // esi
  unsigned __int64 v6; // r12
  ULONG v7; // eax
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // r14
  NTSTATUS v11; // eax
  __int64 v12; // r9
  int v13; // ebx
  ULONG v14; // esi
  NTSTATUS v15; // eax
  int v17; // r8d
  int v18; // r9d
  char *v19; // rcx
  int v20; // r8d
  int v21; // r9d
  HANDLE FileHandle; // [rsp+40h] [rbp-59h] BYREF
  HANDLE SectionHandle; // [rsp+48h] [rbp-51h] BYREF
  __int64 v24; // [rsp+50h] [rbp-49h]
  unsigned __int64 Parameters[2]; // [rsp+58h] [rbp-41h] BYREF
  _UNICODE_STRING InputBuffer; // [rsp+68h] [rbp-31h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-21h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp+Fh] BYREF
  char v29; // [rsp+100h] [rbp+67h] BYREF
  char v30; // [rsp+110h] [rbp+77h] BYREF
  ULONG Response; // [rsp+118h] [rbp+7Fh] BYREF

  v3 = *(_QWORD *)(a1 + 56);
  v24 = *(_QWORD *)(a1 + 176);
  v5 = 0;
  if ( (unsigned __int8)LdrpCheckForRetryLoading(a1, 0LL) )
    return 3221226029LL;
  v6 = v3 + 72;
  LdrpLogDllState(*(_QWORD *)(v3 + 48), v3 + 72, 5285LL);
  v7 = 64;
  ObjectAttributes.Length = 48;
  if ( !LdrpUseImpersonatedDeviceMap )
    v7 = 2112;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = v7;
  ObjectAttributes.ObjectName = a2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = 2147353476LL;
  if ( RtlGetCurrentServiceSessionId() )
    v9 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v9 = 2147353476LL;
  v10 = 2147353477LL;
  if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v19 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
    if ( (*v19 & 0x20) != 0 )
    {
      LOBYTE(v18) = -1;
      LOBYTE(v17) = -1;
      LdrpLogEtwEvent(5253, -1, v17, v18, 0LL, 0LL);
    }
  }
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x40000) != 0 )
  {
    InputBuffer = *a2;
    ZwSystemDebugControl(SysDbgKdPullRemoteFile, &InputBuffer, 0x10u, 0LL, 0, 0LL);
  }
  while ( 1 )
  {
    v11 = NtOpenFile(&FileHandle, 0x100021u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
    v13 = v11;
    if ( v11 >= 0 )
      break;
    if ( v11 == -1073741772 || v11 == -1073741766 )
      return (unsigned int)-1073741515;
    if ( v11 != -1073741790 || v5 || !(unsigned __int8)LdrpCheckComponentOnDemandEtwEvent(a1) )
      return (unsigned int)v13;
    v5 = 1;
  }
  if ( LdrpAuditIntegrityContinuity
    && (v13 = LdrpValidateIntegrityContinuity(a1, FileHandle), v13 < 0)
    && LdrpEnforceIntegrityContinuity
    || (v14 = 0x1000000, (*(_DWORD *)(a1 + 32) & 0x1000000) != 0)
    && (NtCurrentPeb()->BitField & 0x10) == 0
    && (LOBYTE(v12) = 8, v13 = LdrpSetModuleSigningLevel(FileHandle, *(_QWORD *)(a1 + 56), &v30, v12, &v29), v13 < 0) )
  {
LABEL_22:
    NtClose(FileHandle);
    return (unsigned int)v13;
  }
  if ( UseWOW64 && (*(_DWORD *)(a1 + 32) & 0x800) == 0 )
    v14 = 17825792;
  v15 = NtCreateSection(&SectionHandle, 0xDu, 0LL, 0LL, 0x10u, v14, FileHandle);
  v13 = v15;
  if ( v15 < 0 )
  {
    if ( v15 == -1073740702 || (unsigned int)(v15 + 1073740674) <= 1 )
    {
      v13 = LdrAppxHandleIntegrityFailure((unsigned int)v15);
    }
    else if ( v15 != -1073741801 && v15 != -1073741670 && v15 != -1073741523 )
    {
      Parameters[0] = v6;
      Parameters[1] = v15;
      if ( NtRaiseHardError(-1073741701, 2u, 1u, Parameters, 1u, &Response) >= 0 && LdrInitState != 3 )
        ++LdrpFatalHardErrorCount;
    }
    LdrpLogError((unsigned int)v13, 5253LL, 0LL, v6);
    goto LABEL_22;
  }
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 554;
  if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v10 & 0x20) != 0 )
    {
      LOBYTE(v21) = -1;
      LOBYTE(v20) = -1;
      LdrpLogEtwEvent(5254, -1, v20, v21, 0LL, 0LL);
    }
  }
  if ( !UseWOW64
    && (*(_DWORD *)(a1 + 32) & 0x100) == 0
    && (v13 = LdrpCodeAuthzCheckDllAllowed(a2, FileHandle), (int)(v13 + 0x80000000) >= 0)
    && v13 != -1073741275
    || (v13 = LdrpMapDllWithSectionHandle(a1, SectionHandle), !v24)
    || v13 < 0 )
  {
    NtClose(SectionHandle);
    goto LABEL_22;
  }
  *(_QWORD *)(a1 + 184) = FileHandle;
  *(_QWORD *)(a1 + 24) = SectionHandle;
  return (unsigned int)v13;
}
