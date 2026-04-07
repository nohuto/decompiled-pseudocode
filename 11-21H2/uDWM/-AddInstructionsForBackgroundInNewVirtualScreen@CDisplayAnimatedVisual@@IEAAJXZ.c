/*
 * XREFs of ?AddInstructionsForBackgroundInNewVirtualScreen@CDisplayAnimatedVisual@@IEAAJXZ @ 0x18005BBB0
 * Callers:
 *     ?Start@CDisplayAnimatedVisual@@QEAAJXZ @ 0x18005BA80 (-Start@CDisplayAnimatedVisual@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180027DF8 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x180047B34 (-Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDisplayAnimatedVisual::AddInstructionsForBackgroundInNewVirtualScreen(CDisplayAnimatedVisual *this)
{
  int v2; // eax
  unsigned int v3; // edi
  CBaseObject *v4; // rbx
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  int v8; // r8d
  int v9; // eax
  int v10; // edx
  int v11; // eax
  __int64 v13; // rdx
  CBaseObject *v14; // [rsp+20h] [rbp-28h] BYREF
  float v15[8]; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v15[3] = FLOAT_1_0;
  *(_QWORD *)v15 = 0LL;
  v15[2] = 0.0;
  v14 = 0LL;
  v2 = CSolidRectangleInstruction::Create(&v14);
  v3 = v2;
  v4 = v14;
  if ( v2 < 0 )
  {
    v13 = 459LL;
  }
  else
  {
    *((_OWORD *)v14 + 1) = *(_OWORD *)v15;
    v5 = *((_DWORD *)this + 74);
    v6 = *((_DWORD *)this + 76);
    v7 = *((_DWORD *)this + 75);
    v8 = *((_DWORD *)this + 77) - v7;
    v15[0] = (float)v5;
    v15[1] = (float)v7;
    v9 = 0;
    v10 = v6 - v5;
    if ( v10 >= 0 )
      v9 = v10;
    v15[2] = (float)v9;
    v11 = 0;
    if ( v8 >= 0 )
      v11 = v8;
    v15[3] = (float)v11;
    *((_OWORD *)v4 + 2) = *(_OWORD *)v15;
    v2 = CRenderDataVisual::AddInstruction(this, v4);
    v3 = v2;
    if ( v2 >= 0 )
    {
      v3 = 0;
      goto LABEL_8;
    }
    v13 = 472LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"clientcore\\windows\\dwm\\udwm\\displayanimatedvisual.cpp",
    (const char *)(unsigned int)v2);
LABEL_8:
  if ( v4 )
    CBaseObject::Release(v4);
  return v3;
}
