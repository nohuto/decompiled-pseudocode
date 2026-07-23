/*
 * XREFs of sub_14057DAC0 @ 0x14057DAC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14057E268 @ 0x14057E268 (sub_14057E268.c)
 *     IoGetDeviceProperty @ 0x140773C30 (IoGetDeviceProperty.c)
 */

__int64 __fastcall sub_14057DAC0(__int64 a1, struct _DEVICE_OBJECT *a2)
{
  unsigned int v4; // edi
  NTSTATUS DeviceProperty; // eax
  const WCHAR *v6; // rdx
  ULONG ResultLength; // [rsp+40h] [rbp-438h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-430h] BYREF
  _BYTE PropertyBuffer[1024]; // [rsp+60h] [rbp-418h] BYREF

  ResultLength = 0;
  DestinationString = 0LL;
  sub_14042A5E0(a1, a2);
  v4 = sub_14042A5E0(a1, a2);
  DeviceProperty = IoGetDeviceProperty(a2, DevicePropertyHardwareID, 0x400u, PropertyBuffer, &ResultLength);
  v6 = (const WCHAR *)PropertyBuffer;
  if ( DeviceProperty < 0 )
    v6 = L"<error>";
  RtlInitUnicodeString(&DestinationString, v6);
  sub_14057E268(
    *(_QWORD *)(a1 + 24),
    *(_DWORD *)(a1 + 32),
    a1,
    (_DWORD)a2,
    v4,
    *(_QWORD *)(a1 + 48) + 24LL,
    (__int64)&DestinationString);
  return v4;
}
