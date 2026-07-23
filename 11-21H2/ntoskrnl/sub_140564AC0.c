/*
 * XREFs of sub_140564AC0 @ 0x140564AC0
 * Callers:
 *     sub_140959F9C @ 0x140959F9C (sub_140959F9C.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     IoGetDeviceProperty @ 0x140773C30 (IoGetDeviceProperty.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 */

bool __fastcall sub_140564AC0(__int64 a1)
{
  __int64 v1; // rdx
  char v2; // bl
  struct _DEVICE_OBJECT *v4; // rcx
  _BYTE v6[4]; // [rsp+68h] [rbp-29h] BYREF
  int v7; // [rsp+6Ch] [rbp-25h] BYREF
  int v8; // [rsp+70h] [rbp-21h] BYREF
  int v9; // [rsp+74h] [rbp-1Dh] BYREF
  ULONG ResultLength[4]; // [rsp+78h] [rbp-19h] BYREF
  _BYTE PropertyBuffer[80]; // [rsp+88h] [rbp-9h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v2 = 0;
  v8 = 0;
  v9 = 0;
  v7 = 0;
  v6[0] = 0;
  if ( (int)sub_14077DA5C(
              qword_140D00AC0,
              v1,
              1,
              0,
              0LL,
              (__int64)qword_14003B928,
              (__int64)&v7,
              (__int64)&v8,
              4,
              (__int64)&v9,
              0) >= 0
    && v7 == 7 )
  {
    if ( v8 == 1 )
      return 1;
    if ( v8 == 2 )
      return v2;
  }
  v4 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  ResultLength[0] = 0;
  if ( IoGetDeviceProperty(v4, DevicePropertyClassGuid, 0x4Eu, PropertyBuffer, ResultLength) >= 0
    && (int)sub_14077DA5C(
              qword_140D00AC0,
              (unsigned int)PropertyBuffer,
              2,
              0,
              0LL,
              (__int64)&qword_140017EF8,
              (__int64)&v7,
              (__int64)v6,
              1,
              (__int64)&v9,
              0) >= 0
    && v7 == 17
    && v9 == 1 )
  {
    return v6[0] == 0xFF;
  }
  return v2;
}
