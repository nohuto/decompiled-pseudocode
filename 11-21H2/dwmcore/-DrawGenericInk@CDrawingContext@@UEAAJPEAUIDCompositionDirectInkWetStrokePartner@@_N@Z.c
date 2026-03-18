/*
 * XREFs of ?DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z @ 0x1801B0690
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?D2DPrimitiveBlendFromMilCompositingMode@@YA?AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@@@Z @ 0x1801AFA34 (-D2DPrimitiveBlendFromMilCompositingMode@@YA-AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@.c)
 *     ?DrawGenericInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUIDCompositionDirectInkWetStrokePartner@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@M_N@Z @ 0x180277CE0 (-DrawGenericInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUIDCompositionDirectInkWetStrokePartn.c)
 */

__int64 __fastcall CDrawingContext::DrawGenericInk(
        CDrawingContext *this,
        struct IDCompositionDirectInkWetStrokePartner *a2,
        bool a3)
{
  unsigned __int64 v3; // rsi
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  float v12; // xmm0_4
  enum D2D1_PRIMITIVE_BLEND v13; // eax
  __int64 v14; // r10
  enum D2D1_PRIMITIVE_BLEND v16; // [rsp+20h] [rbp-28h]

  v3 = (unsigned __int64)this + 8;
  if ( (**((unsigned __int8 (__fastcall ***)(char *))this + 1))((char *)this + 8) )
  {
    v8 = -2147467263;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, -2147467263, 0x2E5u);
    return v8;
  }
  v9 = (*(__int64 (__fastcall **)(CDrawingContext *))(*(_QWORD *)this + 112LL))(this);
  v8 = v9;
  if ( v9 < 0 )
  {
    v16 = 744;
    goto LABEL_10;
  }
  v11 = *((_DWORD *)this + 772);
  if ( v11 )
    v12 = *(float *)(*((_QWORD *)this + 388) + 4LL * (unsigned int)(v11 - 1));
  else
    v12 = *(float *)&FLOAT_1_0;
  v13 = (unsigned int)D2DPrimitiveBlendFromMilCompositingMode(*((_DWORD *)this + 73));
  v9 = CD2DContext::DrawGenericInk(
         (CD2DContext *)(v14 + 16),
         (const struct ID2DContextOwner *)(v3 & -(__int64)(this != (CDrawingContext *)16)),
         a2,
         (enum D2D1_ANTIALIAS_MODE)(*((_DWORD *)this + 72) != 0),
         v13,
         v12,
         a3);
  v8 = v9;
  if ( v9 < 0 )
  {
    v16 = 751;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, v16);
  }
  return v8;
}
