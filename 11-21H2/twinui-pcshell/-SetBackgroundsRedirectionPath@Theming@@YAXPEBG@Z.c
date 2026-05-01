/*
 * XREFs of ?SetBackgroundsRedirectionPath@Theming@@YAXPEBG@Z @ 0x180170EEC
 * Callers:
 *     ?InitUserConfig@Theming@@YAXXZ @ 0x1800FBDD8 (-InitUserConfig@Theming@@YAXXZ.c)
 * Callees:
 *     ?SetRegValueAndLog@dynamic_config@@YAXPEAUHKEY__@@PEBGK1PEBE_K_N@Z @ 0x180158B6C (-SetRegValueAndLog@dynamic_config@@YAXPEAUHKEY__@@PEBGK1PEBE_K_N@Z.c)
 */

void __fastcall Theming::SetBackgroundsRedirectionPath(Theming *this, const unsigned __int16 *a2)
{
  unsigned int v2; // eax
  __int64 v3; // rdx
  unsigned __int64 v4; // [rsp+30h] [rbp-18h]

  v2 = 0;
  if ( this )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( *((_WORD *)this + v3) );
    v2 = 2 * v3 + 2;
  }
  LOBYTE(v4) = this == 0LL;
  dynamic_config::SetRegValueAndLog(
    (dynamic_config *)0xFFFFFFFF80000002LL,
    (const WCHAR *)&stru_18068D570,
    (const unsigned __int16 *)1,
    (const WCHAR *)L"packagebase2",
    (BYTE *)this,
    (const unsigned __int8 *)v2,
    v4);
}
