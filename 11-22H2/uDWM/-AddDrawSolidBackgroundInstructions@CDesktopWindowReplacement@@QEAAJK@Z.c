/*
 * XREFs of ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJK@Z @ 0x180038E80
 * Callers:
 *     ?CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z @ 0x180038D74 (-CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z.c)
 * Callees:
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18002E490 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180038438 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x18003903C (-Create@CRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z @ 0x1800390C0 (-SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800391CC (-IsPPIEdition@@YA_NXZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18009D804 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AddPPIRectangleInstruction@CDesktopWindowReplacement@@AEAAJKH@Z @ 0x1800B5E2C (-_AddPPIRectangleInstruction@CDesktopWindowReplacement@@AEAAJKH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopWindowReplacement::AddDrawSolidBackgroundInstructions(
        CDesktopWindowReplacement *this,
        int a2)
{
  unsigned int v3; // ebx
  float SystemMetrics; // xmm6_4
  float v5; // xmm7_4
  int v6; // eax
  const char *v7; // r9
  int v8; // eax
  int v9; // eax
  unsigned int LastError; // ebx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // edx
  int v14; // r8d
  __int64 v16; // rdx
  struct CRenderDataInstruction *v17; // [rsp+20h] [rbp-50h] BYREF
  __int128 v18; // [rsp+28h] [rbp-48h]
  struct _D3DCOLORVALUE v19; // [rsp+38h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v19.a = FLOAT_1_0;
  v19.r = GammaLUT_sRGB_to_scRGB[(unsigned __int8)a2] / 255.0;
  v19.g = GammaLUT_sRGB_to_scRGB[(unsigned __int64)(unsigned __int16)a2 >> 8] / 255.0;
  v19.b = GammaLUT_sRGB_to_scRGB[BYTE2(a2)] / 255.0;
  v17 = 0LL;
  v3 = 76;
  SystemMetrics = (float)GetSystemMetrics(76);
  *(float *)&v18 = SystemMetrics;
  v5 = (float)GetSystemMetrics(77);
  *((float *)&v18 + 1) = v5;
  v6 = GetSystemMetrics(78);
  if ( !v6 || (*((float *)&v18 + 2) = (float)v6 + SystemMetrics, v3 = 79, (v8 = GetSystemMetrics(79)) == 0) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v3,
                  (unsigned int)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
                  v7);
    goto LABEL_9;
  }
  *((float *)&v18 + 3) = (float)v8 + v5;
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v17);
  v9 = CRectangleInstruction::Create(&v17);
  LastError = v9;
  if ( v9 < 0 )
  {
    v16 = 82LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
      (const char *)(unsigned int)v9,
      (int)v17);
    goto LABEL_9;
  }
  *((_OWORD *)v17 + 2) = v18;
  v9 = CRectangleInstruction::SetSolidFill(v17, &v19, 1.0);
  LastError = v9;
  if ( v9 < 0 )
  {
    v16 = 85LL;
    goto LABEL_13;
  }
  v9 = CRenderDataVisual::AddInstruction(this, v17, v11, v12);
  LastError = v9;
  if ( v9 < 0 )
  {
    v16 = 87LL;
    goto LABEL_13;
  }
  if ( IsPPIEdition() )
    CDesktopWindowReplacement::_AddPPIRectangleInstruction(this, v13, v14);
  LastError = 0;
LABEL_9:
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v17);
  return LastError;
}
