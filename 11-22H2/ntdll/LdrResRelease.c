/*
 * XREFs of LdrResRelease @ 0x1800EED50
 * Callers:
 *     <none>
 * Callees:
 *     LdrRemoveLoadAsDataTable @ 0x180008560 (LdrRemoveLoadAsDataTable.c)
 *     RtlCultureNameToLCID @ 0x180016750 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18006B820 (LdrUnloadAlternateResourceModuleEx.c)
 *     NtUnmapViewOfSection @ 0x18009F330 (NtUnmapViewOfSection.c)
 *     LdrpTraceLoadMUIDll @ 0x1800EC0E8 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrResRelease(PVOID InitModule, PCWSTR SourceString, ULONG Flags)
{
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rcx
  NTSTATUS v11; // eax
  unsigned __int32 v12; // edi
  unsigned __int64 v13; // rdi
  int v14; // [rsp+20h] [rbp-58h] BYREF
  const wchar_t *v15; // [rsp+28h] [rbp-50h]
  int v16; // [rsp+30h] [rbp-48h] BYREF
  const wchar_t *v17; // [rsp+38h] [rbp-40h]
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  DWORD Lcid; // [rsp+80h] [rbp+8h] BYREF
  PVOID BaseModule; // [rsp+98h] [rbp+20h] BYREF

  v14 = 2621478;
  v15 = L"LdrResRelease Enter";
  v16 = 2490404;
  v17 = L"LdrResRelease Exit";
  v6 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v7 = 2147353477LL;
  if ( (*(_BYTE *)v7 & 1) != 0 )
  {
    v8 = 2147353476LL;
    if ( RtlGetCurrentServiceSessionId() )
      v9 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v9 = 2147353476LL;
    LdrpTraceLoadMUIDll((unsigned __int16 *)&v14, *(unsigned __int8 *)v9);
  }
  else
  {
    v8 = 2147353476LL;
  }
  if ( !InitModule )
    return 3221225485LL;
  BaseModule = 0LL;
  if ( (Flags & 0x8800) == 0x8800 )
    return 0LL;
  if ( (unsigned __int64)SourceString >= 0x10000 )
  {
    if ( *SourceString )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
        return 3221225485LL;
    }
    else
    {
      Lcid = 0;
    }
    LOWORD(SourceString) = Lcid;
  }
  if ( (Flags & 0xC00) != 0 )
  {
    v11 = LdrRemoveLoadAsDataTable(InitModule, &BaseModule, 0LL, Flags);
    v12 = v11;
    if ( v11 < 0 )
    {
      if ( v11 != -1073740024 && v11 != -1073741511 )
        goto LABEL_30;
      goto LABEL_29;
    }
  }
  else
  {
    BaseModule = InitModule;
  }
  v13 = (unsigned __int64)BaseModule;
  LdrUnloadAlternateResourceModuleEx(BaseModule, (unsigned __int16)SourceString);
  if ( (Flags & 0xC00) != 0 && v13 )
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID)(v13 & 0xFFFFFFFFFFFFFFFCuLL));
LABEL_29:
  v12 = 0;
LABEL_30:
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v6 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v8 = (__int64)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll((unsigned __int16 *)&v16, *(unsigned __int8 *)v8);
  }
  return v12;
}
