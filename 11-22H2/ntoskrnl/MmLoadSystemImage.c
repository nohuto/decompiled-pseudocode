/*
 * XREFs of MmLoadSystemImage @ 0x140703540
 * Callers:
 *     IoLoadCrashDumpDriver @ 0x1405508B0 (IoLoadCrashDumpDriver.c)
 *     NtSetSystemInformation @ 0x14075F340 (NtSetSystemInformation.c)
 *     IopLoadDriver @ 0x140794AE8 (IopLoadDriver.c)
 *     PnprLoadPluginDriver @ 0x140966618 (PnprLoadPluginDriver.c)
 * Callees:
 *     MmLoadSystemImageEx @ 0x140703E70 (MmLoadSystemImageEx.c)
 */

__int64 __fastcall MmLoadSystemImage(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  if ( (a4 & 0x7FFFFFFC) != 0 )
    return 3221225714LL;
  else
    return MmLoadSystemImageEx(a1, a2, a3, 0, a4, a5, a6);
}
