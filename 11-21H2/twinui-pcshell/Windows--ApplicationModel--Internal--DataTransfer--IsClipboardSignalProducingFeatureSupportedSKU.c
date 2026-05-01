/*
 * XREFs of Windows::ApplicationModel::Internal::DataTransfer::IsClipboardSignalProducingFeatureSupportedSKU @ 0x1800A867C
 * Callers:
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800A78B4 (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool Windows::ApplicationModel::Internal::DataTransfer::IsClipboardSignalProducingFeatureSupportedSKU()
{
  DWORD v1; // [rsp+50h] [rbp+8h] BYREF

  if ( !byte_1807B3980 )
  {
    v1 = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Clipboard",
      L"IsClipboardSignalProducingFeatureAvailable",
      0x10u,
      0LL,
      &dword_1807B4318,
      &v1);
    byte_1807B3980 = 1;
  }
  return dword_1807B4318 != 0;
}
