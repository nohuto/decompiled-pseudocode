/*
 * XREFs of MmLoadSystemImage @ 0x1407036A0
 * Callers:
 *     IoLoadCrashDumpDriver @ 0x140550ED0 (IoLoadCrashDumpDriver.c)
 *     NtSetSystemInformation @ 0x14075F020 (NtSetSystemInformation.c)
 *     IopLoadDriver @ 0x1407947C8 (IopLoadDriver.c)
 *     PnprLoadPluginDriver @ 0x140966768 (PnprLoadPluginDriver.c)
 * Callees:
 *     MmLoadSystemImageEx @ 0x140703FD0 (MmLoadSystemImageEx.c)
 */

__int64 __fastcall MmLoadSystemImage(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  if ( (a4 & 0x7FFFFFFC) != 0 )
    return 3221225714LL;
  else
    return MmLoadSystemImageEx(a1, a2, a3, 0, a4, a5, a6);
}
