/*
 * XREFs of MmLoadSystemImage @ 0x14075FC00
 * Callers:
 *     IoLoadCrashDumpDriver @ 0x1405529D0 (IoLoadCrashDumpDriver.c)
 *     IopLoadDriver @ 0x14074A178 (IopLoadDriver.c)
 *     NtSetSystemInformation @ 0x1407D6120 (NtSetSystemInformation.c)
 *     PnprLoadPluginDriver @ 0x1409528A8 (PnprLoadPluginDriver.c)
 * Callees:
 *     MmLoadSystemImageEx @ 0x14075FC44 (MmLoadSystemImageEx.c)
 */

__int64 __fastcall MmLoadSystemImage(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  if ( (a4 & 0x7FFFFFFC) != 0 )
    return 3221225714LL;
  else
    return MmLoadSystemImageEx(a1, a2, a3, 0, a4, a5, a6);
}
