/*
 * XREFs of ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x180107808
 * Callers:
 *     ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180107194 (-OnIconUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x180107634 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180107A2C (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001F610 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18002E490 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x18003903C (-Create@CRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18004734C (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180047388 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetLinearGradientFill@CRectangleInstruction@@QEAAJ_NAEBU_D3DCOLORVALUE@@1N@Z @ 0x1800D6628 (-SetLinearGradientFill@CRectangleInstruction@@QEAAJ_NAEBU_D3DCOLORVALUE@@1N@Z.c)
 */

__int64 __fastcall CWindowIconic::UpdateClientArea(CWindowIconic *this)
{
  _DWORD *v1; // r8
  int v3; // ecx
  int v4; // edx
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  __int64 v12; // rdx
  const struct _D3DCOLORVALUE *v13; // r8
  const struct _D3DCOLORVALUE *v14; // r9
  CBaseObject *v15; // rsi
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  CVisual *v20; // rcx
  CBaseObject *v21; // rax
  __int64 v22; // rdx
  int v24; // [rsp+30h] [rbp-38h] BYREF
  int v25; // [rsp+34h] [rbp-34h]
  CBaseObject *v26; // [rsp+38h] [rbp-30h] BYREF
  __int128 v27; // [rsp+40h] [rbp-28h]

  v1 = (_DWORD *)*((_QWORD *)this + 10);
  v26 = 0LL;
  v3 = 0;
  v4 = 0;
  if ( v1[56] - v1[54] >= 0 )
    v4 = v1[56] - v1[54];
  v5 = v4 - v1[67] - v1[66];
  if ( v5 < 0 )
    v5 = 0;
  v24 = v5;
  if ( v1[57] - v1[55] >= 0 )
    v3 = v1[57] - v1[55];
  v6 = v3 - v1[69] - v1[68];
  if ( v6 < 0 )
    v6 = 0;
  v25 = v6;
  v7 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 13) + 104LL))(*((_QWORD *)this + 13), &v24);
  v8 = v7;
  if ( v7 >= 0 )
  {
    CRenderDataVisual::ClearInstructions(*((CRenderDataVisual **)this + 13));
    v9 = *((_DWORD *)this + 4);
    if ( v9 && (v10 = v9 - 1) != 0 )
    {
      if ( v10 == 1 )
      {
        CVisual::SetInsetFromParentLeft(*((CVisual **)this + 12), 0);
        CVisual::SetInsetFromParentTop(*((CVisual **)this + 12), 0);
      }
    }
    else
    {
      *(_QWORD *)&v27 = 0LL;
      *((float *)&v27 + 2) = (float)v24;
      *((float *)&v27 + 3) = (float)v25;
      v11 = CRectangleInstruction::Create(&v26);
      v15 = v26;
      v8 = v11;
      if ( v11 >= 0 )
      {
        v16 = CRectangleInstruction::SetLinearGradientFill(v26, v12, v13, v14);
        v8 = v16;
        if ( v16 >= 0 )
        {
          *((_OWORD *)v15 + 2) = v27;
          v19 = CRenderDataVisual::AddInstruction(*((CRenderDataVisual **)this + 13), v15, v17, v18);
          v8 = v19;
          if ( v19 >= 0 )
          {
            v20 = (CVisual *)*((_QWORD *)this + 12);
            LODWORD(v21) = 0;
            v26 = 0LL;
            v22 = *((_QWORD *)v20 + 36);
            if ( v22 )
            {
              v21 = *(CBaseObject **)(v22 + 24);
              v26 = v21;
            }
            CVisual::SetInsetFromParentLeft(v20, (v24 - (int)v21) / 2);
            CVisual::SetInsetFromParentTop(*((CVisual **)this + 12), (v25 - HIDWORD(v26)) / 2);
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x112u);
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x10Fu);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x10Eu);
      }
      if ( v15 )
        CBaseObject::Release(v15);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x100u);
  }
  return v8;
}
