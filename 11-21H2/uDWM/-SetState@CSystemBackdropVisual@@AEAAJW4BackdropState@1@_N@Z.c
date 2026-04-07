/*
 * XREFs of ?SetState@CSystemBackdropVisual@@AEAAJW4BackdropState@1@_N@Z @ 0x1800E1A40
 * Callers:
 *     ?InitializeVisualTreeClone@CSystemBackdropVisual@@AEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800E16E4 (-InitializeVisualTreeClone@CSystemBackdropVisual@@AEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?UpdateBrush@CSystemBackdropVisual@@QEAAJ_N000@Z @ 0x1800E1C64 (-UpdateBrush@CSystemBackdropVisual@@QEAAJ_N000@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUICompositionBrush@Composition@UI@Windows@@@Z @ 0x180062BB4 (--4-$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIComposit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UICompositionProjectedShadowCasterCollection@Composition@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180097070 (--1-$ComPtr@UICompositionProjectedShadowCasterCollection@Composition@UI@Windows@@@WRL@Microsoft@.c)
 *     ??B?$ComPtrRef@V?$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAUICompositionBrush@Composition@UI@Windows@@XZ @ 0x180097128 (--B-$ComPtrRef@V-$ComPtr@UICompositionBrush@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL.c)
 *     ?CreateColorBrush@CSystemBackdropVisual@@AEAAJUColor@UI@Windows@@PEAPEAUICompositionBrush@Composition@34@@Z @ 0x1800E10F4 (-CreateColorBrush@CSystemBackdropVisual@@AEAAJUColor@UI@Windows@@PEAPEAUICompositionBrush@Compos.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSystemBackdropVisual::SetState(__int64 a1, int a2, char a3)
{
  int v5; // edx
  int v6; // edx
  DWORD SysColor; // eax
  __int64 *v8; // rax
  __int64 v9; // rcx
  int ColorBrush; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 *v17; // rcx
  __int64 v18; // rdx
  __int64 *v20[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  __int64 v22; // [rsp+58h] [rbp+28h] BYREF

  v22 = 0LL;
  v5 = a2 - 1;
  if ( !v5 )
  {
    v17 = (__int64 *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26);
    if ( a3 )
      v18 = *v17;
    else
      v18 = v17[1];
    Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionBrush>::operator=(&v22, v18);
    *(_BYTE *)(a1 + 284) = 0;
    *(_DWORD *)(a1 + 280) = 1;
LABEL_17:
    *(_BYTE *)(a1 + 304) = a3;
    goto LABEL_18;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    if ( a3 )
    {
      *(_DWORD *)(a1 + 284) = CSystemBackdropVisual::sc_darkThemeBase;
      v20[0] = &v22;
      v13 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionBrush>>::operator Windows::UI::Composition::ICompositionBrush * *(v20);
      ColorBrush = CSystemBackdropVisual::CreateColorBrush(v14, *(_DWORD *)(a1 + 284), v13);
      v11 = ColorBrush;
      if ( ColorBrush < 0 )
      {
        v12 = 217LL;
        goto LABEL_22;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 284) = CSystemBackdropVisual::sc_lightThemeBase;
      v20[0] = &v22;
      v15 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionBrush>>::operator Windows::UI::Composition::ICompositionBrush * *(v20);
      ColorBrush = CSystemBackdropVisual::CreateColorBrush(v16, *(_DWORD *)(a1 + 284), v15);
      v11 = ColorBrush;
      if ( ColorBrush < 0 )
      {
        v12 = 222LL;
        goto LABEL_22;
      }
    }
    *(_DWORD *)(a1 + 280) = 2;
    goto LABEL_17;
  }
  if ( v6 == 1 )
  {
    SysColor = GetSysColor(5);
    *(_BYTE *)(a1 + 284) = -1;
    *(_WORD *)(a1 + 285) = SysColor;
    *(_BYTE *)(a1 + 287) = BYTE2(SysColor);
    v20[0] = &v22;
    v8 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionBrush>>::operator Windows::UI::Composition::ICompositionBrush * *(v20);
    ColorBrush = CSystemBackdropVisual::CreateColorBrush(v9, *(_DWORD *)(a1 + 284), v8);
    v11 = ColorBrush;
    if ( ColorBrush < 0 )
    {
      v12 = 238LL;
      goto LABEL_22;
    }
    *(_DWORD *)(a1 + 280) = 3;
  }
LABEL_18:
  ColorBrush = CrossFadeToNewBrush(
                 *(_QWORD *)(a1 + 264),
                 v22,
                 *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26) + 16LL),
                 250LL);
  v11 = ColorBrush;
  if ( ColorBrush >= 0 )
  {
    ColorBrush = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                   + 5)
                                                                 + 32LL)
                                                   + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                        + 5)
                                                                      + 32LL));
    v11 = ColorBrush;
    if ( ColorBrush >= 0 )
    {
      v11 = 0;
      goto LABEL_24;
    }
    v12 = 249LL;
  }
  else
  {
    v12 = 244LL;
  }
LABEL_22:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
    (const char *)(unsigned int)ColorBrush);
LABEL_24:
  Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>::~ComPtr<Windows::UI::Composition::ICompositionProjectedShadowCasterCollection>(&v22);
  return v11;
}
