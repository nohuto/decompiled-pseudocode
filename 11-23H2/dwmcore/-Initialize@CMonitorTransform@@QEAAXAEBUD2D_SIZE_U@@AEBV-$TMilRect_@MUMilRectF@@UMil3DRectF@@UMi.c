/*
 * XREFs of ?Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MW4DXGI_MODE_ROTATION@@PEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800FE224
 * Callers:
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z @ 0x1800FD990 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJPEA_N@Z.c)
 *     ?ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x1800FDE4C (-ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDER.c)
 *     ?ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDERTARGET_UPDATETRANSFORM@@@Z @ 0x18010AFFC (-ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDER.c)
 *     ?ProcessUpdateTransform@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x1801E83D8 (-ProcessUpdateTransform@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRE.c)
 *     ?HandleDDAArrivalOrDeparture@CRemoteRenderTarget@@UEAAJXZ @ 0x1801F0A60 (-HandleDDAArrivalOrDeparture@CRemoteRenderTarget@@UEAAJXZ.c)
 *     ?UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z @ 0x1801F970C (-UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18006A3E0 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x180074570 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x18009849C (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800BE080 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800D0498 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x1800DC3B8 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800E2A30 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1800FE560 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPo_ea_1800FE560.c)
 *     ?IsPixelAligned@@YA_NAEBUMilRectF@@@Z @ 0x1800FE628 (-IsPixelAligned@@YA_NAEBUMilRectF@@@Z.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     ?Rotate270@CMILMatrix@@QEAAXXZ @ 0x180270134 (-Rotate270@CMILMatrix@@QEAAXXZ.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x18027016C (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 */

void __fastcall CMonitorTransform::Initialize(__int64 a1, int *a2, struct MilRectF *a3, float a4, int a5, int *a6)
{
  char v6; // bl
  char v10; // r13
  __int64 v11; // rsi
  int v12; // r9d
  float *v13; // r8
  float v14; // xmm0_4
  int v15; // ecx
  int v16; // edx
  unsigned int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rdx
  CMILMatrix *v20; // rcx
  struct Windows::Foundation::Numerics::float4x4 *v21; // r8
  int v22; // eax
  __int128 v23; // xmm1
  __int64 v24; // r10
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  int v27; // r9d
  int v28; // r9d
  int v29; // r9d
  int v30; // eax
  float v31; // xmm0_4
  int v32; // eax
  float v33; // xmm0_4
  float v34; // xmm1_4
  int v35; // eax
  bool v36; // al
  float v37; // xmm2_4
  float v38; // xmm1_4
  int v39; // ecx
  float v40; // [rsp+28h] [rbp-89h] BYREF
  float v41[3]; // [rsp+2Ch] [rbp-85h] BYREF
  _BYTE v42[64]; // [rsp+38h] [rbp-79h] BYREF
  int v43; // [rsp+78h] [rbp-39h]
  float v44; // [rsp+88h] [rbp-29h] BYREF
  float v45; // [rsp+8Ch] [rbp-25h]
  float v46; // [rsp+90h] [rbp-21h]
  float v47; // [rsp+94h] [rbp-1Dh]
  __int128 v48; // [rsp+98h] [rbp-19h] BYREF

  v44 = 0.0;
  v6 = 0;
  v45 = 0.0;
  if ( !*a2 || (v10 = 1, !a2[1]) )
    v10 = 0;
  *(float *)a1 = a4;
  *(_OWORD *)(a1 + 4) = *(_OWORD *)a3;
  if ( a6 )
  {
    *(_OWORD *)(a1 + 20) = *(_OWORD *)a6;
  }
  else
  {
    *(_QWORD *)(a1 + 28) = 0LL;
    *(_QWORD *)(a1 + 20) = 0LL;
  }
  v11 = a1 + 48;
  *(_DWORD *)(a1 + 44) = a5;
  CMILMatrix::SetToIdentity((CMILMatrix *)(a1 + 48));
  CMILMatrix::SetToIdentity((CMILMatrix *)(a1 + 184));
  v14 = (float)((float)(v13[2] - *v13) * a4) + 6291456.25;
  v40 = v14;
  v15 = (int)(LODWORD(v14) << 10) >> 11;
  *(_DWORD *)(a1 + 36) = v15;
  v40 = (float)((float)(v13[3] - v13[1]) * a4) + 6291456.25;
  v16 = (int)(LODWORD(v40) << 10) >> 11;
  *(_DWORD *)(a1 + 40) = v16;
  if ( v10 )
  {
    v17 = (int)(LODWORD(v14) << 10) >> 11;
    if ( ((v12 - 2) & 0xFFFFFFFD) != 0 )
    {
      v15 = *a2;
      if ( v17 < *a2 )
        v15 = (int)(LODWORD(v14) << 10) >> 11;
      v18 = v16;
      *(_DWORD *)(a1 + 36) = v15;
      v16 = a2[1];
    }
    else
    {
      v15 = a2[1];
      if ( v17 < v15 )
        v15 = (int)(LODWORD(v14) << 10) >> 11;
      v18 = v16;
      *(_DWORD *)(a1 + 36) = v15;
      v16 = *a2;
    }
    if ( v18 < v16 )
      v16 = v18;
    *(_DWORD *)(a1 + 40) = v16;
  }
  v46 = (float)v15;
  v47 = (float)v16;
  CMILMatrix::InferAffineMatrix(v11, a3, &v44);
  v22 = *(_DWORD *)(v11 + 64);
  v23 = *(_OWORD *)(v11 + 16);
  *(_OWORD *)v24 = *(_OWORD *)v11;
  v25 = *(_OWORD *)(v11 + 32);
  *(_OWORD *)(v24 + 16) = v23;
  v26 = *(_OWORD *)(v11 + 48);
  *(_OWORD *)(v24 + 32) = v25;
  *(_OWORD *)(v24 + 48) = v26;
  *(_DWORD *)(v24 + 64) = v22;
  v28 = v27 - 2;
  if ( !v28 )
  {
    CMILMatrix::Rotate270(v20);
    v39 = *(_DWORD *)(a1 + 36);
    v38 = 0.0;
    goto LABEL_37;
  }
  v29 = v28 - 1;
  if ( !v29 )
  {
    CMILMatrix::Scale(v20, -1.0, -1.0, 1.0);
    v39 = *(_DWORD *)(a1 + 40);
    v38 = (float)*(int *)(a1 + 36);
LABEL_37:
    v37 = (float)v39;
    goto LABEL_38;
  }
  if ( v29 != 1 )
    goto LABEL_16;
  CMILMatrix::Rotate90(v20);
  v37 = 0.0;
  v38 = (float)*(int *)(a1 + 40);
LABEL_38:
  CMILMatrix::Translate((CMILMatrix *)v11, v38, v37);
LABEL_16:
  if ( a6 )
  {
    v48 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v11, a3, (float *)&v48);
    v30 = *a6;
    v43 = 0;
    v31 = (float)v30;
    v32 = a6[1];
    v44 = v31;
    v33 = (float)v32;
    v34 = (float)a6[2];
    v35 = a6[3];
    v45 = v33;
    v46 = v34;
    v47 = (float)v35;
    CMILMatrix::InferAffineMatrix(v42, &v48, &v44);
    CMILMatrix::Multiply((CMILMatrix *)v11, (const struct CMILMatrix *)v42);
  }
  *(_OWORD *)(a1 + 116) = *(_OWORD *)v11;
  *(_OWORD *)(a1 + 132) = *(_OWORD *)(v11 + 16);
  *(_OWORD *)(a1 + 148) = *(_OWORD *)(v11 + 32);
  *(_OWORD *)(a1 + 164) = *(_OWORD *)(v11 + 48);
  *(_DWORD *)(a1 + 180) = *(_DWORD *)(v11 + 64);
  CMILMatrix::Invert((CMILMatrix *)(a1 + 116), v19, v21);
  v36 = a6 && v10 && (*a6 || a6[1] || a6[2] != *a2 || a6[3] != a2[1]);
  *(_BYTE *)(a1 + 252) = v36;
  v48 = 0LL;
  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v11, (struct MilRectF *)(a1 + 4), (float *)&v48);
  *(_BYTE *)(a1 + 253) = IsPixelAligned((const struct MilRectF *)&v48);
  CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v11, &v40, v41);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v40 - a4) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(v41[0] - a4) & _xmm) > 0.0000011920929 )
  {
    v6 = 1;
  }
  *(_BYTE *)(a1 + 254) = v6;
}
