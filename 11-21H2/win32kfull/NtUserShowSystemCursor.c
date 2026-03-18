/*
 * XREFs of NtUserShowSystemCursor @ 0x1C01FFAD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     EditionShowSystemCursor @ 0x1C007A400 (EditionShowSystemCursor.c)
 *     CheckWinstaAttributeAccess @ 0x1C009EAE0 (CheckWinstaAttributeAccess.c)
 */

__int64 __fastcall NtUserShowSystemCursor(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v6; // rcx

  v3 = a1;
  EnterSharedCrit(a1, a2, a3);
  v5 = 0;
  if ( (unsigned int)CheckWinstaAttributeAccess(16LL) )
    v5 = EditionShowSystemCursor((CursorApiRouter *)v3);
  else
    UserSetLastError(5LL, v4);
  UserSessionSwitchLeaveCrit(v6);
  return v5;
}
