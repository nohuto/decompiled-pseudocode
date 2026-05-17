/*
 * XREFs of RtlpSetMachineUILanguagesImmediate @ 0x1800FD398
 * Callers:
 *     RtlpSetPreferredUILanguages @ 0x1800FD570 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     OpenGlobalizationUserSettingsKey @ 0x18000C6F4 (OpenGlobalizationUserSettingsKey.c)
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     ZwCreateKey @ 0x1800A1250 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1800A1AA0 (ZwSetValueKey.c)
 */

__int64 RtlpSetMachineUILanguagesImmediate()
{
  int Key; // ebx
  __int64 v1; // rdx
  __int64 v2; // r9
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  int v5; // [rsp+50h] [rbp-30h]
  HANDLE v6; // [rsp+58h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+60h] [rbp-20h]
  int v8; // [rsp+68h] [rbp-18h]
  __int128 v9; // [rsp+70h] [rbp-10h]
  HANDLE v10; // [rsp+B8h] [rbp+38h] BYREF

  v10 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
  v6 = 0LL;
  p_DestinationString = &DestinationString;
  v9 = 0LL;
  v5 = 48;
  v8 = 64;
  Key = ZwCreateKey();
  if ( Key >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"PreferredUILanguages");
    Key = ZwSetValueKey();
    if ( Key >= 0 && (int)OpenGlobalizationUserSettingsKey(0x2000000u, v1, (__int64)&v10, v2) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached");
      v6 = v10;
      p_DestinationString = &DestinationString;
      v5 = 48;
      v8 = 64;
      v9 = 0LL;
      Key = ZwCreateKey();
      if ( Key >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"MachinePreferredUILanguages");
        Key = ZwSetValueKey();
      }
    }
  }
  if ( v10 )
    NtClose(v10);
  return (unsigned int)Key;
}
