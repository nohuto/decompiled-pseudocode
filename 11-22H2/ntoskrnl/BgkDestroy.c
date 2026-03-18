/*
 * XREFs of BgkDestroy @ 0x140AEFA28
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1403AD4F0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140B9E198 (BgkInitialize.c)
 * Callees:
 *     BgkpDisableConsole @ 0x14054F04C (BgkpDisableConsole.c)
 *     BgDisplayBackgroundUpdate @ 0x140AED040 (BgDisplayBackgroundUpdate.c)
 *     BgConsoleDestroyInterface @ 0x140AF0254 (BgConsoleDestroyInterface.c)
 *     BgDisplayProgressIndicator @ 0x140AF06AC (BgDisplayProgressIndicator.c)
 *     BgLibraryDestroy @ 0x140AF22D8 (BgLibraryDestroy.c)
 */

__int64 BgkDestroy()
{
  if ( !byte_140C6AC88 )
    return 0LL;
  BgkpDisableConsole();
  byte_140C6AC8A = 0;
  byte_140C6AC88 = 0;
  BgDisplayProgressIndicator(0LL);
  byte_140C6AC89 = 0;
  BgDisplayBackgroundUpdate(0);
  byte_140C6AC70 = 0;
  byte_140C6AC80 = 0;
  if ( qword_140C6AC68 )
  {
    BgConsoleDestroyInterface();
    qword_140C6AC68 = 0LL;
  }
  return BgLibraryDestroy();
}
