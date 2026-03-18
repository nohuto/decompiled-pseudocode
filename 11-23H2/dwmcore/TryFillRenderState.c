/*
 * XREFs of TryFillRenderState @ 0x1801CC678
 * Callers:
 *     ?TryDrawSuperWetLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801CC390 (-TryDrawSuperWetLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_.c)
 *     ?TryRegisterSuperWetForDrawHost@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801CC934 (-TryRegisterSuperWetForDrawHost@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingConte.c)
 *     ?TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x1801CCAB8 (-TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingCont.c)
 * Callees:
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800713C4 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?IsHDRTarget@CDrawingContext@@QEBA_NXZ @ 0x18007E0CC (-IsHDRTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18008F058 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 */

bool __fastcall TryFillRenderState(CDrawingContext *this, unsigned __int8 a2, char a3, __int64 a4)
{
  int v4; // esi
  bool result; // al
  int v8; // xmm1_4
  int v9; // xmm2_4
  int v10; // xmm3_4
  int v11; // xmm4_4
  int v12; // xmm5_4
  int v13; // eax
  int v14; // xmm0_4
  int v15; // xmm1_4
  BOOL IsHDRTarget; // ecx
  _DWORD v17[12]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v18; // [rsp+50h] [rbp-28h]
  int v19; // [rsp+60h] [rbp-18h]

  v4 = a2;
  *(_OWORD *)a4 = 0LL;
  v18 = 0LL;
  *(_OWORD *)(a4 + 16) = 0LL;
  *(_OWORD *)(a4 + 32) = 0LL;
  *(_QWORD *)(a4 + 48) = v18;
  if ( !a3 )
  {
    v19 = 0;
    CMatrixStack::Top((CDrawingContext *)((char *)this + 400), (struct CMILMatrix *)v17);
    result = CMILMatrix::Is2DAffine<1>((__int64)v17, 1);
    if ( !result )
      return result;
    v8 = v17[1];
    v9 = v17[4];
    v10 = v17[5];
    v11 = v18;
    v12 = HIDWORD(v18);
    *(_DWORD *)a4 = v17[0];
    *(_DWORD *)(a4 + 4) = v8;
    *(_DWORD *)(a4 + 8) = v9;
    *(_DWORD *)(a4 + 12) = v10;
    *(_DWORD *)(a4 + 16) = v11;
    *(_DWORD *)(a4 + 20) = v12;
  }
  v13 = *((_DWORD *)this + 812);
  v14 = (int)FLOAT_1_0;
  if ( v13 )
    v15 = *(_DWORD *)(*((_QWORD *)this + 408) + 4LL * (unsigned int)(v13 - 1));
  else
    v15 = (int)FLOAT_1_0;
  *(_DWORD *)(a4 + 24) = v15;
  if ( *((float *)this + 18) != 0.0 )
    v14 = *((_DWORD *)this + 18);
  *(_DWORD *)(a4 + 44) = v14;
  IsHDRTarget = CDrawingContext::IsHDRTarget(this);
  result = 1;
  *(_DWORD *)(a4 + 48) = IsHDRTarget;
  *(_DWORD *)(a4 + 52) = v4;
  return result;
}
