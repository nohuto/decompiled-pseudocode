/*
 * XREFs of ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x18004AE70
 * Callers:
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18004ABB8 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18004B578 (-OnIconUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18004B790 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180013228 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?Create@CRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x1800188F4 (-Create@CRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002730C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180027DF8 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetLinearGradientFill@CRectangleInstruction@@QEAAJ_NAEBU_D3DCOLORVALUE@@1N@Z @ 0x18004B028 (-SetLinearGradientFill@CRectangleInstruction@@QEAAJ_NAEBU_D3DCOLORVALUE@@1N@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18004C890 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
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
  int v9; // eax
  int v10; // eax
  bool v11; // dl
  const struct _D3DCOLORVALUE *v12; // r8
  const struct _D3DCOLORVALUE *v13; // r9
  CBaseObject *v14; // rsi
  int v15; // eax
  int v16; // eax
  CVisual *v17; // rcx
  CBaseObject *v18; // rax
  __int64 v19; // rdx
  int v21; // [rsp+30h] [rbp-38h] BYREF
  int v22; // [rsp+34h] [rbp-34h]
  CBaseObject *v23; // [rsp+38h] [rbp-30h] BYREF
  __int128 v24; // [rsp+40h] [rbp-28h]

  v1 = (_DWORD *)*((_QWORD *)this + 10);
  v23 = 0LL;
  v3 = 0;
  v4 = 0;
  if ( v1[56] - v1[54] >= 0 )
    v4 = v1[56] - v1[54];
  v5 = v4 - v1[67] - v1[66];
  if ( v5 < 0 )
    v5 = 0;
  v21 = v5;
  if ( v1[57] - v1[55] >= 0 )
    v3 = v1[57] - v1[55];
  v6 = v3 - v1[69] - v1[68];
  if ( v6 < 0 )
    v6 = 0;
  v22 = v6;
  v7 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 13) + 96LL))(*((_QWORD *)this + 13), &v21);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x101u);
  }
  else
  {
    CRenderDataVisual::ClearInstructions(*((CRenderDataVisual **)this + 13));
    v9 = *((_DWORD *)this + 4);
    if ( v9 >= 0 )
    {
      if ( v9 > 1 )
      {
        if ( v9 == 2 )
        {
          CVisual::SetInsetFromParentLeft(*((CVisual **)this + 12), 0);
          CVisual::SetInsetFromParentTop(*((CVisual **)this + 12), 0);
        }
      }
      else
      {
        *(_QWORD *)&v24 = 0LL;
        *((float *)&v24 + 2) = (float)v21;
        *((float *)&v24 + 3) = (float)v22;
        v10 = CRectangleInstruction::Create(&v23);
        v14 = v23;
        v8 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x10Fu);
        }
        else
        {
          v15 = CRectangleInstruction::SetLinearGradientFill(v23, v11, v12, v13, 1.0);
          v8 = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x110u);
          }
          else
          {
            *((_OWORD *)v14 + 2) = v24;
            v16 = CRenderDataVisual::AddInstruction(*((CRenderDataVisual **)this + 13), v14);
            v8 = v16;
            if ( v16 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x113u);
            }
            else
            {
              v17 = (CVisual *)*((_QWORD *)this + 12);
              LODWORD(v18) = 0;
              v23 = 0LL;
              v19 = *((_QWORD *)v17 + 36);
              if ( v19 )
              {
                v18 = *(CBaseObject **)(v19 + 24);
                v23 = v18;
              }
              CVisual::SetInsetFromParentLeft(v17, (v21 - (int)v18) / 2);
              CVisual::SetInsetFromParentTop(*((CVisual **)this + 12), (v22 - HIDWORD(v23)) / 2);
            }
          }
        }
        if ( v14 )
          CBaseObject::Release(v14);
      }
    }
  }
  return v8;
}
