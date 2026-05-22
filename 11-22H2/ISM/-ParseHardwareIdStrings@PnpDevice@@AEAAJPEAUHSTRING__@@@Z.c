/*
 * XREFs of ?ParseHardwareIdStrings@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x18000C2A0
 * Callers:
 *     ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAVPnpDeviceWatcher@@PEAPEAV1@@Z @ 0x180063A48 (-MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAVPnpDeviceWatcher@@PEAPEAV1@@Z.c)
 * Callees:
 *     swscanf_s @ 0x180057BC8 (swscanf_s.c)
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x1800FD968 (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?LogPnPDeviceInfo@LampArrayTelemetry@@QEAAXPEBGGGGG@Z @ 0x1800FDAE0 (-LogPnPDeviceInfo@LampArrayTelemetry@@QEAAXPEBGGGGG@Z.c)
 */

__int64 __fastcall PnpDevice::ParseHardwareIdStrings(PnpDevice *this, HSTRING a2)
{
  PCWSTR StringRawBuffer; // rax
  size_t v4; // rdx
  const wchar_t *v5; // rbx
  size_t v6; // rdi
  bool v7; // zf
  __int16 v9; // ax
  __int16 v10; // cx
  LampArrayTelemetry *v11; // rcx
  UINT32 length; // [rsp+30h] [rbp-18h] BYREF
  int v13; // [rsp+34h] [rbp-14h] BYREF
  int v14; // [rsp+38h] [rbp-10h] BYREF
  __int16 v15; // [rsp+60h] [rbp+18h] BYREF
  __int16 v16; // [rsp+68h] [rbp+20h] BYREF

  StringRawBuffer = WindowsGetStringRawBuffer(a2, &length);
  v4 = length;
  v5 = StringRawBuffer;
  if ( !length )
    return 0LL;
  do
  {
    if ( !*v5 )
      break;
    v6 = wcsnlen(v5, v4);
    if ( (!*((_WORD *)this + 58) || !*((_WORD *)this + 59))
      && (swscanf_s(v5, L"USB\\VID_%4x&PID_%4x", &v15, &v16) == 2
       || swscanf_s(v5, L"HID\\VID_%4x&PID_%4x", &v15, &v16) == 2
       || swscanf_s(v5, L"HID\\{%*8c-%*4c-%*4c-%*4c-%*12c}_VID&%4x_PID&%4x", &v15, &v16) == 2) )
    {
      *((_WORD *)this + 58) = v15;
      *((_WORD *)this + 59) = v16;
    }
    if ( (!*((_WORD *)this + 60) || !*((_WORD *)this + 61))
      && swscanf_s(v5, L"HID_DEVICE_UP:%4x_U:%4x", &v13, &v14) == 2 )
    {
      v9 = v13;
      v10 = v14;
      *((_WORD *)this + 60) = v13;
      *((_WORD *)this + 61) = v10;
      if ( v9 == 89 && v10 == 1 )
      {
        LampArrayTelemetry::GetInstance();
        LampArrayTelemetry::LogPnPDeviceInfo(
          v11,
          v5,
          *((_WORD *)this + 58),
          *((_WORD *)this + 59),
          *((_WORD *)this + 60),
          *((_WORD *)this + 61));
      }
    }
    v5 += v6 + 1;
    v7 = -1 - (_DWORD)v6 + length == 0;
    v4 = -1 - (_DWORD)v6 + length;
    length += -1 - v6;
  }
  while ( !v7 );
  return 0LL;
}
