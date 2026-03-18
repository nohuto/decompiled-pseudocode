/*
 * XREFs of NtUserLW_LoadFonts @ 0x1C00EE700
 * Callers:
 *     <none>
 * Callees:
 *     xxxLW_LoadFonts @ 0x1C00EE740 (xxxLW_LoadFonts.c)
 */

__int64 __fastcall NtUserLW_LoadFonts(unsigned int a1)
{
  __int64 Fonts; // rbx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  Fonts = (int)xxxLW_LoadFonts(a1);
  UserSessionSwitchLeaveCrit(v3);
  return Fonts;
}
