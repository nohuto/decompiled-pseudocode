/*
 * XREFs of _CmGetDeviceRegKeyPath @ 0x1406CE66C
 * Callers:
 *     _CmOpenDeviceRegKeyWorker @ 0x1406CE224 (_CmOpenDeviceRegKeyWorker.c)
 *     PiDqGetRelativeObjectRegPath @ 0x1407FABA4 (PiDqGetRelativeObjectRegPath.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A621A4 (_CmDeleteDeviceRegKeyWorker.c)
 * Callees:
 *     _CmGetDeviceSoftwareKeyPath @ 0x1406C9B50 (_CmGetDeviceSoftwareKeyPath.c)
 *     _CmValidateDeviceName @ 0x1406CE7F0 (_CmValidateDeviceName.c)
 *     _CmGetDeviceInstanceKeyPath @ 0x1406CF39C (_CmGetDeviceInstanceKeyPath.c)
 *     _CmGetDeviceHardwareKeyPath @ 0x1407D09EC (_CmGetDeviceHardwareKeyPath.c)
 *     _CmGetDeviceLogConfKeyPath @ 0x1407D5A28 (_CmGetDeviceLogConfKeyPath.c)
 *     _CmGetDeviceControlKeyPath @ 0x14084CEC0 (_CmGetDeviceControlKeyPath.c)
 */

int __fastcall CmGetDeviceRegKeyPath(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        NTSTRSAFE_PWSTR pszDest,
        size_t a7,
        _DWORD *a8)
{
  int v9; // ebx
  int result; // eax
  int v13; // ecx
  int v14; // r9d
  int v15; // [rsp+20h] [rbp-28h]
  size_t cchDest; // [rsp+30h] [rbp-18h]

  v9 = a3;
  if ( !(_DWORD)a3 || (a3 & 0xFFFFFCE8) != 0 )
    return -1073741811;
  result = CmValidateDeviceName(a1, a2, a3);
  if ( result < 0 )
    return result;
  if ( (unsigned __int8)v9 != 16 )
  {
    switch ( (unsigned __int8)v9 )
    {
      case 0x12u:
        LODWORD(cchDest) = a7;
        return CmGetDeviceSoftwareKeyPath(a1, a2, v9, a4, a5, pszDest, cchDest, a8);
      case 0x11u:
        LODWORD(cchDest) = a7;
        return CmGetDeviceHardwareKeyPath(v13, a2, v9, a4, v15, pszDest, cchDest, (__int64)a8);
      case 0x13u:
        LODWORD(cchDest) = a7;
        return CmGetDeviceControlKeyPath(v13, a2, v9, v14, v15, pszDest, cchDest, (__int64)a8);
      case 0x14u:
        LODWORD(cchDest) = a7;
        return CmGetDeviceLogConfKeyPath(v13, a2, v9, v14, v15, pszDest, cchDest, (__int64)a8);
    }
    return -1073741811;
  }
  LODWORD(cchDest) = a7;
  return CmGetDeviceInstanceKeyPath(v13, a2, v9, a4, v15, pszDest, cchDest, (__int64)a8);
}
