/*
 * XREFs of ?RenderAdditionalTopmostContent@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801C5564
 * Callers:
 *     ?Render@CCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C53B8 (-Render@CCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180049214 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004AFB8 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x18007E114 (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18007E408 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800DCDBC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     CComposition::ForEachCursorVisualReference__lambda_c2c4320ca1e41092fdbc0b7f07aa0d93___ @ 0x180103A80 (CComposition--ForEachCursorVisualReference__lambda_c2c4320ca1e41092fdbc0b7f07aa0d93___.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetRootVisualTree@CVisualTree@@QEBAPEAV1@XZ @ 0x1801FB128 (-GetRootVisualTree@CVisualTree@@QEBAPEAV1@XZ.c)
 */

__int64 __fastcall CCaptureRenderTarget::RenderAdditionalTopmostContent(
        CCaptureRenderTarget *this,
        struct CDrawingContext *a2)
{
  unsigned int v2; // ebx
  __int128 v3; // rdi
  CVisualTree *v4; // r14
  const struct CVisualTree *RootVisualTree; // r15
  CTransform3D *v6; // rcx
  const struct CMILMatrix *Matrix; // rax
  CVisual *v8; // rcx
  int WorldTransform; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct Windows::Foundation::Numerics::float4x4 *v12; // r8
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r14
  __int64 v16; // rcx
  struct IDeviceTarget *v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  __int64 *v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rcx
  __m256i v28; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v29; // [rsp+78h] [rbp-90h]
  __int128 v30; // [rsp+88h] [rbp-80h]
  int v31; // [rsp+98h] [rbp-70h]
  __int128 v32; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v33; // [rsp+B8h] [rbp-50h]
  __int128 v34; // [rsp+C8h] [rbp-40h]
  __int128 v35; // [rsp+D8h] [rbp-30h]
  int v36; // [rsp+E8h] [rbp-20h]
  struct _D3DCOLORVALUE v37; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v38; // [rsp+108h] [rbp+0h] BYREF
  const struct CVisualTree *v39; // [rsp+118h] [rbp+10h]

  v2 = 0;
  *((_QWORD *)&v3 + 1) = a2;
  *(_QWORD *)&v3 = this;
  if ( *((_DWORD *)this + 438) == 1 )
  {
    v4 = (CVisualTree *)*((_QWORD *)this + 12);
    RootVisualTree = CVisualTree::GetRootVisualTree(v4);
    if ( RootVisualTree != v4 )
    {
      v36 = 0;
      v6 = *(CTransform3D **)(v3 + 152);
      if ( v6 )
      {
        Matrix = CTransform3D::GetMatrix(v6, 0LL);
        v4 = *(CVisualTree **)(v3 + 96);
        v32 = *(_OWORD *)Matrix;
        v33 = *((_OWORD *)Matrix + 1);
        v34 = *((_OWORD *)Matrix + 2);
        v35 = *((_OWORD *)Matrix + 3);
        v36 = *((_DWORD *)Matrix + 16);
      }
      else
      {
        v32 = _xmm;
        v33 = _xmm;
        BYTE1(v36) = BYTE1(v36) & 0xC0 | 0x17;
        v34 = _xmm;
        v35 = _xmm;
        LOBYTE(v36) = 85;
      }
      v8 = (CVisual *)*((_QWORD *)v4 + 8);
      v31 = 0;
      WorldTransform = CVisual::GetWorldTransform(v8, RootVisualTree, 0, (__int64)&v28, 0LL, 0LL);
      v2 = WorldTransform;
      if ( WorldTransform < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, WorldTransform, 0xE4u);
      }
      else
      {
        if ( !CMILMatrix::Invert((CMILMatrix *)&v28, v10, v12) )
        {
          *(_OWORD *)v28.m256i_i8 = _xmm;
          *(_OWORD *)&v28.m256i_u64[2] = _xmm;
          BYTE1(v31) = BYTE1(v31) & 0xC0 | 0x17;
          v29 = _xmm;
          v30 = _xmm;
          LOBYTE(v31) = 85;
        }
        CMILMatrix::Multiply((CMILMatrix *)&v32, (const struct CMILMatrix *)&v28, v13, v14);
        v15 = 0LL;
        *(struct _D3DCOLORVALUE *)&v37.r = *(struct _D3DCOLORVALUE *)(v3 + 124);
        if ( *(_DWORD *)(v3 + 1784) )
        {
          while ( 1 )
          {
            v16 = *(_QWORD *)(*(_QWORD *)(v3 + 1760) + 8 * v15);
            v17 = (struct IDeviceTarget *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 64LL))(v16);
            v18 = CDrawingContext::BeginFrame(
                    *((CDrawingContext **)&v3 + 1),
                    v17,
                    (const struct CMILMatrix *)&v32,
                    &v37,
                    0LL);
            v2 = v18;
            if ( v18 < 0 )
              break;
            v20 = *(_QWORD *)(v3 + 16);
            v38 = v3;
            v39 = RootVisualTree;
            v21 = CComposition::ForEachCursorVisualReference__lambda_c2c4320ca1e41092fdbc0b7f07aa0d93___(
                    v20,
                    (__int64)&v38);
            v2 = v21;
            if ( v21 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0LL, v21, 0x116u);
              goto LABEL_17;
            }
            v23 = *(__int64 **)(v3 + 16);
            v24 = *v23;
            v28.m256i_i64[0] = (__int64)off_1802C4B98;
            *((_QWORD *)&v30 + 1) = &v28;
            *(_OWORD *)&v28.m256i_u64[1] = v3;
            v28.m256i_i64[3] = (__int64)RootVisualTree;
            v25 = (*(__int64 (__fastcall **)(__int64 *, __m256i *))(v24 + 80))(v23, &v28);
            v2 = v25;
            if ( v25 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0LL, v25, 0x133u);
LABEL_17:
              CDrawingContext::EndFrame(*((CD3DDevice ***)&v3 + 1));
              return v2;
            }
            CDrawingContext::EndFrame(*((CD3DDevice ***)&v3 + 1));
            v15 = (unsigned int)(v15 + 1);
            if ( (unsigned int)v15 >= *(_DWORD *)(v3 + 1784) )
              return v2;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0LL, v18, 0xF5u);
        }
      }
    }
  }
  return v2;
}
