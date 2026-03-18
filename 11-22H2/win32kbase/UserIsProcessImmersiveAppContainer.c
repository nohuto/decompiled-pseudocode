/*
 * XREFs of UserIsProcessImmersiveAppContainer @ 0x1C003FAA0
 * Callers:
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C00350B8 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C003FAF4 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserIsProcessImmersiveAppContainer(__int64 a1)
{
  __int64 ProcessWin32Process; // rax
  unsigned int v2; // ecx
  int v4; // edx

  ProcessWin32Process = PsGetProcessWin32Process(a1);
  v2 = 0;
  if ( !ProcessWin32Process || !*(_QWORD *)ProcessWin32Process )
    return 0LL;
  if ( *(_DWORD *)(ProcessWin32Process + 892) )
  {
    v4 = *(_DWORD *)(ProcessWin32Process + 816);
    if ( (v4 & 0x30) == 0x10 )
      return (v4 & 0x200) == 0;
  }
  return v2;
}
