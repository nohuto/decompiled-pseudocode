/*
 * XREFs of SepSecureBootCheckForUpdates @ 0x140B6DC20
 * Callers:
 *     SeSecureBootRegisterPolicy @ 0x140B6D9C8 (SeSecureBootRegisterPolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwOpenKey @ 0x14041A8E0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041A980 (ZwQueryValueKey.c)
 *     NtUpdateWnfStateData @ 0x140712310 (NtUpdateWnfStateData.c)
 */

int SepSecureBootCheckForUpdates()
{
  int result; // eax
  ULONG MatchingChangeStamp; // [rsp+40h] [rbp-9h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp+7h] BYREF
  __int128 KeyValueInformation; // [rsp+80h] [rbp+37h] BYREF
  int v5; // [rsp+90h] [rbp+47h]

  KeyHandle = 0LL;
  MatchingChangeStamp = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  v5 = 0;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"z|";
  KeyValueInformation = 0LL;
  ObjectAttributes.Attributes = 576;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    result = ZwQueryValueKey(
               KeyHandle,
               (PUNICODE_STRING)&stru_140005890,
               KeyValuePartialInformation,
               &KeyValueInformation,
               0x14u,
               &MatchingChangeStamp);
    if ( result >= 0 && HIDWORD(KeyValueInformation) && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      result = NtUpdateWnfStateData(&WNF_SBS_UPDATE_AVAILABLE, 0LL, 0, 0LL, 0LL, 0, 0);
  }
  if ( KeyHandle )
    return ZwClose(KeyHandle);
  return result;
}
