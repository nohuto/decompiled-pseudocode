/*
 * XREFs of _CmSetDeviceInterfacePathFormat @ 0x14077DB00
 * Callers:
 *     PiUEventCopyEventData @ 0x14077F694 (PiUEventCopyEventData.c)
 *     IopGetDeviceInterfaces @ 0x1407875E0 (IopGetDeviceInterfaces.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x14081A3E0 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwDeviceInterfaceSetState @ 0x14081B814 (PiSwDeviceInterfaceSetState.c)
 *     IopRegisterDeviceInterface @ 0x140866A3C (IopRegisterDeviceInterface.c)
 *     PiDmObjectCreate @ 0x14086B99C (PiDmObjectCreate.c)
 * Callees:
 *     _CmValidateDeviceInterfaceName @ 0x1406CE9F0 (_CmValidateDeviceInterfaceName.c)
 */

NTSTATUS __fastcall CmSetDeviceInterfacePathFormat(__int64 a1, __int64 *a2, char a3)
{
  NTSTATUS result; // eax
  __int64 v6; // rcx

  result = CmValidateDeviceInterfaceName(a1, (__int64)a2);
  if ( result >= 0 )
  {
    v6 = *(_QWORD *)L"\\\\?\\";
    if ( a3 )
      v6 = 0x5C003F003F005CLL;
    *a2 = v6;
  }
  return result;
}
