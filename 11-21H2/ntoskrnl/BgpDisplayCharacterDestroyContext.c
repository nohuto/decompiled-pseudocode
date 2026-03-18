/*
 * XREFs of BgpDisplayCharacterDestroyContext @ 0x140AAE9C8
 * Callers:
 *     BgConsoleDestroyInterface @ 0x140AAE968 (BgConsoleDestroyInterface.c)
 *     BgpBcInitializeCriticalMode @ 0x140B55C50 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x1403A8CB4 (BgpFwFreeMemory.c)
 *     BgpTxtDestroyRegion @ 0x140AAEAF4 (BgpTxtDestroyRegion.c)
 */

void __fastcall BgpDisplayCharacterDestroyContext(__int64 a1)
{
  if ( a1 )
  {
    BgpTxtDestroyRegion(*(_QWORD *)(a1 + 24));
    BgpFwFreeMemory(a1);
  }
}
