/*
 * XREFs of LdrpGetModuleName @ 0x180001008
 * Callers:
 *     LdrQueryModuleInfoFromLdrEntry @ 0x180001130 (LdrQueryModuleInfoFromLdrEntry.c)
 *     LdrQueryModuleInfoFromLdrEntry32 @ 0x1800D95F0 (LdrQueryModuleInfoFromLdrEntry32.c)
 * Callees:
 *     LdrpReadMemory @ 0x180001250 (LdrpReadMemory.c)
 *     RtlGetNtSystemRoot @ 0x180018810 (RtlGetNtSystemRoot.c)
 *     RtlUnicodeStringToAnsiString @ 0x180018B90 (RtlUnicodeStringToAnsiString.c)
 *     RtlWow64GetProcessMachines @ 0x18007EFF0 (RtlWow64GetProcessMachines.c)
 *     RtlReplaceSystemDirectoryInPath @ 0x180086740 (RtlReplaceSystemDirectoryInPath.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x180090FF0 (_wcsnicmp.c)
 */

NTSTATUS __fastcall LdrpGetModuleName(__int64 *a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int16 v4; // bx
  NTSTATUS result; // eax
  char *v9; // rcx
  __int16 v10; // ax
  const wchar_t *NtSystemRoot; // rax
  __int64 v12; // rcx
  size_t v13; // rdi
  __int64 v14; // rcx
  USHORT ProcessMachine[8]; // [rsp+20h] [rbp-E0h] BYREF
  _STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t String1[264]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = *(_WORD *)a2;
  if ( *(_WORD *)a2 >= 0x200u )
    v4 = 512;
  result = LdrpReadMemory(a1, *(_QWORD *)(a2 + 8), String1, v4);
  if ( result >= 0 )
  {
    String1[256] = 0;
    if ( !a4 )
      goto LABEL_5;
    NtSystemRoot = RtlGetNtSystemRoot();
    v12 = -1LL;
    do
      ++v12;
    while ( NtSystemRoot[v12] );
    if ( !v12 )
      return -1073741595;
    v13 = v12 - 1;
    if ( NtSystemRoot[v12 - 1] != 92 )
      v13 = v12;
    if ( wcsnicmp(String1, NtSystemRoot, v13) || wcsnicmp(&String1[v13], L"\\system32", 9uLL) )
      goto LABEL_5;
    if ( v13 + 16 >= 0x101 )
      return -1073741595;
    v14 = *a1;
    if ( !*a1 )
      v14 = -1LL;
    if ( RtlWow64GetProcessMachines((HANDLE)v14, ProcessMachine, 0LL) >= 0
      && (SourceString.Buffer = String1,
          SourceString.MaximumLength = v4,
          SourceString.Length = v4,
          *(_DWORD *)(&DestinationString.MaximumLength + 1) = *(_DWORD *)(&SourceString.MaximumLength + 1),
          DestinationString.Buffer = (char *)&String1[v13],
          DestinationString.Length = v4 - 2 * v13,
          DestinationString.MaximumLength = DestinationString.Length,
          (RtlReplaceSystemDirectoryInPath((PUNICODE_STRING)&DestinationString, 1u, ProcessMachine[0], 0) & 0x80000000) == 0) )
    {
LABEL_5:
      SourceString.MaximumLength = v4;
      SourceString.Buffer = String1;
      SourceString.Length = v4;
      DestinationString.Buffer = (char *)(a3 + 40);
      *(_DWORD *)&DestinationString.Length = 0x1000000;
      result = RtlUnicodeStringToAnsiString(&DestinationString, &SourceString, 0);
      if ( result >= 0 )
      {
        v9 = &DestinationString.Buffer[DestinationString.Length];
        while ( v9 > DestinationString.Buffer )
        {
          v10 = (__int16)v9--;
          if ( *v9 == 92 )
          {
            LOWORD(v9) = v10;
            break;
          }
        }
        *(_WORD *)(a3 + 38) = (_WORD)v9 - LOWORD(DestinationString.Buffer);
        return 0;
      }
    }
    else
    {
      return -1073741595;
    }
  }
  return result;
}
