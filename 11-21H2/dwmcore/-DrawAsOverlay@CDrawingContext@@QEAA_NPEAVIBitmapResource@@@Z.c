/*
 * XREFs of ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z @ 0x1800B2A90
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180006310 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x1800978F0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?Draw@CBitmapRenderStrategy@@UEAAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800B28D0 (-Draw@CBitmapRenderStrategy@@UEAAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCD.c)
 * Callees:
 *     ?RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180004470 (-RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV-$TMilRect_@HUtagRECT@@UMilPoi.c)
 *     ?IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@U_LUID@@PEAUtagRECT@@2@Z @ 0x1800103B4 (-IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@U_LUID@@PEAUtagRECT@@2@Z.c)
 *     ?IsNormalDesktopRender@CDrawingContext@@QEBA_NXZ @ 0x180012BB8 (-IsNormalDesktopRender@CDrawingContext@@QEBA_NXZ.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180014578 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18003FA54 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800435E0 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006E4C8 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NA.c)
 *     ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x1800823C8 (-Subtract@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008AF20 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800B4B40 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800D2754 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CDrawingContext::DrawAsOverlay(COverlayContext **this, struct IBitmapResource *a2)
{
  char IsOverlayAssigned; // di
  __int64 v5; // rax
  int (__fastcall ***v6)(_QWORD, GUID *, _QWORD **); // rcx
  __int64 v7; // rcx
  bool IsNormalDesktopRender; // r15
  COverlayContext *v10; // rdi
  __int64 v11; // rax
  struct _LUID v12; // rbx
  const struct CVisual *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  void (__fastcall *v16)(struct IBitmapResource *, __int64, const struct CMILMatrix *); // rbx
  COverlayContext *v17; // rcx
  const struct CMILMatrix *TopByReference; // rax
  __int64 v19; // rdx
  struct tagRECT v20; // xmm0
  int (__fastcall ***v21)(_QWORD, GUID *, _QWORD *); // rcx
  int (__fastcall **v22)(_QWORD, GUID *, _QWORD *); // rax
  __int128 v23; // xmm0
  __int64 v24; // rcx
  __int64 v25; // rdx
  FastRegion::Internal::CRgnData *v26; // rcx
  _QWORD *v27; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v29; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v30[6]; // [rsp+50h] [rbp-B0h] BYREF
  struct tagRECT v31; // [rsp+80h] [rbp-80h] BYREF
  struct tagRECT v32; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v33[2]; // [rsp+A0h] [rbp-60h] BYREF
  struct tagRECT v34; // [rsp+B0h] [rbp-50h] BYREF
  FastRegion::Internal::CRgnData *v35[10]; // [rsp+C0h] [rbp-40h] BYREF
  const struct FastRegion::Internal::CRgnData *v36[10]; // [rsp+110h] [rbp+10h] BYREF

  v27 = 0LL;
  IsOverlayAssigned = 0;
  if ( this[6] )
  {
    v5 = *(_QWORD *)a2;
    v28 = 0LL;
    if ( (*(int (__fastcall **)(struct IBitmapResource *, __int64 *))(v5 + 56))(a2, &v28) >= 0 )
    {
      v6 = (int (__fastcall ***)(_QWORD, GUID *, _QWORD **))(*(int *)(*(_QWORD *)(v28 + 8) + 4LL) + v28 + 8);
      if ( (**v6)(v6, &GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c, &v27) >= 0 )
      {
        IsNormalDesktopRender = CDrawingContext::IsNormalDesktopRender((CDrawingContext *)this);
        if ( IsNormalDesktopRender
          && (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v27 + 64LL))(v27)
          && ((*(unsigned __int8 (__fastcall **)(COverlayContext *))(*(_QWORD *)this[4] + 8LL))(this[4])
           || (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v27 + 72LL))(v27))
          && (v10 = this[6],
              v32 = 0LL,
              v11 = *v27,
              v34 = 0LL,
              v12 = *(struct _LUID *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(v11 + 40))(v27, v33),
              v13 = (const struct CVisual *)(*((__int64 (__fastcall **)(char *))this[3] + 4))((char *)this + 24),
              (IsOverlayAssigned = COverlayContext::IsOverlayAssigned(v10, v13, v12, &v32, &v34)) != 0) )
        {
          LOBYTE(v14) = IsNormalDesktopRender;
          (*(void (__fastcall **)(struct IBitmapResource *, __int64, __int64))(*(_QWORD *)a2 + 40LL))(a2, v14, 1LL);
          v16 = *(void (__fastcall **)(struct IBitmapResource *, __int64, const struct CMILMatrix *))(*(_QWORD *)a2 + 48LL);
          v17 = (COverlayContext *)((char *)this[4] + *(int *)(*((_QWORD *)this[4] + 1) + 12LL) + 8);
          (**(void (__fastcall ***)(COverlayContext *, _QWORD *))v17)(v17, v33);
          TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(this + 46));
          LOBYTE(v19) = IsNormalDesktopRender;
          v16(a2, v19, TopByReference);
          LODWORD(v30[0]) = 20;
          memset((char *)v30 + 4, 0, 36);
          HIDWORD(v30[1]) = 1;
          HIDWORD(v30[2]) = 1;
          if ( (int)CDrawingContext::PushRenderOptionsInternal(
                      (CDrawingContext *)this,
                      0LL,
                      (const struct MilRenderOptions *)v30,
                      1) >= 0 )
          {
            v20 = v34;
            ++*((_DWORD *)this + 156);
            v31 = v20;
            TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v31.left, &v32.left);
            v29 = 0LL;
            if ( CCommonRegistryData::m_dwOverlayTestMode )
            {
              v21 = (int (__fastcall ***)(_QWORD, GUID *, _QWORD *))((char *)v27 + *(int *)(v27[1] + 4LL) + 8);
              v22 = *v21;
              v33[0] = 0LL;
              if ( (*v22)(v21, &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6, v33) < 0 )
                v23 = *((_BYTE *)this[6] + 11297) ? _xmm : _xmm;
              else
                v23 = _xmm;
              v29 = v23;
              if ( v33[0] )
              {
                v24 = *(int *)(*(_QWORD *)(v33[0] + 8LL) + 4LL) + v33[0] + 8LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
              }
            }
            CDrawingContext::RenderOverlayColor((CDrawingContext *)this, (__int64)&v29, (__int64)&v31);
            FastRegion::CRegion::CRegion((FastRegion::CRegion *)v36, &v34);
            FastRegion::CRegion::CRegion((FastRegion::CRegion *)v35, &v32);
            CRegion::Subtract(v35, v36);
            FastRegion::Internal::CRgnData::BeginIterator(v35[0], (struct FastRegion::CRegion::Iterator *)v30);
            while ( v30[2] < v30[1] )
            {
              v32.top = *(_DWORD *)v30[2];
              v32.bottom = *(_DWORD *)(v30[2] + 8LL);
              v25 = 2 * LODWORD(v30[4]);
              v32.left = *(_DWORD *)(v30[3] + 4 * v25);
              v32.right = *(_DWORD *)(v30[3] + 4 * v25 + 4);
              CDrawingContext::RenderOverlayColor((CDrawingContext *)this, (__int64)&stru_180377378, (__int64)&v32);
              FastRegion::Internal::CRgnData::StepIterator(v26, (struct FastRegion::CRegion::Iterator *)v30);
            }
            --*((_DWORD *)this + 156);
            CDrawingContext::PopRenderOptionsInternal((CDrawingContext *)this, 1);
            FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v35);
            FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v36);
          }
        }
        else
        {
          IsOverlayAssigned = (*(__int64 (__fastcall **)(_QWORD *))(*v27 + 72LL))(v27);
        }
      }
    }
    if ( v27 )
    {
      v15 = (__int64)v27 + *(int *)(v27[1] + 4LL) + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    if ( v28 )
    {
      v7 = *(int *)(*(_QWORD *)(v28 + 8) + 4LL) + v28 + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  return IsOverlayAssigned;
}
