/*
 * XREFs of ?DrawMesh2D@CGlobalDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x1801B6030
 * Callers:
 *     <none>
 * Callees:
 *     ?FillEffect@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x18000EE70 (-FillEffect@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POI.c)
 *     ??1CTryIgnoreCpuClippingScope@CDrawingContext@@QEAA@XZ @ 0x1800128BC (--1CTryIgnoreCpuClippingScope@CDrawingContext@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002731C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180029388 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18002E72C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18006BE74 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006D350 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18008F058 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800BE080 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800C160C (-Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV-$TMil3DRect@MV-$TMilRect_@MUM.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x18012D0D6 (McTemplateU0qq_EventWriteTransfer.c)
 *     McTemplateU0ffff_EventWriteTransfer @ 0x18012DF28 (McTemplateU0ffff_EventWriteTransfer.c)
 *     ?RecordBitmapRealizationInfo@CDrawingContext@@QEAAXPEAVIBitmapRealization@@@Z @ 0x1801D65AC (-RecordBitmapRealizationInfo@CDrawingContext@@QEAAXPEAVIBitmapRealization@@@Z.c)
 *     ?RecordBitmapResourceInfo@CDrawingContext@@QEBAXPEAVIBitmapResource@@@Z @ 0x1801D66F8 (-RecordBitmapResourceInfo@CDrawingContext@@QEBAXPEAVIBitmapResource@@@Z.c)
 *     ?GetMeshData@CGeometry2D@@QEAAJQEAPEBUMilVertexXYZDUV2@@PEAIQEAPEBI1@Z @ 0x18021A54C (-GetMeshData@CGeometry2D@@QEAAJQEAPEBUMilVertexXYZDUV2@@PEAIQEAPEBI1@Z.c)
 *     ?GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x180286EB0 (-GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z.c)
 */

__int64 __fastcall CGlobalDrawingContext::DrawMesh2D(__m128 *this, struct CGeometry2D *a2, struct CImageSource *a3)
{
  int v3; // edi
  struct ID2D1Effect *v4; // rsi
  int v8; // ebx
  int v9; // eax
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  float v15; // xmm15_4
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  struct IBitmapRealization *v20; // rbx
  char *v21; // rcx
  char v22; // di
  __int64 v23; // r9
  int v24; // eax
  __int64 v25; // rcx
  int MeshData; // eax
  __int64 v27; // rcx
  unsigned int v28; // r14d
  __int64 v29; // rdi
  LPVOID v30; // rax
  __int64 v31; // rcx
  void *v32; // rbx
  unsigned int *v33; // r8
  _OWORD *v34; // rcx
  struct MilVertexXYZDUV2 *v35; // r9
  __int64 v36; // rax
  __int128 v37; // xmm1
  int CachedEffectNoRef; // eax
  __int64 v39; // rcx
  float v40; // xmm6_4
  float v41; // xmm13_4
  float v42; // xmm14_4
  float v43; // xmm12_4
  float v44; // xmm7_4
  float v45; // xmm6_4
  float v46; // xmm7_4
  float v47; // xmm8_4
  float v48; // xmm9_4
  float v49; // xmm10_4
  float v50; // xmm11_4
  int v51; // eax
  __int64 v52; // rcx
  int v53; // eax
  __int64 v54; // rcx
  int v55; // eax
  __int64 v56; // rcx
  enum D2D1_COMPOSITE_MODE v57; // r8d
  int v58; // eax
  __int64 v59; // rcx
  int v61; // [rsp+28h] [rbp-E0h]
  int v62; // [rsp+30h] [rbp-D8h]
  unsigned int v63[2]; // [rsp+48h] [rbp-C0h] BYREF
  struct IBitmapRealization *v64; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v65; // [rsp+58h] [rbp-B0h] BYREF
  CDrawingContext *v66; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v67[2]; // [rsp+68h] [rbp-A0h] BYREF
  struct ID2D1Effect *v68; // [rsp+70h] [rbp-98h] BYREF
  unsigned int *v69; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v70[16]; // [rsp+88h] [rbp-80h] BYREF
  int v71; // [rsp+C8h] [rbp-40h]
  struct MilVertexXYZDUV2 *v72[2]; // [rsp+D8h] [rbp-30h] BYREF
  float v73; // [rsp+E8h] [rbp-20h]
  float v74; // [rsp+ECh] [rbp-1Ch]
  __int128 v75; // [rsp+F0h] [rbp-18h] BYREF
  _OWORD v76[4]; // [rsp+108h] [rbp+0h] BYREF

  v3 = 0;
  v4 = 0LL;
  v63[0] = 0;
  v68 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (__int64)&EVTDESC_ETWGUID_DRAWEVENT_Start);
  if ( a2 )
  {
    if ( a3 )
    {
      v8 = (*(__int64 (__fastcall **)(struct CGeometry2D *))(*(_QWORD *)a2 + 184LL))(a2);
      v9 = (*(__int64 (__fastcall **)(struct CGeometry2D *))(*(_QWORD *)a2 + 192LL))(a2);
      if ( v8 )
      {
        if ( v9 )
        {
          CDrawingContext::RecordBitmapResourceInfo(
            (CDrawingContext *)&this[-1],
            (struct CImageSource *)((char *)a3 + *(int *)(*((_QWORD *)a3 + 8) + 8LL) + 64));
          v10 = (__int64 *)((char *)a3 + *(int *)(*((_QWORD *)a3 + 8) + 8LL) + 64);
          v11 = *v10;
          v64 = 0LL;
          v12 = (*(__int64 (__fastcall **)(__int64 *, struct IBitmapRealization **))(v11 + 64))(v10, &v64);
          v63[0] = v12;
          v3 = v12;
          if ( v12 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xC8u, 0LL);
          }
          else
          {
            v14 = *(_QWORD *)a2;
            v75 = 0LL;
            (*(void (__fastcall **)(struct CGeometry2D *, __int128 *))(v14 + 200))(a2, &v75);
            v73 = 0.0;
            v74 = 0.0;
            v66 = 0LL;
            v15 = 0.0;
            *(_OWORD *)v72 = v75;
            v16 = CDrawingContext::CTryIgnoreCpuClippingScope::Enter(
                    (__int64 *)&v66,
                    (__int64)&this[-1],
                    (__int64)v72,
                    0LL);
            v63[0] = v16;
            v3 = v16;
            if ( v16 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0xD0u, 0LL);
            }
            else
            {
              v18 = CDrawingContext::ApplyRenderStateInternal(this - 1, 0);
              v63[0] = v18;
              v3 = v18;
              if ( v18 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0xD1u, 0LL);
              }
              else
              {
                CDrawingContext::RecordBitmapRealizationInfo((CDrawingContext *)&this[-1], v64);
                if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT) )
                {
                  v71 = 0;
                  *(_OWORD *)v72 = 0LL;
                  CMatrixStack::Top((CMatrixStack *)&this[24], (struct CMILMatrix *)v70);
                  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v70, (struct MilRectF *)&v75, (float *)v72);
                  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
                  {
                    v62 = HIDWORD(v72[1]);
                    v61 = (int)v72[1];
                    McTemplateU0ffff_EventWriteTransfer(
                      (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
                      (__int64)&EVTDESC_ETWGUID_DRAWEVENT);
                  }
                }
                v65 = 0LL;
                v20 = v64;
                v72[0] = *(struct MilVertexXYZDUV2 **)(*(_QWORD *)v64 + 56LL);
                v21 = (char *)a3 + *(int *)(*((_QWORD *)a3 + 8) + 8LL) + 64;
                v22 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v21 + 16LL))(v21);
                if ( v65 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
                LOBYTE(v23) = v22;
                v24 = ((__int64 (__fastcall *)(struct IBitmapRealization *, unsigned __int16 *, __int64 *, __int64, int, int))v72[0])(
                        v20,
                        &this[2].m128_u16[4],
                        &v65,
                        v23,
                        v61,
                        v62);
                v63[0] = v24;
                v3 = v24;
                if ( v24 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0xE6u, 0LL);
                }
                else
                {
                  v72[0] = 0LL;
                  v63[0] = 0;
                  v69 = 0LL;
                  v67[0] = 0;
                  MeshData = CGeometry2D::GetMeshData(a2, v72, v63, (const unsigned int **const)&v69, v67);
                  v63[0] = MeshData;
                  v3 = MeshData;
                  if ( MeshData < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, MeshData, 0xF1u, 0LL);
                  }
                  else
                  {
                    v28 = v67[0];
                    v29 = v67[0];
                    v30 = DefaultHeap::Alloc(saturated_mul(v67[0], 0x20uLL));
                    v32 = v30;
                    if ( v30 )
                    {
                      if ( v28 )
                      {
                        v33 = v69;
                        v34 = v30;
                        v35 = v72[0];
                        do
                        {
                          v36 = *v33++;
                          v36 *= 32LL;
                          v37 = *(_OWORD *)((char *)v35 + v36 + 16);
                          *v34 = *(_OWORD *)((char *)v35 + v36);
                          v34[1] = v37;
                          v34 += 2;
                          --v29;
                        }
                        while ( v29 );
                      }
                      CachedEffectNoRef = CD2DContext::GetCachedEffectNoRef(this[1].m128_u64[1] + 16, 4LL, &v68);
                      v63[0] = CachedEffectNoRef;
                      v3 = CachedEffectNoRef;
                      if ( CachedEffectNoRef < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, CachedEffectNoRef, 0xFCu, 0LL);
                        operator delete(v32);
                        wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(&v65);
                        CDrawingContext::CTryIgnoreCpuClippingScope::~CTryIgnoreCpuClippingScope(&v66);
                        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v64);
                        v4 = v68;
                        goto LABEL_45;
                      }
                      v40 = 0.0;
                      v41 = 0.0;
                      v42 = 0.0;
                      LODWORD(v43) = (_DWORD)FLOAT_1_0;
                      v76[0] = _xmm;
                      LODWORD(v44) = (_DWORD)FLOAT_1_0;
                      v76[1] = _xmm;
                      v76[2] = _xmm;
                      v76[3] = _xmm;
                      v71 = 0;
                      if ( (*(unsigned __int8 (__fastcall **)(struct IBitmapRealization *, _DWORD *, _QWORD))(*(_QWORD *)v64 + 8LL))(
                             v64,
                             v70,
                             0LL) )
                      {
                        v45 = *(float *)v70;
                        v46 = *(float *)&v70[1];
                        v47 = *(float *)&v70[4];
                        v48 = *(float *)&v70[5];
                        v49 = *(float *)&v70[12];
                        v50 = *(float *)&v70[13];
                        (**(void (__fastcall ***)(struct IBitmapRealization *, struct MilVertexXYZDUV2 **))v64)(
                          v64,
                          v72);
                        v15 = (float)SHIDWORD(v72[0]) * v46;
                        v44 = (float)SHIDWORD(v72[0]) * v48;
                        v43 = (float)SLODWORD(v72[0]) * v45;
                        v40 = (float)SLODWORD(v72[0]) * v47;
                        v41 = (float)SLODWORD(v72[0]) * v49;
                        v42 = (float)SHIDWORD(v72[0]) * v50;
                      }
                      v4 = v68;
                      v51 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, _OWORD *, int))(*(_QWORD *)v68 + 72LL))(
                              v68,
                              0LL,
                              0LL,
                              v76,
                              64);
                      v63[0] = v51;
                      v3 = v51;
                      if ( v51 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, v51, 0x113u, 0LL);
                      }
                      else
                      {
                        v72[0] = (struct MilVertexXYZDUV2 *)__PAIR64__(LODWORD(v15), LODWORD(v43));
                        v72[1] = (struct MilVertexXYZDUV2 *)__PAIR64__(LODWORD(v44), LODWORD(v40));
                        v73 = v41;
                        v74 = v42;
                        v53 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, struct MilVertexXYZDUV2 **, int))(*(_QWORD *)v4 + 72LL))(
                                v4,
                                1LL,
                                0LL,
                                v72,
                                24);
                        v63[0] = v53;
                        v3 = v53;
                        if ( v53 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v53, 0x116u, 0LL);
                        }
                        else
                        {
                          (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, __int64, __int64))(*(_QWORD *)v4 + 112LL))(
                            v4,
                            0LL,
                            v65,
                            1LL);
                          v55 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, const wchar_t *, _QWORD, void *, unsigned int))(*(_QWORD *)v4 + 64LL))(
                                  v4,
                                  L"vertices",
                                  0LL,
                                  v32,
                                  32 * v28);
                          v63[0] = v55;
                          v3 = v55;
                          if ( v55 < 0 )
                          {
                            MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, v55, 0x11Du, 0LL);
                          }
                          else
                          {
                            v57 = D2D1_COMPOSITE_MODE_MASK_INVERT;
                            if ( this[21].m128_i32[2] != 2 )
                              v57 = D2D1_COMPOSITE_MODE_SOURCE_OVER;
                            v58 = CD2DContext::FillEffect(
                                    (ID2D1DeviceContext **)(this[1].m128_u64[1] + 16),
                                    (const struct ID2DContextOwner *)((unsigned __int64)&this->m128_u64[1] & -(__int64)(this != (__m128 *)16)),
                                    v4,
                                    0LL,
                                    0LL,
                                    D2D1_INTERPOLATION_MODE_LINEAR,
                                    v57);
                            v63[0] = v58;
                            v3 = v58;
                            if ( v58 < 0 )
                              MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0, v58, 0x124u, 0LL);
                          }
                        }
                      }
                      operator delete(v32);
                    }
                    else
                    {
                      v3 = -2147024882;
                      v63[0] = -2147024882;
                      MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, -2147024882, 0xF4u, 0LL);
                    }
                  }
                }
                wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(&v65);
              }
            }
            CDrawingContext::CTryIgnoreCpuClippingScope::~CTryIgnoreCpuClippingScope(&v66);
          }
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v64);
        }
      }
    }
  }
LABEL_45:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (__int64)&EVTDESC_ETWGUID_DRAWEVENT_Stop);
  if ( v4 )
    (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, __int64))(*(_QWORD *)v4 + 112LL))(v4, 0LL, 0LL, 1LL);
  TranslateDXGIorD3DErrorInContext(v3, 0, v63);
  return v63[0];
}
