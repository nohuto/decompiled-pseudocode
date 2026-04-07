/*
 * XREFs of ?Initialize@CMicaEffectCache@@AEAAJXZ @ 0x180062CF0
 * Callers:
 *     ?Create@CMicaEffectCache@@SAJPEAPEAV1@@Z @ 0x180062A14 (-Create@CMicaEffectCache@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180062B70 (--4-$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?CreateMicaBrush@CMicaEffectCache@@CAJUColor@UI@Windows@@MMPEAPEAUICompositionBrush@Composition@34@@Z @ 0x180062C04 (-CreateMicaBrush@CMicaEffectCache@@CAJUColor@UI@Windows@@MMPEAPEAUICompositionBrush@Composition@.c)
 */

__int64 __fastcall CMicaEffectCache::Initialize(CMicaEffectCache *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rbx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 v13; // [rsp+48h] [rbp+28h] BYREF
  __int64 v14; // [rsp+50h] [rbp+30h] BYREF
  __int64 v15; // [rsp+58h] [rbp+38h] BYREF

  v15 = 0LL;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
  v4 = CMicaEffectCache::CreateMicaBrush(CSystemBackdropVisual::sc_darkThemeBase, v2, v3, &v15);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 306LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_10;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  v4 = CMicaEffectCache::CreateMicaBrush(CSystemBackdropVisual::sc_lightThemeBase, v7, v8, &v14);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 315LL;
    goto LABEL_5;
  }
  v9 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 40LL);
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  v10 = CreateCrossfadeEffectFactory(v9, &v13);
  v5 = v10;
  if ( v10 >= 0 )
  {
    Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionBrush>::operator=((__int64 *)this, &v15);
    Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionBrush>::operator=((__int64 *)this + 1, &v14);
    Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionBrush>::operator=((__int64 *)this + 2, &v13);
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x142,
      (int)"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
      (const char *)(unsigned int)v10);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
LABEL_10:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
  return v5;
}
