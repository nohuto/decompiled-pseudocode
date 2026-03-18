/*
 * XREFs of KiRestoreXSaveSupport @ 0x140A9F654
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x14056BF44 (KeRestoreProcessorSpecificFeatures.c)
 * Callees:
 *     KiEnableXSave @ 0x140A8C5B0 (KiEnableXSave.c)
 */

void __fastcall KiRestoreXSaveSupport(unsigned __int64 *a1)
{
  KiEnableXSave(a1);
}
