/*
 * XREFs of LdrResRelease @ 0x1800F0160
 * Callers:
 *     <none>
 * Callees:
 *     RtlCultureNameToLCID @ 0x180016540 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18006B800 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrRemoveLoadAsDataTable @ 0x180071FE0 (LdrRemoveLoadAsDataTable.c)
 *     NtUnmapViewOfSection @ 0x1800A13F0 (NtUnmapViewOfSection.c)
 *     LdrpTraceLoadMUIDll @ 0x1800ED41C (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrResRelease(wchar_t *String2, PCWSTR SourceString, int a3)
{
  __int64 v6; // r14
  __int64 v7; // rcx
  int v9; // eax
  unsigned int v10; // edi
  wchar_t *v11; // rdi
  int v12; // [rsp+20h] [rbp-58h] BYREF
  const wchar_t *v13; // [rsp+28h] [rbp-50h]
  int v14; // [rsp+30h] [rbp-48h] BYREF
  const wchar_t *v15; // [rsp+38h] [rbp-40h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  int v17; // [rsp+80h] [rbp+8h] BYREF
  wchar_t *v18; // [rsp+98h] [rbp+20h] BYREF

  v12 = 2621478;
  v13 = L"LdrResRelease Enter";
  v14 = 2490404;
  v15 = L"LdrResRelease Exit";
  v6 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v7 = 2147353477LL;
  if ( (*(_BYTE *)v7 & 1) != 0 )
  {
    RtlGetCurrentServiceSessionId();
    LdrpTraceLoadMUIDll((unsigned __int16 *)&v12);
  }
  if ( !String2 )
    return 3221225485LL;
  v18 = 0LL;
  if ( (a3 & 0x8800) == 0x8800 )
    return 0LL;
  if ( (unsigned __int64)SourceString >= 0x10000 )
  {
    if ( *SourceString )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( !RtlCultureNameToLCID(&DestinationString.Length, &v17) )
        return 3221225485LL;
    }
    else
    {
      v17 = 0;
    }
    LOWORD(SourceString) = v17;
  }
  if ( (a3 & 0xC00) != 0 )
  {
    v9 = LdrRemoveLoadAsDataTable(String2, &v18, 0LL, a3);
    v10 = v9;
    if ( v9 < 0 )
    {
      if ( v9 != -1073740024 && v9 != -1073741511 )
        goto LABEL_26;
      goto LABEL_25;
    }
  }
  else
  {
    v18 = String2;
  }
  v11 = v18;
  LdrUnloadAlternateResourceModuleEx((__int64)v18, (__int16)SourceString);
  if ( (a3 & 0xC00) != 0 && v11 )
    NtUnmapViewOfSection();
LABEL_25:
  v10 = 0;
LABEL_26:
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v6 & 1) != 0 )
  {
    RtlGetCurrentServiceSessionId();
    LdrpTraceLoadMUIDll((unsigned __int16 *)&v14);
  }
  return v10;
}
