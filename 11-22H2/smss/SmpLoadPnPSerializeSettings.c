/*
 * XREFs of SmpLoadPnPSerializeSettings @ 0x140004D7C
 * Callers:
 *     SmscMain @ 0x1400048D8 (SmscMain.c)
 * Callees:
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 */

__int64 SmpLoadPnPSerializeSettings()
{
  NTSTATUS v0; // eax
  unsigned int v1; // ebx
  signed __int32 v2; // ecx
  __int64 v3; // rax
  NTSTATUS v4; // eax
  int v5; // eax
  void *KeyHandle; // [rsp+30h] [rbp-29h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-21h] BYREF
  int v9; // [rsp+40h] [rbp-19h] BYREF
  const wchar_t *v10; // [rsp+48h] [rbp-11h]
  struct _UNICODE_STRING ValueName; // [rsp+50h] [rbp-9h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+90h] [rbp+37h] BYREF
  int v14; // [rsp+94h] [rbp+3Bh]
  int v15; // [rsp+9Ch] [rbp+43h]

  ObjectAttributes.RootDirectory = 0LL;
  KeyHandle = 0LL;
  v10 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\PnP";
  v9 = 7209068;
  ValueName.Buffer = L"BootOptions";
  *(_DWORD *)&ValueName.Length = 1572886;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v9;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v0 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v1 = v0;
  if ( v0 < 0 )
  {
    SmpInitProgressByLine = 1447;
    SmpInitReturnStatus = v0;
    SmpInitLastCall = (__int64)NtOpenKey;
    v2 = _InterlockedIncrement(SmpGlobalLog) % 64;
    v3 = 2LL * v2;
    SmpGlobalLog[4 * v2 + 2] = 1449;
LABEL_3:
    SmpGlobalLog[2 * v3 + 3] = v1;
    *(_QWORD *)&SmpGlobalLog[2 * v3 + 4] = 0LL;
    goto LABEL_9;
  }
  v4 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength);
  v1 = v4;
  if ( v4 < 0 )
  {
    SmpInitProgressByLine = 1467;
    SmpInitReturnStatus = v4;
    SmpInitLastCall = (__int64)NtQueryValueKey;
    v3 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    SmpGlobalLog[2 * v3 + 2] = 1469;
    goto LABEL_3;
  }
  v5 = SmpSerializeBoot;
  if ( v14 == 4 )
    v5 = v15;
  SmpSerializeBoot = v5;
LABEL_9:
  if ( KeyHandle )
    NtClose(KeyHandle);
  return v1;
}
