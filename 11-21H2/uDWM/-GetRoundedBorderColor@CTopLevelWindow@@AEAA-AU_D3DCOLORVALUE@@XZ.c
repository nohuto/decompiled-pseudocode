/*
 * XREFs of ?GetRoundedBorderColor@CTopLevelWindow@@AEAA?AU_D3DCOLORVALUE@@XZ @ 0x18003551C
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180033080 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x180031960 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?EnsureAccentColorSettingsLoaded@CDesktopManager@@QEAAXXZ @ 0x180035610 (-EnsureAccentColorSettingsLoaded@CDesktopManager@@QEAAXXZ.c)
 *     ?TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ @ 0x180035720 (-TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?HasNonClientArea@CTopLevelWindow@@QEBA_NXZ @ 0x1800E5268 (-HasNonClientArea@CTopLevelWindow@@QEBA_NXZ.c)
 */

struct _D3DCOLORVALUE *__fastcall CTopLevelWindow::GetRoundedBorderColor(
        CTopLevelWindow *this,
        struct _D3DCOLORVALUE *__return_ptr retstr,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  bool v7; // bp
  __int64 v8; // rcx
  CDesktopManager *v9; // rdi
  char v10; // al
  __int128 v11; // xmm0
  float v13; // xmm1_4
  __m128i v14; // xmm0
  int v15; // eax
  bool active; // al
  DWORD SysColor; // eax
  float v18; // xmm0_4
  unsigned int v19; // ecx
  int v20; // edx
  float v21[6]; // [rsp+20h] [rbp-18h]

  v6 = *((_QWORD *)this + 94);
  v7 = 1;
  v8 = *(unsigned int *)(v6 + 188);
  if ( (_DWORD)v8 == 1 )
  {
    v11 = 0LL;
    goto LABEL_11;
  }
  if ( (_DWORD)v8 )
  {
    v13 = FLOAT_255_0;
    v21[0] = (float)(unsigned __int8)v8 / 255.0;
    v14 = _mm_cvtsi32_si128(*(unsigned __int8 *)(v6 + 189));
    v15 = BYTE2(v8);
LABEL_20:
    v21[1] = _mm_cvtepi32_ps(v14).m128_f32[0] / v13;
    v21[2] = (float)v15 / v13;
    v21[3] = FLOAT_1_0;
    *(struct _D3DCOLORVALUE *)&retstr->r = *(struct _D3DCOLORVALUE *)v21;
    return retstr;
  }
  if ( CDesktopManager::IsHighContrastMode(v8, v6, a3, a4) )
  {
    active = CTopLevelWindow::TreatAsActiveWindow(this);
    SysColor = GetSysColor(active ? 9 : 19);
    v13 = FLOAT_255_0;
    v18 = (float)(unsigned __int8)SysColor;
    v19 = BYTE1(SysColor);
    v15 = BYTE2(SysColor);
    v21[0] = v18 / 255.0;
    v14 = _mm_cvtsi32_si128(v19);
    goto LABEL_20;
  }
  v9 = CDesktopManager::s_pDesktopManagerInstance;
  if ( (*((_BYTE *)this + 608) & 0x40) == 0 )
    v7 = (*(_BYTE *)(*((_QWORD *)this + 94) + 667LL) & 0x10) != 0;
  CDesktopManager::EnsureAccentColorSettingsLoaded(CDesktopManager::s_pDesktopManagerInstance);
  if ( v7 )
    v10 = *((_BYTE *)v9 + 617);
  else
    v10 = *((_BYTE *)v9 + 618);
  if ( v10 && CTopLevelWindow::HasNonClientArea(this) )
  {
    v13 = FLOAT_255_0;
    v21[0] = (float)(unsigned __int8)v20 / 255.0;
    v14 = _mm_cvtsi32_si128(BYTE1(v20));
    v15 = BYTE2(v20);
    goto LABEL_20;
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 94) + 128LL) & 0x1000) != 0 )
    v11 = *(__int128 *)&CTopLevelWindow::SNAPPED_BORDER_COLOR.r;
  else
    v11 = *(__int128 *)&CTopLevelWindow::OVERLAPPED_BORDER_COLOR.r;
LABEL_11:
  *(_OWORD *)&retstr->r = v11;
  return retstr;
}
