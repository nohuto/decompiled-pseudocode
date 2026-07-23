/*
 * XREFs of BgkDestroy @ 0x140AEEA68
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1403ADD60 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140B9D198 (BgkInitialize.c)
 * Callees:
 *     BgkpDisableConsole @ 0x14054F66C (BgkpDisableConsole.c)
 *     BgDisplayProgressIndicator @ 0x140AEC040 (BgDisplayProgressIndicator.c)
 *     BgDisplayBackgroundUpdate @ 0x140AEC07C (BgDisplayBackgroundUpdate.c)
 *     BgConsoleDestroyInterface @ 0x140AEF504 (BgConsoleDestroyInterface.c)
 *     BgLibraryDestroy @ 0x140AF12E8 (BgLibraryDestroy.c)
 */

__int64 BgkDestroy()
{
  if ( !byte_140C6AB80 )
    return 0LL;
  BgkpDisableConsole();
  byte_140C6AB82 = 0;
  byte_140C6AB80 = 0;
  BgDisplayProgressIndicator(0);
  byte_140C6AB81 = 0;
  BgDisplayBackgroundUpdate(0);
  byte_140C6AB79 = 0;
  byte_140C6AB78 = 0;
  if ( qword_140C6AB68 )
  {
    BgConsoleDestroyInterface();
    qword_140C6AB68 = 0LL;
  }
  return BgLibraryDestroy();
}
