/*
 * XREFs of ?ShellButtonListEntryDeletionCallback@GameControllerRawInputProvider@@CAJPEAX@Z @ 0x1800DCBF0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GShellButtonListEntry@GameControllerRawInputProvider@@QEAAPEAXI@Z @ 0x1800DBCF8 (--_GShellButtonListEntry@GameControllerRawInputProvider@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall GameControllerRawInputProvider::ShellButtonListEntryDeletionCallback(
        GameControllerRawInputProvider::ShellButtonListEntry *a1)
{
  if ( a1 )
    GameControllerRawInputProvider::ShellButtonListEntry::`scalar deleting destructor'(a1);
  return 0LL;
}
