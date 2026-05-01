/*
 * XREFs of s_OnMeasureItem @ 0x1805F6C18
 * Callers:
 *     ?s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_HOW_SELECTED_FLAGS@@@Z @ 0x18023A696 (-s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_.c)
 * Callees:
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18003D54C (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800E7D10 (-ResultFromKnownLastError@@YAJXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ?GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND__@@_KI@Z @ 0x18023A78C (-GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND_.c)
 *     ??0ClientDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHWND__@@@Z @ 0x1805F5354 (--0ClientDC@Wrappers@WRL@Microsoft@@QEAA@PEAUHWND__@@@Z.c)
 *     ??1ClientDC@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1805F53EC (--1ClientDC@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetThemeTextExtentPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHKPEAU_DTTOPTS@@PEAUtagRECT@@7@Z @ 0x1805F83F0 (-GetThemeTextExtentPPI@DPIToPPIHelpers@@YAJPEAUHWND__@@W4ScaleType@1@PEAIPEAXPEAUHDC__@@HHPEBGHK.c)
 *     ?ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z @ 0x1805F8654 (-ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall s_OnMeasureItem(HWND hwnd, __int64 a2, char a3)
{
  signed int Error; // edi
  struct ContextMenuRenderingData *ContextMenuDataForItem; // rax
  struct ContextMenuRenderingData *v7; // r14
  const WCHAR *v8; // rdx
  HTHEME v9; // rsi
  unsigned int v10; // r13d
  __int64 v11; // rdx
  HWND WindowW; // rax
  HWND v13; // rbx
  LONG WindowLongW; // eax
  HFONT v15; // rax
  HFONT v16; // rbx
  HDC v17; // rsi
  HGDIOBJ v18; // rdi
  __int64 v19; // rdx
  double v20; // xmm0_8
  int v21; // eax
  __int64 v22; // rdx
  int ThemeTextExtentPPI; // [rsp+74h] [rbp-8Ch]
  HTHEME v26; // [rsp+78h] [rbp-88h]
  _BYTE v27[8]; // [rsp+90h] [rbp-70h] BYREF
  HDC hdc; // [rsp+98h] [rbp-68h]
  LOGFONTW lf; // [rsp+B0h] [rbp-50h] BYREF
  int pvParam; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v31[220]; // [rsp+114h] [rbp+14h] BYREF
  LOGFONTW v32; // [rsp+1F0h] [rbp+F0h]

  Error = -2147418113;
  ContextMenuDataForItem = ImmersiveContextMenuHelper::GetContextMenuDataForItem(
                             hwnd,
                             *(HWND *)(a2 + 24),
                             *(_DWORD *)(a2 + 8));
  v7 = ContextMenuDataForItem;
  if ( ContextMenuDataForItem )
  {
    if ( *((_BYTE *)ContextMenuDataForItem + 68) )
    {
      v8 = L"DarkMode_ImmersiveStart::Menu";
    }
    else
    {
      v8 = L"LightMode_ImmersiveStart::Menu";
      if ( !*((_BYTE *)ContextMenuDataForItem + 69) )
        v8 = L"ImmersiveStart::Menu";
    }
    v9 = OpenThemeData(0LL, v8);
    v26 = v9;
    if ( v9 )
    {
      v10 = 2;
      if ( !MonitorFromWindow(hwnd, 2u) )
      {
LABEL_49:
        CloseThemeData(v9);
        return (unsigned int)Error;
      }
      if ( *((_DWORD *)v7 + 6) == 2048 )
      {
        if ( *((_BYTE *)v7 + 69) || (v11 = 7LL, (*((_BYTE *)v7 + 56) & 4) != 0) )
          v11 = 9LL;
        *(_DWORD *)(a2 + 16) = DPIToPPIHelpers::ScaleByType(
                                 *((unsigned int *)v7 + 15),
                                 v11,
                                 hwnd,
                                 *((unsigned int *)v7 + 16));
        goto LABEL_49;
      }
      WindowW = FindWindowW(L"#32768", 0LL);
      v13 = WindowW;
      if ( !WindowW )
      {
LABEL_39:
        v21 = *((_DWORD *)v7 + 14);
        if ( (v21 & 1) != 0 )
        {
          if ( *((_BYTE *)v7 + 69) || (v22 = 2LL, (v21 & 4) != 0) )
            v22 = 6LL;
          *(_DWORD *)(a2 + 16) += DPIToPPIHelpers::ScaleByType(
                                    *((unsigned int *)v7 + 15),
                                    v22,
                                    hwnd,
                                    *((unsigned int *)v7 + 16));
          v21 = *((_DWORD *)v7 + 14);
        }
        if ( (v21 & 2) != 0 )
        {
          if ( *((_BYTE *)v7 + 69) || (v21 & 4) != 0 )
            v10 = 6;
          *(_DWORD *)(a2 + 16) += DPIToPPIHelpers::ScaleByType(
                                    *((unsigned int *)v7 + 15),
                                    v10,
                                    hwnd,
                                    *((unsigned int *)v7 + 16));
        }
        goto LABEL_49;
      }
      WindowLongW = GetWindowLongW(WindowW, -20);
      if ( a3 && (WindowLongW & 0x400000) == 0 )
        SetWindowLongW(v13, -20, WindowLongW | 0x400000);
      Microsoft::WRL::Wrappers::ClientDC::ClientDC((Microsoft::WRL::Wrappers::ClientDC *)v27, v13);
      if ( !hdc
        || (memset_0(v31, 0, 0x1F4uLL), pvParam = 504, !SystemParametersInfoW(0x29u, 0x1F8u, &pvParam, 0))
        && (Error = ResultFromKnownLastError(), Error < 0) )
      {
LABEL_38:
        Microsoft::WRL::Wrappers::ClientDC::~ClientDC((Microsoft::WRL::Wrappers::ClientDC *)v27);
        goto LABEL_39;
      }
      if ( GetThemeFont(v9, 0LL, 14, 0, 210, &lf) < 0 )
      {
        lf = v32;
      }
      else
      {
        if ( v32.lfHeight <= 0 )
        {
          if ( v32.lfHeight >= lf.lfHeight )
            goto LABEL_27;
        }
        else if ( v32.lfHeight <= lf.lfHeight )
        {
          goto LABEL_27;
        }
        lf.lfHeight = v32.lfHeight;
      }
LABEL_27:
      v15 = CreateFontIndirectW(&lf);
      v16 = v15;
      if ( v15 )
      {
        v17 = hdc;
        v18 = SelectObject(hdc, v15);
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(v7);
        ThemeTextExtentPPI = DPIToPPIHelpers::GetThemeTextExtentPPI(
                               hwnd,
                               *((unsigned int *)v7 + 15),
                               (char *)v7 + 64,
                               v26,
                               hdc);
        SelectObject(v17, v18);
        DeleteObject(v16);
        Error = ThemeTextExtentPPI;
        if ( ThemeTextExtentPPI >= 0 )
        {
          *(_DWORD *)(a2 + 12) = DPIToPPIHelpers::ScaleByType(
                                   *((unsigned int *)v7 + 15),
                                   93LL,
                                   hwnd,
                                   *((unsigned int *)v7 + 16));
          if ( (*((_BYTE *)v7 + 56) & 4) != 0 )
          {
            v19 = 36LL;
          }
          else
          {
            if ( *((_BYTE *)v7 + 69) )
              v20 = DOUBLE_24_0;
            else
              v20 = DOUBLE_14_0;
            v19 = (unsigned int)(int)v20;
          }
          *(_DWORD *)(a2 + 16) = DPIToPPIHelpers::ScaleByType(
                                   *((unsigned int *)v7 + 15),
                                   v19,
                                   hwnd,
                                   *((unsigned int *)v7 + 16));
        }
        v9 = v26;
      }
      else
      {
        Error = -2147467259;
      }
      goto LABEL_38;
    }
  }
  return (unsigned int)Error;
}
