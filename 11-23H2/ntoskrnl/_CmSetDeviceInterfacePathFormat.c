/*
 * XREFs of _CmSetDeviceInterfacePathFormat @ 0x14077D910
 * Callers:
 *     PiUEventCopyEventData @ 0x14077F4A4 (PiUEventCopyEventData.c)
 *     IopGetDeviceInterfaces @ 0x1407873F0 (IopGetDeviceInterfaces.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x14081A110 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwDeviceInterfaceSetState @ 0x14081B544 (PiSwDeviceInterfaceSetState.c)
 *     IopRegisterDeviceInterface @ 0x1408667FC (IopRegisterDeviceInterface.c)
 *     PiDmObjectCreate @ 0x14086B75C (PiDmObjectCreate.c)
 * Callees:
 *     _CmValidateDeviceInterfaceName @ 0x1406CE9C0 (_CmValidateDeviceInterfaceName.c)
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
