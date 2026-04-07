/*
 * XREFs of ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x1800E918C
 * Callers:
 *     ?StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800E8C24 (-StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800E8DE0 (-StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800E8F84 (-StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800E97E0 (-UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001F610 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18002A780 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18002E490 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x18003903C (-Create@CRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z @ 0x1800390C0 (-SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTouchPressHoldVisual::UpdateOpacityAndLocation(CTouchPressHoldVisual *this)
{
  double v1; // xmm1_8
  int v3; // ebx
  int v4; // edx
  float v5; // xmm7_4
  int v6; // r8d
  int v7; // eax
  float v8; // xmm8_4
  float v9; // xmm12_4
  float v10; // xmm11_4
  int v11; // eax
  unsigned int v12; // ebx
  CBaseObject *v13; // rdi
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  float v18; // xmm10_4
  int v19; // eax
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  int v24; // eax
  int v25; // eax
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // eax
  int v29; // eax
  int v30; // eax
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // eax
  int v34; // eax
  int v35; // eax
  __int64 v36; // r8
  __int64 v37; // r9
  int v38; // eax
  int v39; // eax
  int v40; // eax
  __int64 v41; // r8
  __int64 v42; // r9
  int v43; // eax
  CBaseObject *v45; // [rsp+38h] [rbp-D0h] BYREF
  double v46; // [rsp+40h] [rbp-C8h]
  __int128 v47; // [rsp+48h] [rbp-C0h]
  struct _D3DCOLORVALUE v48; // [rsp+58h] [rbp-B0h] BYREF
  struct _D3DCOLORVALUE v49; // [rsp+68h] [rbp-A0h] BYREF

  v1 = *((float *)this + 84);
  v45 = 0LL;
  CVisual::SetOpacity(this, v1);
  if ( *((int *)this + 81) < 10 )
    *((_DWORD *)this + 81) = 10;
  if ( *((int *)this + 82) < 10 )
    *((_DWORD *)this + 82) = 10;
  CRenderDataVisual::ClearInstructions(this);
  v3 = *((_DWORD *)this + 81);
  v4 = *((_DWORD *)this + 85);
  v5 = (float)(*((_DWORD *)this + 77) - v3 / 2);
  *(float *)&v47 = v5;
  v6 = MulDiv(-5, v4, 100);
  v7 = *((_DWORD *)this + 82);
  v8 = (float)(*((_DWORD *)this + 78) - *((_DWORD *)this + 83) - v3 / 2 + v6);
  *((float *)&v47 + 2) = (float)v3 + v5;
  *((float *)&v47 + 1) = v8;
  *(struct _D3DCOLORVALUE *)&v49.r = (struct _D3DCOLORVALUE)_mm_load_si128((const __m128i *)&_xmm);
  *(struct _D3DCOLORVALUE *)&v48.r = (struct _D3DCOLORVALUE)_xmm;
  *((float *)&v47 + 3) = (float)v7 + v8;
  if ( v3 <= 4 || v7 <= 4 )
  {
    v39 = CRectangleInstruction::Create(&v45);
    v12 = v39;
    if ( v39 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v39, 0x137u);
      goto LABEL_47;
    }
    v13 = v45;
    v40 = CRectangleInstruction::SetSolidFill(v45, &v48, 0.949999988079071);
    v12 = v40;
    if ( v40 >= 0 )
    {
      *((_OWORD *)v13 + 2) = v47;
      v43 = CRenderDataVisual::AddInstruction(this, v13, v41, v42);
      v12 = v43;
      if ( v43 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v43, 0x13Au);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v40, 0x138u);
    }
  }
  else
  {
    v9 = (float)((float)v3 + v5) - v5;
    *(_QWORD *)&v47 = __PAIR64__(LODWORD(v8), LODWORD(v5));
    v10 = (float)((float)v7 + v8) - v8;
    *((float *)&v47 + 3) = v8 + v10;
    *((float *)&v47 + 2) = v5 + 2.0;
    v46 = (float)(v8 + 2.0);
    v11 = CRectangleInstruction::Create(&v45);
    v12 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x156u);
LABEL_47:
      v13 = v45;
      goto LABEL_52;
    }
    v13 = v45;
    v14 = CRectangleInstruction::SetSolidFill(v45, &v48, 0.949999988079071);
    v12 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x157u);
      goto LABEL_52;
    }
    *((_OWORD *)v13 + 2) = v47;
    v17 = CRenderDataVisual::AddInstruction(this, v13, v15, v16);
    v12 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x159u);
      goto LABEL_52;
    }
    if ( v13 )
    {
      CBaseObject::Release(v13);
      v45 = 0LL;
    }
    v18 = v5 + 2.0;
    *(float *)&v47 = v18;
    *((float *)&v47 + 3) = v8 + 2.0;
    *((float *)&v47 + 2) = (float)(v18 + v9) - 4.0;
    v19 = CRectangleInstruction::Create(&v45);
    v12 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x161u);
      goto LABEL_47;
    }
    v13 = v45;
    v20 = CRectangleInstruction::SetSolidFill(v45, &v48, 0.949999988079071);
    v12 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x162u);
      goto LABEL_52;
    }
    *((_OWORD *)v13 + 2) = v47;
    v23 = CRenderDataVisual::AddInstruction(this, v13, v21, v22);
    v12 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x164u);
      goto LABEL_52;
    }
    if ( v13 )
    {
      CBaseObject::Release(v13);
      v45 = 0LL;
    }
    *((float *)&v47 + 3) = v8 + v10;
    *(float *)&v47 = (float)(v5 + v9) - 2.0;
    *((float *)&v47 + 2) = *(float *)&v47 + 2.0;
    v24 = CRectangleInstruction::Create(&v45);
    v12 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v24, 0x16Cu);
      goto LABEL_47;
    }
    v13 = v45;
    v25 = CRectangleInstruction::SetSolidFill(v45, &v48, 0.949999988079071);
    v12 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v25, 0x16Du);
      goto LABEL_52;
    }
    *((_OWORD *)v13 + 2) = v47;
    v28 = CRenderDataVisual::AddInstruction(this, v13, v26, v27);
    v12 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, 0x16Fu);
      goto LABEL_52;
    }
    if ( v13 )
    {
      CBaseObject::Release(v13);
      v45 = 0LL;
    }
    *(float *)&v47 = v5 + 2.0;
    *((float *)&v47 + 1) = (float)(v8 + v10) - 2.0;
    *((float *)&v47 + 2) = (float)(v18 + v9) - 4.0;
    *((float *)&v47 + 3) = *((float *)&v47 + 1) + 2.0;
    v29 = CRectangleInstruction::Create(&v45);
    v12 = v29;
    if ( v29 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v29, 0x177u);
      goto LABEL_47;
    }
    v13 = v45;
    v30 = CRectangleInstruction::SetSolidFill(v45, &v48, 0.949999988079071);
    v12 = v30;
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v30, 0x178u);
      goto LABEL_52;
    }
    *((_OWORD *)v13 + 2) = v47;
    v33 = CRenderDataVisual::AddInstruction(this, v13, v31, v32);
    v12 = v33;
    if ( v33 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v33, 0x17Au);
      goto LABEL_52;
    }
    if ( v13 )
    {
      CBaseObject::Release(v13);
      v45 = 0LL;
    }
    *((float *)&v47 + 1) = v46;
    *((float *)&v47 + 3) = (float)(*((float *)&v47 + 1) + v10) - 4.0;
    v34 = CRectangleInstruction::Create(&v45);
    v12 = v34;
    if ( v34 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v34, 0x182u);
      goto LABEL_47;
    }
    v13 = v45;
    v35 = CRectangleInstruction::SetSolidFill(v45, &v49, 0.300000011920929);
    v12 = v35;
    if ( v35 >= 0 )
    {
      *((_OWORD *)v13 + 2) = v47;
      v38 = CRenderDataVisual::AddInstruction(this, v13, v36, v37);
      v12 = v38;
      if ( v38 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v38, 0x185u);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v35, 0x183u);
    }
  }
LABEL_52:
  if ( v13 )
    CBaseObject::Release(v13);
  return v12;
}
