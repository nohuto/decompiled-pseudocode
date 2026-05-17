/*
 * XREFs of OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180128A70
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x18006F1DC (OpenGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1801287D8 (OpenGlobalizationUserSettingsKey_ForMua.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlCopyUnicodeString @ 0x180034770 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtOpenKey @ 0x1800A42B0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A4350 (NtQueryValueKey.c)
 */

__int64 __fastcall OpenGlobalizationUserSettingsKey_ForSingleUserModel(__int64 a1, _QWORD *a2)
{
  int v3; // ebx
  _QWORD v5[2]; // [rsp+48h] [rbp-21h] BYREF
  UNICODE_STRING v6; // [rsp+58h] [rbp-11h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-1h] BYREF
  int v8; // [rsp+78h] [rbp+Fh]
  __int64 v9; // [rsp+80h] [rbp+17h]
  UNICODE_STRING *p_DestinationString; // [rsp+88h] [rbp+1Fh]
  int v11; // [rsp+90h] [rbp+27h]
  __int128 v12; // [rsp+98h] [rbp+2Fh]

  if ( dword_18017F024 )
  {
    RtlInitUnicodeString(&DestinationString, &word_18017B350);
    v9 = 0LL;
    p_DestinationString = &DestinationString;
    v8 = 48;
    v11 = 576;
    v12 = 0LL;
    return (unsigned int)NtOpenKey();
  }
  else
  {
    RtlInitUnicodeString(&v6, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CommonGlobUserSettings\\");
    v9 = 0LL;
    p_DestinationString = &v6;
    v8 = 48;
    v11 = 576;
    v12 = 0LL;
    v3 = NtOpenKey();
    if ( v3 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"RedirectedKey");
      NtQueryValueKey();
      v5[0] = 11141120LL;
      v5[1] = &word_18017B350;
      if ( v6.Length <= 0xAAu )
      {
        RtlCopyUnicodeString((unsigned __int16 *)v5, &v6.Length);
        dword_18017F024 = 1;
      }
      v3 = 0;
      *a2 = 0LL;
    }
  }
  return (unsigned int)v3;
}
