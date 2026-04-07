/*
 * XREFs of ?AddInstructionsForBackgroundInNewVirtualScreen@CDisplayAnimatedVisual@@IEAAJXZ @ 0x180048C6C
 * Callers:
 *     ?Start@CDisplayAnimatedVisual@@QEAAJXZ @ 0x180047B9C (-Start@CDisplayAnimatedVisual@@QEAAJXZ.c)
 * Callees:
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18002E490 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x180042274 (-Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18004911C (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18009EDE0 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplayAnimatedVisual::AddInstructionsForBackgroundInNewVirtualScreen(CDisplayAnimatedVisual *this)
{
  bool v2; // al
  unsigned int v3; // ecx
  int v4; // eax
  __int64 v5; // r9
  unsigned int v6; // ebx
  CBaseObject *v7; // rbx
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  __int64 v11; // r8
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // eax
  int v16; // edi
  CBaseObject *v18; // [rsp+20h] [rbp-28h] BYREF
  float v19[8]; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = CDesktopManager::CheckAnyPreference(0x80u);
  v3 = 0;
  if ( v2 )
    v3 = 14586078;
  v19[3] = FLOAT_1_0;
  v19[0] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)v3] / 255.0;
  v19[1] = GammaLUT_sRGB_to_scRGB[(unsigned __int64)(unsigned __int16)v3 >> 8] / 255.0;
  v19[2] = GammaLUT_sRGB_to_scRGB[(unsigned __int64)v3 >> 16] / 255.0;
  v18 = 0LL;
  v4 = CSolidRectangleInstruction::Create(&v18);
  v6 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18C,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
      (const char *)(unsigned int)v4,
      (int)v18);
  }
  else
  {
    v7 = v18;
    *((_OWORD *)v18 + 1) = *(_OWORD *)v19;
    v8 = *((_DWORD *)this + 74);
    v9 = *((_DWORD *)this + 76);
    v10 = *((_DWORD *)this + 75);
    v11 = (unsigned int)(*((_DWORD *)this + 77) - v10);
    v19[0] = (float)v8;
    v19[1] = (float)v10;
    v12 = 0;
    v13 = v9 - v8;
    if ( v13 >= 0 )
      v12 = v13;
    v19[2] = (float)v12;
    v14 = 0;
    if ( (int)v11 >= 0 )
      v14 = v11;
    v19[3] = (float)v14;
    *((_OWORD *)v7 + 2) = *(_OWORD *)v19;
    v15 = CRenderDataVisual::AddInstruction(this, v7, v11, v5);
    v16 = v15;
    if ( v15 >= 0 )
    {
      CBaseObject::Release(v7);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x199,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
      (const char *)(unsigned int)v15,
      (int)v18);
    v6 = v16;
  }
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v18);
  return v6;
}
