/*
 * XREFs of sub_1403B5688 @ 0x1403B5688
 * Callers:
 *     sub_14081BE48 @ 0x14081BE48 (sub_14081BE48.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 */

__int64 __fastcall sub_1403B5688(HANDLE KeyHandle, _BYTE *a2)
{
  int v4; // ebx
  NTSTATUS v5; // ecx
  NTSTATUS v6; // edi
  ULONG ResultLength; // [rsp+40h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-31h] BYREF
  UNICODE_STRING ValueName; // [rsp+58h] [rbp-21h] BYREF
  UNICODE_STRING v11; // [rsp+68h] [rbp-11h] BYREF
  UNICODE_STRING v12; // [rsp+78h] [rbp-1h] BYREF
  __int128 KeyValueInformation; // [rsp+88h] [rbp+Fh] BYREF
  int v14; // [rsp+98h] [rbp+1Fh]

  ResultLength = 0;
  v14 = 0;
  v4 = 0;
  DestinationString = 0LL;
  ValueName = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  KeyValueInformation = 0LL;
  RtlInitUnicodeString(&DestinationString, L"PowerButtonBugcheck");
  RtlInitUnicodeString(&ValueName, L"OneSettingPowerButtonBugcheck");
  RtlInitUnicodeString(&v11, L"PowerButtonLiveDump");
  RtlInitUnicodeString(&v12, L"OneSettingPowerButtonLiveDump");
  v5 = ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         &KeyValueInformation,
         0x14u,
         &ResultLength);
  if ( v5 >= 0 && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
  {
    *a2 = 1;
    if ( HIDWORD(KeyValueInformation) )
    {
      LODWORD(qword_140C1F7F0) = 2;
      goto LABEL_6;
    }
    LODWORD(qword_140C1F7F0) = 1;
LABEL_17:
    dword_140C1F760 = 1;
    goto LABEL_7;
  }
  LODWORD(qword_140C1F7F0) = 0;
  v5 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength);
  if ( v5 < 0 || *(_QWORD *)((char *)&KeyValueInformation + 4) != 0x400000004LL )
  {
    HIDWORD(qword_140C1F7F0) = 0;
    v5 = -1073741823;
    dword_140C1F760 = 0;
    goto LABEL_7;
  }
  *a2 = 1;
  if ( !HIDWORD(KeyValueInformation) )
  {
    HIDWORD(qword_140C1F7F0) = 1;
    goto LABEL_17;
  }
  HIDWORD(qword_140C1F7F0) = 2;
LABEL_6:
  dword_140C1F760 = 2;
LABEL_7:
  DbgPrintEx(
    0x92u,
    2u,
    "%s (Bugcheck) completed with Status: %08x, ManualBugcheckConfig: %08x, OneSettingBugcheckConfig: %08x\n",
    "PopQueryPowerButtonConfiguration",
    v5,
    qword_140C1F7F0,
    HIDWORD(qword_140C1F7F0));
  v6 = ZwQueryValueKey(KeyHandle, &v11, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength);
  if ( v6 >= 0 && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
  {
    v4 = BYTE12(KeyValueInformation) & 0xF7;
    HIBYTE(word_140C1F7F8) = 1;
    dword_140C1F7FC = v4;
LABEL_23:
    *a2 = 1;
    goto LABEL_10;
  }
  dword_140C1F7FC = 0;
  HIBYTE(word_140C1F7F8) = 0;
  v6 = ZwQueryValueKey(KeyHandle, &v12, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength);
  if ( v6 >= 0 && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
  {
    v4 = BYTE12(KeyValueInformation) & 0xF7;
    byte_140C1F800 = 1;
    LODWORD(qword_140C1F804) = v4;
    goto LABEL_23;
  }
  LODWORD(qword_140C1F804) = 0;
  v6 = -1073741823;
  byte_140C1F800 = 0;
LABEL_10:
  dword_140C1F764 = v4;
  DbgPrintEx(
    0x92u,
    2u,
    "%s (LiveDump) completed with Status: %08x, ManualLiveDumpConfig %08x, OneSettingLiveDumpConfig: %08x\n",
    "PopQueryPowerButtonConfiguration",
    v6,
    dword_140C1F7FC,
    qword_140C1F804);
  if ( (dword_140C1F7FC & 1) != 0 && !(_DWORD)qword_140C1F7F0 && dword_140C1F760 == 2 )
    dword_140C1F760 = 1;
  DbgPrintEx(
    0x92u,
    2u,
    "%s completed with settings: PopPowerButtonBugcheckConfig: %08x, PopPowerButtonLiveDumpConfig: %08x\n",
    "PopQueryPowerButtonConfiguration",
    dword_140C1F760,
    dword_140C1F764);
  return (unsigned int)v6;
}
