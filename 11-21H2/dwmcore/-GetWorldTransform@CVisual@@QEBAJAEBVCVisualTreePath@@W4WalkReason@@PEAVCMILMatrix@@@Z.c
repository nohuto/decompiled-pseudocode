/*
 * XREFs of ?GetWorldTransform@CVisual@@QEBAJAEBVCVisualTreePath@@W4WalkReason@@PEAVCMILMatrix@@@Z @ 0x18004ADE0
 * Callers:
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18008D06C (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1801B2258 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004AFB8 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?reserve_region@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUVisualTreePathUnit@CVisualTreePath@@_K0@Z @ 0x18008B8C0 (-reserve_region@-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreeP.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?RemoveLast@CVisualTreePath@@QEAAJXZ @ 0x1801B5F90 (-RemoveLast@CVisualTreePath@@QEAAJXZ.c)
 */

__int64 __fastcall CVisual::GetWorldTransform(__int64 a1, __int128 **a2, __int64 a3, __int64 a4)
{
  __int128 *v5; // rdi
  __int128 *v7; // rbx
  _OWORD *v9; // rax
  __int128 v10; // xmm0
  __int64 v11; // rdi
  __int128 *i; // rax
  __int64 v13; // rdx
  int WorldTransform; // eax
  unsigned int v15; // ebx
  __int128 v16; // xmm1
  int v17; // eax
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  _BYTE *v20; // rcx
  __int64 v21; // rdx
  __int64 v23; // rdx
  __int128 v24; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v25; // [rsp+40h] [rbp-C0h]
  __int128 v26; // [rsp+50h] [rbp-B0h]
  __int128 v27; // [rsp+60h] [rbp-A0h]
  int v28; // [rsp+70h] [rbp-90h]
  _OWORD v29[4]; // [rsp+80h] [rbp-80h] BYREF
  char v30; // [rsp+C0h] [rbp-40h]
  char v31; // [rsp+C1h] [rbp-3Fh]
  _BYTE *v32; // [rsp+D0h] [rbp-30h] BYREF
  __int128 *v33; // [rsp+D8h] [rbp-28h]
  __int64 *v34; // [rsp+E0h] [rbp-20h]
  _BYTE v35[32]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v36; // [rsp+108h] [rbp+8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+38h]

  v5 = a2[1];
  v7 = *a2;
  BYTE1(v28) = BYTE1(v28) & 0xC0 | 0x17;
  v24 = _xmm;
  v31 = v31 & 0xC0 | 0x17;
  v25 = _xmm;
  v32 = v35;
  v26 = _xmm;
  v27 = _xmm;
  v33 = (__int128 *)v35;
  v29[0] = _xmm;
  v29[1] = _xmm;
  v34 = &v36;
  LOBYTE(v28) = 85;
  v29[2] = _xmm;
  v29[3] = _xmm;
  v30 = 85;
  v9 = (_OWORD *)detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
                   &v32,
                   0LL,
                   v5 - v7);
  while ( v7 != v5 )
  {
    v10 = *v7++;
    *v9++ = v10;
  }
  v11 = *((_QWORD *)*a2 + 1);
  for ( i = a2[1]; ; i = v33 )
  {
    v13 = *((_QWORD *)i - 1);
    if ( v13 == v11 )
      break;
    WorldTransform = CVisual::GetWorldTransform(a1, v13, 3LL, v29, 0LL, 0LL);
    v15 = WorldTransform;
    if ( WorldTransform < 0 )
    {
      v23 = 1707LL;
      goto LABEL_19;
    }
    CMILMatrix::Multiply((CMILMatrix *)&v24, (const struct CMILMatrix *)v29);
    a1 = *((_QWORD *)v33 - 2);
    WorldTransform = CVisualTreePath::RemoveLast((CVisualTreePath *)&v32);
    v15 = WorldTransform;
    if ( WorldTransform < 0 )
    {
      v23 = 1714LL;
      goto LABEL_19;
    }
  }
  WorldTransform = CVisual::GetWorldTransform(a1, v13, 3LL, v29, 0LL, 0LL);
  v15 = WorldTransform;
  if ( WorldTransform >= 0 )
  {
    CMILMatrix::Multiply((CMILMatrix *)&v24, (const struct CMILMatrix *)v29);
    v15 = 0;
    v16 = v25;
    v17 = v28;
    *(_OWORD *)a4 = v24;
    v18 = v26;
    *(_OWORD *)(a4 + 16) = v16;
    v19 = v27;
    *(_OWORD *)(a4 + 32) = v18;
    *(_OWORD *)(a4 + 48) = v19;
    *(_DWORD *)(a4 + 64) = v17;
    goto LABEL_8;
  }
  v23 = 1725LL;
LABEL_19:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v23,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visual.cpp",
    (const char *)(unsigned int)WorldTransform);
LABEL_8:
  v20 = v32;
  v21 = ((char *)v33 - v32) >> 4;
  if ( v21 )
    v33 -= v21;
  v32 = 0LL;
  if ( v20 == v35 )
    v20 = 0LL;
  DefaultHeap::Free(v20);
  return v15;
}
