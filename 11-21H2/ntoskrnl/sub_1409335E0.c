/*
 * XREFs of sub_1409335E0 @ 0x1409335E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402201F8 @ 0x1402201F8 (sub_1402201F8.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     sub_140551D58 @ 0x140551D58 (sub_140551D58.c)
 *     sub_140554630 @ 0x140554630 (sub_140554630.c)
 *     sub_140860A10 @ 0x140860A10 (sub_140860A10.c)
 */

__int64 __fastcall sub_1409335E0(__int64 a1, _QWORD *a2)
{
  bool v2; // zf
  char v4; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v5; // [rsp+44h] [rbp-BCh] BYREF
  int Data; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v7; // [rsp+4Ch] [rbp-B4h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING ValueName; // [rsp+58h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int *v13; // [rsp+B8h] [rbp-48h]
  __int64 v14; // [rsp+C0h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR v15[2]; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR *p_UserData; // [rsp+F0h] [rbp-10h]
  __int64 v17; // [rsp+F8h] [rbp-8h]
  int *v18; // [rsp+100h] [rbp+0h]
  __int64 v19; // [rsp+108h] [rbp+8h]
  char *v20; // [rsp+110h] [rbp+10h]
  __int64 v21; // [rsp+118h] [rbp+18h]

  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  v2 = *a2 == 0x118B1B29A3BC0875LL;
  DestinationString = 0LL;
  KeyHandle = 0LL;
  ValueName = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( v2 )
  {
    sub_140860A10(0);
    Data = (unsigned __int8)byte_140C0C6B9;
    if ( sub_1402201F8() )
    {
      RtlInitUnicodeString(
        &DestinationString,
        L"\\Registry\\Machine\\OSBOOT\\System\\CurrentControlSet\\Control\\CrashControl");
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL) >= 0 )
      {
        RtlInitUnicodeString(&ValueName, L"AllowCrashDump");
        ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
      }
    }
    v5 = sub_140551D58(byte_140C0C6B9 != 0, 0);
    if ( sub_140554630() )
    {
      UserData.Ptr = (ULONGLONG)&Data;
      *(_QWORD *)&UserData.Size = 4LL;
      v13 = &v5;
      v14 = 4LL;
      EtwWrite(qword_140D00A78, &stru_140038FB8, 0LL, 2u, &UserData);
    }
    if ( (unsigned int)dword_140C064A8 > 5 && sub_1402A2000((__int64)&dword_140C064A8, 0x400000000000LL) )
    {
      UserData.Ptr = 0x1000000LL;
      p_UserData = &UserData;
      v7 = v5;
      v17 = 8LL;
      v18 = (int *)&v7;
      v4 = byte_140C0C6B9;
      v20 = &v4;
      v19 = 4LL;
      v21 = 1LL;
      sub_14020A9C4((__int64)&dword_140C064A8, (unsigned __int8 *)&dword_14002AC64, 0LL, 0LL, 5u, v15);
    }
    if ( KeyHandle )
      ZwClose(KeyHandle);
    return v5;
  }
  else
  {
    if ( sub_140554630() )
    {
      UserData.Ptr = (ULONGLONG)"Invalid notification state name";
      *(_QWORD *)&UserData.Size = 31LL;
      EtwWrite(qword_140D00A78, &stru_140039320, 0LL, 1u, &UserData);
    }
    if ( (unsigned int)dword_140C064A8 > 5 && sub_1402A2000((__int64)&dword_140C064A8, 0x400000000000LL) )
    {
      UserData.Ptr = 0x1000000LL;
      p_UserData = &UserData;
      v17 = 8LL;
      sub_14020A9C4((__int64)&dword_140C064A8, (unsigned __int8 *)&dword_14002AC26 + 1, 0LL, 0LL, 3u, v15);
    }
    return 3221225485LL;
  }
}
