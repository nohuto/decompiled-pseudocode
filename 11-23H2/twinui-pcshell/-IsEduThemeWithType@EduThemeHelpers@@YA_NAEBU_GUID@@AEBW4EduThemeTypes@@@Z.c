/*
 * XREFs of ?IsEduThemeWithType@EduThemeHelpers@@YA_NAEBU_GUID@@AEBW4EduThemeTypes@@@Z @ 0x1806E2E08
 * Callers:
 *     ?SetHaileyTheme@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJXZ @ 0x1806E3674 (-SetHaileyTheme@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

char __fastcall EduThemeHelpers::IsEduThemeWithType(
        const GUID *this,
        const struct _GUID *a2,
        const enum EduThemeTypes *a3)
{
  _QWORD *v4; // rax
  OLECHAR *v5; // rcx
  int v6; // r9d
  int v7; // edx
  OLECHAR sz[40]; // [rsp+20h] [rbp-68h] BYREF

  StringFromGUID2(this, sz, 39);
  v4 = &unk_1807F49A0;
  while ( 1 )
  {
    if ( (a2->Data1 & *(_DWORD *)v4) != 0 )
    {
      v5 = sz;
      do
      {
        v6 = *(OLECHAR *)((char *)v5 + v4[1] - (_QWORD)sz);
        v7 = *v5 - v6;
        if ( v7 )
          break;
        ++v5;
      }
      while ( v6 );
      if ( !v7 )
        break;
    }
    v4 += 3;
    if ( v4 == (_QWORD *)&unk_1807F4A30 )
      return 0;
  }
  return 1;
}
