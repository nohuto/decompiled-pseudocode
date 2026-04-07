/*
 * XREFs of ?_UpdateInstructions@CProjectionBorderVisual@@IEAAJXZ @ 0x1800D6088
 * Callers:
 *     ?ValidateVisual@CProjectionBorderVisual@@UEAAJXZ @ 0x1800D5DA0 (-ValidateVisual@CProjectionBorderVisual@@UEAAJXZ.c)
 * Callees:
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x18001B540 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001F610 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_AddBorderInstructions@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@@Z @ 0x1800D5E24 (-_AddBorderInstructions@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CProjectionBorderVisual::_UpdateInstructions(CProjectionBorderVisual *this)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // esi
  int v7; // eax
  int v8; // eax
  struct _D3DCOLORVALUE v10; // [rsp+30h] [rbp-48h] BYREF
  struct _D3DCOLORVALUE v11; // [rsp+40h] [rbp-38h] BYREF
  struct tagRECT rc; // [rsp+50h] [rbp-28h] BYREF

  rc = (struct tagRECT)*((_OWORD *)this + 18);
  v2 = CRenderDataVisual::ClearInstructions(this);
  v5 = v2;
  if ( v2 >= 0 )
  {
    if ( *((_BYTE *)this + 304) )
    {
      v6 = 2;
      *(struct _D3DCOLORVALUE *)&v11.r = (struct _D3DCOLORVALUE)xmmword_180129388;
      *(struct _D3DCOLORVALUE *)&v10.r = (struct _D3DCOLORVALUE)_xmm;
      if ( (unsigned __int8)CDesktopManager::IsHighContrastMode(v4, v3) )
      {
        if ( !*((_DWORD *)this + 77) )
          v6 = 4;
        v10.a = FLOAT_1_0;
      }
      v7 = CProjectionBorderVisual::_AddBorderInstructions((struct tagRECT *)this, &rc, v6, &v10);
      v5 = v7;
      if ( v7 >= 0 )
      {
        InflateRect(
          &rc,
          -(int)((double)v6 * *((double *)CDesktopManager::s_pDesktopManagerInstance + 53)),
          -(int)((double)v6 * *((double *)CDesktopManager::s_pDesktopManagerInstance + 53)));
        v8 = CProjectionBorderVisual::_AddBorderInstructions((struct tagRECT *)this, &rc, 1, &v11);
        v5 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x81u);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x7Du);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x6Au);
  }
  return v5;
}
