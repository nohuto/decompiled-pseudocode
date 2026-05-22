/*
 * XREFs of ?RegGetDwmDwordHelper@@YA_NPEBGPEAK@Z @ 0x18001D5CC
 * Callers:
 *     ?RuntimeClassInitialize@CompositorCommon@Composition@UI@Windows@@IEAAJPEAUIDispatcherQueue@System@4@PEAUIUnknown@@PEAVCompositorController@Core@234@W4CreationFlags@1234@W4DeviceVersion@DirectComposition@@@Z @ 0x18001D170 (-RuntimeClassInitialize@CompositorCommon@Composition@UI@Windows@@IEAAJPEAUIDispatcherQueue@Syste.c)
 * Callees:
 *     <none>
 */

bool __fastcall RegGetDwmDwordHelper(const unsigned __int16 *a1, unsigned int *a2)
{
  return (unsigned int)GetPersistedRegistryValueW(
                         L"DWMSwitches",
                         L"Software\\Microsoft\\Windows\\Dwm",
                         a1,
                         16LL,
                         0LL,
                         a2,
                         4,
                         0LL) == 0;
}
