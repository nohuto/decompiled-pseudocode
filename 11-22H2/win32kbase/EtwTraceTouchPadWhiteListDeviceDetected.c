/*
 * XREFs of EtwTraceTouchPadWhiteListDeviceDetected @ 0x1C013B5C0
 * Callers:
 *     RIMApiSetCheckForLegacyTouchPad @ 0x1C006D074 (RIMApiSetCheckForLegacyTouchPad.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00DF278 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceTouchPadWhiteListDeviceDetected(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &TouchPadWhiteListDeviceDetected, &W32kControlGuid);
  return result;
}
