/*
 * XREFs of EditionUninitializeWppLogging @ 0x1C00BD660
 * Callers:
 *     <none>
 * Callees:
 *     WppCleanupKm @ 0x1C0399EB0 (WppCleanupKm.c)
 */

__int64 __fastcall EditionUninitializeWppLogging(__int64 a1)
{
  if ( gFullLog )
  {
    imp_WppRecorderLogDelete(WPP_GLOBAL_Control);
    gFullLog = 0LL;
  }
  return WppCleanupKm(a1);
}
