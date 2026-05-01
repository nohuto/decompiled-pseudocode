/*
 * XREFs of ?SetSoundRedirectionPath@Theming@@YAXPEBG@Z @ 0x180170E14
 * Callers:
 *     ?InitUserConfig@Theming@@YAXXZ @ 0x1800FBDD8 (-InitUserConfig@Theming@@YAXXZ.c)
 * Callees:
 *     ?SetRegValueAndLog@dynamic_config@@YAXPEAUHKEY__@@PEBGK1PEBE_K_N@Z @ 0x180158B6C (-SetRegValueAndLog@dynamic_config@@YAXPEAUHKEY__@@PEBGK1PEBE_K_N@Z.c)
 */

void __fastcall Theming::SetSoundRedirectionPath(Theming *this, const unsigned __int16 *a2)
{
  unsigned int v2; // ebx
  bool v4; // bp
  __int64 v5; // rsi
  __int64 v6; // rax
  unsigned int v7; // eax
  unsigned __int64 v8; // [rsp+30h] [rbp-18h]
  unsigned __int64 v9; // [rsp+30h] [rbp-18h]

  v2 = 0;
  v4 = this == 0LL;
  v5 = -1LL;
  if ( this )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *((_WORD *)this + v6) );
    v7 = 2 * v6 + 2;
  }
  else
  {
    v7 = 0;
  }
  LOBYTE(v8) = this == 0LL;
  dynamic_config::SetRegValueAndLog(
    (dynamic_config *)0xFFFFFFFF80000001LL,
    (const WCHAR *)&stru_18068D608,
    (const unsigned __int16 *)1,
    (const WCHAR *)L"packagebase",
    (BYTE *)this,
    (const unsigned __int8 *)v7,
    v8);
  if ( this )
  {
    do
      ++v5;
    while ( *((_WORD *)this + v5) );
    v2 = 2 * v5 + 2;
  }
  LOBYTE(v9) = v4;
  dynamic_config::SetRegValueAndLog(
    (dynamic_config *)0xFFFFFFFF80000002LL,
    (const WCHAR *)&stru_18068D570,
    (const unsigned __int16 *)1,
    (const WCHAR *)L"packagebase",
    (BYTE *)this,
    (const unsigned __int8 *)v2,
    v9);
}
