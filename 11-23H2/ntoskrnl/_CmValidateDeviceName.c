/*
 * XREFs of _CmValidateDeviceName @ 0x1406CE7F0
 * Callers:
 *     _PnpDispatchDevice @ 0x1406CD040 (_PnpDispatchDevice.c)
 *     _CmGetDeviceRegKeyPath @ 0x1406CE66C (_CmGetDeviceRegKeyPath.c)
 *     PiCMGetRelatedDeviceInstance @ 0x140799EE0 (PiCMGetRelatedDeviceInstance.c)
 *     _CmGetDeviceInterfaceName @ 0x1407C5C88 (_CmGetDeviceInterfaceName.c)
 *     _CmEnumSubkeyCallback @ 0x14082AFC0 (_CmEnumSubkeyCallback.c)
 *     PiCMCreateDevice @ 0x140968630 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x140969048 (PiCMDeleteDevice.c)
 *     PiCMDeviceAction @ 0x14096988C (PiCMDeviceAction.c)
 *     PiCMGenerateDeviceInstance @ 0x140969DBC (PiCMGenerateDeviceInstance.c)
 *     PiCMGetDeviceDepth @ 0x14096A120 (PiCMGetDeviceDepth.c)
 *     PiCMQueryRemove @ 0x14096A474 (PiCMQueryRemove.c)
 *     PiCMRegisterDeviceInterface @ 0x14096A884 (PiCMRegisterDeviceInterface.c)
 *     PiCMSetDeviceProblem @ 0x14096AB18 (PiCMSetDeviceProblem.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x14022B77C (RtlUnalignedStringCchLengthW.c)
 */

__int64 __fastcall CmValidateDeviceName(__int64 a1, const wchar_t *a2)
{
  const wchar_t *v2; // rbx
  int v3; // edi
  NTSTATUS v4; // r8d
  int v5; // r11d
  wchar_t v6; // ax
  size_t pcchLength; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  v3 = 1;
  if ( !a2 )
    return 3221225485LL;
  v4 = RtlUnalignedStringCchLengthW(a2, 0xC8uLL, &pcchLength);
  if ( v4 >= 0 )
  {
    v6 = *v2;
    if ( *v2 )
    {
      while ( (unsigned __int16)(v6 - 33) <= 0x5Eu && v6 != 44 )
      {
        if ( v6 == 92 )
        {
          if ( !v5 )
            return 3221225523LL;
          v5 = 0;
          ++v3;
        }
        else
        {
          ++v5;
        }
        v6 = v2[1];
        ++v2;
        if ( !v6 )
        {
          if ( v5 && v3 == 3 )
            return (unsigned int)v4;
          return 3221225523LL;
        }
      }
    }
  }
  return 3221225523LL;
}
