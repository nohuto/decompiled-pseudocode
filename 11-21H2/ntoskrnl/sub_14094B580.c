/*
 * XREFs of sub_14094B580 @ 0x14094B580
 * Callers:
 *     sub_140561930 @ 0x140561930 (sub_140561930.c)
 *     sub_140697BE0 @ 0x140697BE0 (sub_140697BE0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     sub_140679ADC @ 0x140679ADC (sub_140679ADC.c)
 *     sub_140679BEC @ 0x140679BEC (sub_140679BEC.c)
 *     sub_140698298 @ 0x140698298 (sub_140698298.c)
 *     sub_140784B14 @ 0x140784B14 (sub_140784B14.c)
 */

__int64 __fastcall sub_14094B580(const WCHAR *a1, void *a2, __int64 a3)
{
  NTSTATUS v6; // eax
  __int64 v7; // r9
  int v8; // ebx
  __int64 v9; // r8
  NTSTATUS v10; // eax
  __int64 v11; // r9
  unsigned int v13; // [rsp+20h] [rbp-49h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  HANDLE KeyHandle; // [rsp+D8h] [rbp+6Fh] BYREF
  HANDLE Handle; // [rsp+E8h] [rbp+7Fh] BYREF

  Handle = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Device");
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = a2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v8 = v6;
  if ( v6 != -1073741772 )
  {
    if ( v6 < 0 )
      goto LABEL_12;
    v8 = sub_140784B14(*(__int64 *)&qword_140D00AC0, a1, 0x32u, v7, 983103, 1, (__int64)&Handle, 0LL);
    if ( v8 < 0 )
      goto LABEL_12;
    v8 = sub_140679ADC(KeyHandle, Handle, v9, a3);
    if ( v8 < 0 )
      goto LABEL_12;
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
    ZwClose(Handle);
    Handle = 0LL;
  }
  RtlInitUnicodeString(&DestinationString, L"Properties");
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = a2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v8 = v10;
  if ( v10 == -1073741772 )
  {
    v8 = 0;
  }
  else if ( v10 >= 0 )
  {
    v8 = sub_140784B14(*(__int64 *)&qword_140D00AC0, a1, 0x30u, v11, 983103, 0, (__int64)&Handle, 0LL);
    if ( v8 >= 0 )
    {
      v8 = sub_140698298(*(__int64 *)&qword_140D00AC0, 0LL, 0, a2, v13, (__int64)a1, 3, Handle, 0LL, 0LL, 0);
      if ( v8 >= 0 )
        v8 = sub_140679BEC(KeyHandle, Handle, (__int64)a1, 3, 1u, 0LL, a3);
    }
  }
LABEL_12:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v8;
}
