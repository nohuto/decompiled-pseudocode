/*
 * XREFs of ?RemoveInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x1800EAF54
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18001C910 (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 * Callees:
 *     ?CloseInterface@PnpDevice@@QEAAXXZ @ 0x1800EAB54 (-CloseInterface@PnpDevice@@QEAAXXZ.c)
 */

__int64 __fastcall PnpDevice::RemoveInterface(PnpDevice *this, HSTRING string1)
{
  __int64 v2; // rax
  bool v4; // zf
  int v5; // ecx
  int v6; // ecx
  INT32 result; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 4);
  if ( string1 )
  {
    if ( !v2 || WindowsCompareStringOrdinal(string1, *((HSTRING *)this + 4), &result) < 0 )
      return 1LL;
    v4 = result == 0;
  }
  else
  {
    v4 = v2 == 0;
  }
  if ( !v4 )
    return 1LL;
  v5 = *((_DWORD *)this + 29);
  if ( !v5 )
    return 2147549183LL;
  v6 = v5 - 1;
  if ( v6 )
  {
    if ( (unsigned int)(v6 - 1) >= 2 )
      return 2147549183LL;
  }
  else
  {
    *((GUID *)this + 4) = GUID_NULL;
  }
  WindowsDeleteString(*((HSTRING *)this + 4));
  *((_QWORD *)this + 4) = 0LL;
  PnpDevice::CloseInterface(this);
  return 0LL;
}
