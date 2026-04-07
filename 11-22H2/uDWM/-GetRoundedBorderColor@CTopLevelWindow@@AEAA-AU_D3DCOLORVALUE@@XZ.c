/*
 * XREFs of ?GetRoundedBorderColor@CTopLevelWindow@@AEAA?AU_D3DCOLORVALUE@@XZ @ 0x18001AB50
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180026220 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x18001B540 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?TreatAsActiveWindow@CTopLevelWindow@@AEBA_NXZ @ 0x180051BBC (-TreatAsActiveWindow@CTopLevelWindow@@AEBA_NXZ.c)
 *     ?LoadAccentColorSettings@CDesktopManager@@QEAA_NXZ @ 0x1800571C4 (-LoadAccentColorSettings@CDesktopManager@@QEAA_NXZ.c)
 *     ?HasNonClientArea@CTopLevelWindow@@QEBA_NXZ @ 0x1800E61F0 (-HasNonClientArea@CTopLevelWindow@@QEBA_NXZ.c)
 */

struct _D3DCOLORVALUE *__fastcall CTopLevelWindow::GetRoundedBorderColor(
        CTopLevelWindow *this,
        struct _D3DCOLORVALUE *__return_ptr retstr)
{
  __int64 v4; // rdx
  bool v5; // bp
  int v6; // ecx
  CDesktopManager *v7; // rbx
  char v8; // al
  __int128 v9; // xmm0
  float v11; // xmm1_4
  __m128i v12; // xmm0
  int v13; // eax
  bool active; // al
  DWORD SysColor; // eax
  float v16; // xmm0_4
  unsigned int v17; // ecx
  int v18; // edx
  float v19[6]; // [rsp+20h] [rbp-18h]

  v4 = *((_QWORD *)this + 94);
  v5 = 1;
  v6 = *(_DWORD *)(v4 + 188);
  if ( v6 == 1 || (*((_BYTE *)this + 624) & 0x20) != 0 )
  {
    v9 = 0LL;
    goto LABEL_14;
  }
  if ( v6 )
  {
    v11 = FLOAT_255_0;
    v19[0] = (float)(unsigned __int8)v6 / 255.0;
    v12 = _mm_cvtsi32_si128(*(unsigned __int8 *)(v4 + 189));
    v13 = BYTE2(v6);
LABEL_23:
    v19[1] = _mm_cvtepi32_ps(v12).m128_f32[0] / v11;
    v19[2] = (float)v13 / v11;
    v19[3] = FLOAT_1_0;
    *(struct _D3DCOLORVALUE *)&retstr->r = *(struct _D3DCOLORVALUE *)v19;
    return retstr;
  }
  if ( CDesktopManager::IsHighContrastMode() )
  {
    active = CTopLevelWindow::TreatAsActiveWindow(this);
    SysColor = GetSysColor(active ? 9 : 19);
    v11 = FLOAT_255_0;
    v16 = (float)(unsigned __int8)SysColor;
    v17 = BYTE1(SysColor);
    v13 = BYTE2(SysColor);
    v19[0] = v16 / 255.0;
    v12 = _mm_cvtsi32_si128(v17);
    goto LABEL_23;
  }
  v7 = CDesktopManager::s_pDesktopManagerInstance;
  if ( (*((_BYTE *)this + 624) & 0x40) == 0 )
    v5 = (*(_BYTE *)(*((_QWORD *)this + 94) + 675LL) & 0x10) != 0;
  if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 632) )
    CDesktopManager::LoadAccentColorSettings(CDesktopManager::s_pDesktopManagerInstance);
  if ( v5 )
    v8 = *((_BYTE *)v7 + 633);
  else
    v8 = *((_BYTE *)v7 + 634);
  if ( v8 && CTopLevelWindow::HasNonClientArea(this) )
  {
    v11 = FLOAT_255_0;
    v19[0] = (float)(unsigned __int8)v18 / 255.0;
    v12 = _mm_cvtsi32_si128(BYTE1(v18));
    v13 = BYTE2(v18);
    goto LABEL_23;
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 94) + 128LL) & 0x1000) != 0 )
    v9 = *(__int128 *)&CTopLevelWindow::SNAPPED_BORDER_COLOR.r;
  else
    v9 = *(__int128 *)&CTopLevelWindow::OVERLAPPED_BORDER_COLOR.r;
LABEL_14:
  *(_OWORD *)&retstr->r = v9;
  return retstr;
}
