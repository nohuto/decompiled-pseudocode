/*
 * XREFs of ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJK@Z @ 0x180018AA4
 * Callers:
 *     ?CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z @ 0x180018770 (-CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010664 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x1800188F4 (-Create@CRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z @ 0x180018978 (-SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x180018A58 (-IsPPIEdition@@YA_NXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180027DF8 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180095C14 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_AddPPIRectangleInstruction@CDesktopWindowReplacement@@AEAAJKH@Z @ 0x1800B18D8 (-_AddPPIRectangleInstruction@CDesktopWindowReplacement@@AEAAJKH@Z.c)
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
  unsigned int v11; // edx
  int v12; // r8d
  __int64 v14; // rdx
  struct CRectangleInstruction *v15; // [rsp+20h] [rbp-50h] BYREF
  __int128 v16; // [rsp+28h] [rbp-48h]
  struct _D3DCOLORVALUE v17; // [rsp+38h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v17.a = FLOAT_1_0;
  v17.r = GammaLUT_sRGB_to_scRGB[(unsigned __int8)a2] / 255.0;
  v17.g = GammaLUT_sRGB_to_scRGB[(unsigned __int64)(unsigned __int16)a2 >> 8] / 255.0;
  v17.b = GammaLUT_sRGB_to_scRGB[BYTE2(a2)] / 255.0;
  v15 = 0LL;
  v3 = 76;
  SystemMetrics = (float)GetSystemMetrics(76);
  *(float *)&v16 = SystemMetrics;
  v5 = (float)GetSystemMetrics(77);
  *((float *)&v16 + 1) = v5;
  v6 = GetSystemMetrics(78);
  if ( !v6 || (*((float *)&v16 + 2) = (float)v6 + SystemMetrics, v3 = 79, (v8 = GetSystemMetrics(79)) == 0) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v3,
                  (unsigned int)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
                  v7);
    goto LABEL_9;
  }
  *((float *)&v16 + 3) = (float)v8 + v5;
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v15);
  v9 = CRectangleInstruction::Create(&v15);
  LastError = v9;
  if ( v9 < 0 )
  {
    v14 = 82LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_9;
  }
  *((_OWORD *)v15 + 2) = v16;
  v9 = CRectangleInstruction::SetSolidFill(v15, &v17, 1.0);
  LastError = v9;
  if ( v9 < 0 )
  {
    v14 = 85LL;
    goto LABEL_14;
  }
  v9 = CRenderDataVisual::AddInstruction(this, v15);
  LastError = v9;
  if ( v9 < 0 )
  {
    v14 = 87LL;
    goto LABEL_14;
  }
  if ( IsPPIEdition() )
    CDesktopWindowReplacement::_AddPPIRectangleInstruction(this, v11, v12);
  LastError = 0;
LABEL_9:
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v15);
  return LastError;
}
