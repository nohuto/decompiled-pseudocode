/*
 * XREFs of LdrpMapDllNtFileName @ 0x180010BF4
 * Callers:
 *     LdrpMapDllSearchPath @ 0x180011078 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllFullPath @ 0x180011690 (LdrpMapDllFullPath.c)
 *     LdrpMapDllRetry @ 0x180072C9C (LdrpMapDllRetry.c)
 * Callees:
 *     LdrpCodeAuthzCheckDllAllowed @ 0x180010DF8 (LdrpCodeAuthzCheckDllAllowed.c)
 *     LdrpCheckForRetryLoading @ 0x180010E50 (LdrpCheckForRetryLoading.c)
 *     LdrpLogDllState @ 0x180019CC4 (LdrpLogDllState.c)
 *     LdrpMapDllWithSectionHandle @ 0x18002C97C (LdrpMapDllWithSectionHandle.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogError @ 0x1800824EC (LdrpLogError.c)
 *     LdrpValidateIntegrityContinuity @ 0x180088520 (LdrpValidateIntegrityContinuity.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtOpenFile @ 0x18009F450 (NtOpenFile.c)
 *     NtCreateSection @ 0x18009F730 (NtCreateSection.c)
 *     NtRaiseHardError @ 0x1800A1C40 (NtRaiseHardError.c)
 *     ZwSystemDebugControl @ 0x1800A2780 (ZwSystemDebugControl.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800D6680 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800DB170 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     LdrpLogEtwEvent @ 0x1800DB9FC (LdrpLogEtwEvent.c)
 *     LdrpSetModuleSigningLevel @ 0x1800DF598 (LdrpSetModuleSigningLevel.c)
 */

__int64 __fastcall LdrpMapDllNtFileName(__int64 a1, UNICODE_STRING *a2)
{
  __int64 v3; // rbx
  int v5; // esi
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  ULONG v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r15
  __int64 v15; // rcx
  __int64 v16; // r14
  NTSTATUS v17; // eax
  int v18; // r9d
  int v19; // ebx
  int v20; // esi
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  int v31; // r8d
  int v32; // r9d
  char *v33; // rcx
  int v34; // r8d
  int v35; // r9d
  HANDLE FileHandle; // [rsp+40h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-51h] BYREF
  __int64 v38; // [rsp+50h] [rbp-49h]
  _QWORD v39[2]; // [rsp+58h] [rbp-41h] BYREF
  UNICODE_STRING v40; // [rsp+68h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp+Fh] BYREF
  char v43; // [rsp+100h] [rbp+67h] BYREF
  char v44; // [rsp+110h] [rbp+77h] BYREF
  char v45; // [rsp+118h] [rbp+7Fh] BYREF

  v3 = *(_QWORD *)(a1 + 56);
  v38 = *(_QWORD *)(a1 + 176);
  v5 = 0;
  if ( (unsigned __int8)LdrpCheckForRetryLoading(a1, 0LL) )
    return 3221226029LL;
  v6 = v3 + 72;
  LdrpLogDllState(*(_QWORD *)(v3 + 48), v3 + 72, 5285LL);
  v10 = 64;
  ObjectAttributes.Length = 48;
  if ( !LdrpUseImpersonatedDeviceMap )
    v10 = 2112;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = v10;
  ObjectAttributes.ObjectName = a2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v14 = 2147353476LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(2112LL, v7, v8, v9) )
    v15 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v15 = 2147353476LL;
  v16 = 2147353477LL;
  if ( *(_BYTE *)v15 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    v33 = (unsigned int)RtlGetCurrentServiceSessionId(v15, v11, v12, v13)
        ? (char *)NtCurrentPeb()->SharedData + 555
        : (char *)2147353477;
    if ( (*v33 & 0x20) != 0 )
    {
      LOBYTE(v32) = -1;
      LOBYTE(v31) = -1;
      LdrpLogEtwEvent(5253, -1, v31, v32, 0LL, 0LL);
    }
  }
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x40000) != 0 )
  {
    v40 = *a2;
    ZwSystemDebugControl(38LL, &v40, 16LL);
  }
  while ( 1 )
  {
    v17 = NtOpenFile(&FileHandle, 0x100021u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
    v19 = v17;
    if ( v17 >= 0 )
      break;
    if ( v17 == -1073741772 || v17 == -1073741766 )
      return (unsigned int)-1073741515;
    if ( v17 != -1073741790 || v5 || !(unsigned __int8)LdrpCheckComponentOnDemandEtwEvent(a1) )
      return (unsigned int)v19;
    v5 = 1;
  }
  if ( LdrpAuditIntegrityContinuity
    && (v19 = LdrpValidateIntegrityContinuity(a1, FileHandle), v19 < 0)
    && LdrpEnforceIntegrityContinuity
    || (v20 = 0x1000000, (*(_DWORD *)(a1 + 32) & 0x1000000) != 0)
    && (NtCurrentPeb()->BitField & 0x10) == 0
    && (LOBYTE(v18) = 8,
        v19 = LdrpSetModuleSigningLevel(
                (_DWORD)FileHandle,
                *(_QWORD *)(a1 + 56),
                (unsigned int)&v44,
                v18,
                (__int64)&v43),
        v19 < 0) )
  {
LABEL_22:
    NtClose(FileHandle);
    return (unsigned int)v19;
  }
  if ( UseWOW64 && (*(_DWORD *)(a1 + 32) & 0x800) == 0 )
    v20 = 17825792;
  v21 = NtCreateSection(&Handle, 13LL, 0LL, 0LL, 16, v20, FileHandle);
  v19 = v21;
  if ( v21 < 0 )
  {
    if ( v21 == -1073740702 || (unsigned int)(v21 + 1073740674) <= 1 )
    {
      v19 = LdrAppxHandleIntegrityFailure((unsigned int)v21);
    }
    else if ( v21 != -1073741801 && v21 != -1073741670 && v21 != -1073741523 )
    {
      v39[0] = v6;
      v39[1] = v21;
      if ( (int)NtRaiseHardError(3221225595LL, 2LL, 1LL, v39, 1, &v45) >= 0 && LdrInitState != 3 )
        ++LdrpFatalHardErrorCount;
    }
    LdrpLogError((unsigned int)v19, 5253LL, 0LL, v6);
    goto LABEL_22;
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v23, v22, v24, v25) )
    v14 = (__int64)NtCurrentPeb()->SharedData + 554;
  if ( *(_BYTE *)v14 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v27, v26, v28, v29) )
      v16 = (__int64)NtCurrentPeb()->SharedData + 555;
    if ( (*(_BYTE *)v16 & 0x20) != 0 )
    {
      LOBYTE(v35) = -1;
      LOBYTE(v34) = -1;
      LdrpLogEtwEvent(5254, -1, v34, v35, 0LL, 0LL);
    }
  }
  if ( !UseWOW64
    && (*(_DWORD *)(a1 + 32) & 0x100) == 0
    && (v19 = LdrpCodeAuthzCheckDllAllowed(a2, FileHandle), (int)(v19 + 0x80000000) >= 0)
    && v19 != -1073741275
    || (v19 = LdrpMapDllWithSectionHandle(a1, Handle), !v38)
    || v19 < 0 )
  {
    NtClose(Handle);
    goto LABEL_22;
  }
  *(_QWORD *)(a1 + 184) = FileHandle;
  *(_QWORD *)(a1 + 24) = Handle;
  return (unsigned int)v19;
}
