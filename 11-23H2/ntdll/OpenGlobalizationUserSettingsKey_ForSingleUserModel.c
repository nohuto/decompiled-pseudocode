/*
 * XREFs of OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x18012EBC4
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x18000C6F4 (OpenGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x18012E928 (OpenGlobalizationUserSettingsKey_ForMua.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x18002D690 (RtlCopyUnicodeString.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtOpenKey @ 0x1800A10F0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A1190 (NtQueryValueKey.c)
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

  if ( dword_18018C394 )
  {
    RtlInitUnicodeString(&DestinationString, &word_1801886C0);
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
      v5[1] = &word_1801886C0;
      if ( v6.Length <= 0xAAu )
      {
        RtlCopyUnicodeString((unsigned __int16 *)v5, &v6.Length);
        dword_18018C394 = 1;
      }
      v3 = 0;
      *a2 = 0LL;
    }
  }
  return (unsigned int)v3;
}
