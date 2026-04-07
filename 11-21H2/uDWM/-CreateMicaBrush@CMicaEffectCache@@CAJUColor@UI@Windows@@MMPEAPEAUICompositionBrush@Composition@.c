/*
 * XREFs of ?CreateMicaBrush@CMicaEffectCache@@CAJUColor@UI@Windows@@MMPEAPEAUICompositionBrush@Composition@34@@Z @ 0x180062C04
 * Callers:
 *     ?Initialize@CMicaEffectCache@@AEAAJXZ @ 0x180062CF0 (-Initialize@CMicaEffectCache@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 */

__int64 __fastcall CMicaEffectCache::CreateMicaBrush(unsigned int a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  CDesktopManager *v4; // rax
  __int64 v5; // r8
  int InternalWallpaperBrush; // eax
  unsigned int v7; // ebx
  float v9[4]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = CDesktopManager::s_pDesktopManagerInstance;
  *a4 = 0LL;
  v5 = *(_QWORD *)(*((_QWORD *)v4 + 5) + 40LL);
  v9[0] = (float)BYTE1(a1) / 255.0;
  v9[1] = (float)BYTE2(a1) / 255.0;
  v9[2] = (float)HIBYTE(a1) / 255.0;
  v9[3] = (float)(unsigned __int8)a1 / 255.0;
  InternalWallpaperBrush = CreateInternalWallpaperBrush(v5, v9);
  v7 = InternalWallpaperBrush;
  if ( InternalWallpaperBrush >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x15F,
    (int)"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
    (const char *)(unsigned int)InternalWallpaperBrush);
  return v7;
}
