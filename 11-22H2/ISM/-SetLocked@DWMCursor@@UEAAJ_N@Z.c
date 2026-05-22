/*
 * XREFs of ?SetLocked@DWMCursor@@UEAAJ_N@Z @ 0x180031D30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMCursor::SetLocked(DWMCursor *this, char a2)
{
  *((_BYTE *)this + 48) = a2;
  return 0LL;
}
