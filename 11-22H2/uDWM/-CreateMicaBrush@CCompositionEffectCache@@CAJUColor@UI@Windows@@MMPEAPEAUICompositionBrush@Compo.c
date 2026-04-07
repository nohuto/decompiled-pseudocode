/*
 * XREFs of ?CreateMicaBrush@CCompositionEffectCache@@CAJUColor@UI@Windows@@MMPEAPEAUICompositionBrush@Composition@34@@Z @ 0x18004B444
 * Callers:
 *     ?Initialize@CCompositionEffectCache@@AEAAJXZ @ 0x18004B174 (-Initialize@CCompositionEffectCache@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CCompositionEffectCache::CreateMicaBrush(unsigned int a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  CDesktopManager *v4; // rax
  __int64 v5; // r8
  int MicaBrush; // eax
  unsigned int v7; // ebx
  int v9; // [rsp+20h] [rbp-38h]
  float v10[4]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = CDesktopManager::s_pDesktopManagerInstance;
  *a4 = 0LL;
  v9 = (int)a4;
  v5 = *(_QWORD *)(*((_QWORD *)v4 + 6) + 40LL);
  v10[0] = (float)BYTE1(a1) / 255.0;
  v10[1] = (float)BYTE2(a1) / 255.0;
  v10[2] = (float)HIBYTE(a1) / 255.0;
  v10[3] = (float)(unsigned __int8)a1 / 255.0;
  MicaBrush = CreateMicaBrush(v5, v10);
  v7 = MicaBrush;
  if ( MicaBrush >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7E,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\compositioneffectcache.cpp",
    (const char *)(unsigned int)MicaBrush,
    v9);
  return v7;
}
