/*
 * XREFs of ?UpdateFromVisualSurface@CCachedVisualImage@@IEAAJPEAVCVisualTree@@AEBUD2D_VECTOR_2F@@11W4Enum@MilStretch@@@Z @ 0x18005DA84
 * Callers:
 *     ?GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualImage@@@Z @ 0x18005D920 (-GetCVIForRealizationSize@CVisualSurface@@QEAAJIAEBUD2D_VECTOR_2F@@PEAU2@PEAPEAVCCachedVisualIma.c)
 *     ?GetExplicitRealizationSizeCVI@CVisualSurface@@QEBAJPEAUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage@@@Z @ 0x1800FD3BC (-GetExplicitRealizationSizeCVI@CVisualSurface@@QEBAJPEAUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage.c)
 *     ?ProcessFreeze@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_FREEZE@@@Z @ 0x180202F1C (-ProcessFreeze@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_FREEZE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     floor @ 0x1801018EC (floor.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::UpdateFromVisualSurface(
        __int64 *a1,
        __int64 a2,
        float *a3,
        float *a4,
        float *a5,
        int a6)
{
  unsigned int v6; // esi
  char v7; // bp
  __int64 v9; // r14
  float v10; // xmm10_4
  float v11; // xmm11_4
  float v12; // xmm8_4
  float v13; // xmm9_4
  float v14; // xmm7_4
  double v15; // xmm0_8
  __int64 v16; // rax
  float v17; // xmm6_4
  __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // ecx
  int v21; // eax
  unsigned int v22; // ecx
  float v24[28]; // [rsp+30h] [rbp-78h]

  v6 = 0;
  v7 = 0;
  if ( a2 )
    v9 = *(_QWORD *)(a2 + 64);
  else
    v9 = 0LL;
  v10 = *a3;
  v11 = a3[1];
  v12 = *a3 + *a4;
  v13 = v11 + a4[1];
  v24[0] = *a3;
  v24[1] = v11;
  v24[2] = v12;
  v24[3] = v13;
  v14 = (float)(int)floor(*a5 + 0.5);
  v15 = floor(a5[1] + 0.5);
  v16 = a1[18];
  v17 = (float)(int)v15;
  if ( v16 != v9 )
  {
    if ( v16 )
      (*(void (__fastcall **)(__int64 *))(*a1 + 192))(a1);
    v18 = *a1;
    *((_WORD *)a1 + 888) = 0;
    a1[18] = v9;
    v19 = (*(__int64 (__fastcall **)(__int64 *))(v18 + 184))(a1);
    v6 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x20Fu, 0LL);
      return v6;
    }
    v21 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 224))(a1);
    v6 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x211u, 0LL);
      return v6;
    }
    v7 = 1;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a1 + 24) - v10) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a1 + 25) - v11) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a1 + 26) - v12) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)a1 + 27) - v13) & _xmm) > 0.0000011920929 )
  {
    v7 = 1;
    *((_OWORD *)a1 + 6) = *(_OWORD *)v24;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((double *)a1 + 15) - v14) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((double *)a1 + 16) - v17) & _xmm) > 0.0000011920929 )
  {
    v7 = 1;
    *((double *)a1 + 15) = v14;
    *((double *)a1 + 16) = v17;
  }
  if ( *((_DWORD *)a1 + 44) == a6 )
  {
    if ( !v7 )
      return v6;
  }
  else
  {
    *((_DWORD *)a1 + 44) = a6;
  }
  (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a1 + 72))(a1, 0LL, 0LL);
  return v6;
}
