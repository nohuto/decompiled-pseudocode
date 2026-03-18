/*
 * XREFs of ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x1800AE77C
 * Callers:
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x180055810 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRect.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180072EA0 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x1801D3348 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1801D3E80 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1801D42C4 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?Draw@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180225600 (-Draw@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18002E72C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x180054F50 (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 *     ?ApplyDeferredD2DLayersInScope@CScopedClipStack@@QEAAJPEAVCDrawingContext@@@Z @ 0x18006EC10 (-ApplyDeferredD2DLayersInScope@CScopedClipStack@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCD2DLayer@@@Z @ 0x180073F64 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCD2DLayer@@@Z.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007DE2C (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x1800AEA10 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ??_GCD2DLayer@@UEAAPEAXI@Z @ 0x1800DB6D0 (--_GCD2DLayer@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x18012DB24 (McTemplateU0q_EventWriteTransfer.c)
 *     ?SetDeferredD2DLayerForTopCpuClip@CScopedClipStack@@QEAAXPEAVCD2DLayer@@@Z @ 0x1801DA774 (-SetDeferredD2DLayerForTopCpuClip@CScopedClipStack@@QEAAXPEAVCD2DLayer@@@Z.c)
 */

__int64 __fastcall CDrawingContext::PushD2DLayer(
        struct CDrawingContext *a1,
        const struct CVisual *a2,
        __int128 *a3,
        __int64 a4,
        __int64 a5,
        float a6,
        char a7,
        unsigned int a8)
{
  char *v8; // rbx
  __int64 v9; // rdx
  int v11; // esi
  __int64 v12; // rax
  int v13; // r13d
  char v14; // r15
  __int64 (__fastcall ***v17)(_QWORD, _BYTE *); // rcx
  struct CD2DLayer *v18; // rcx
  struct CObjectCache *ObjectCache; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // edx
  struct CLayer *v23; // rsi
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  BOOL v32; // [rsp+34h] [rbp-4Ch]
  __int128 v34; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v35[16]; // [rsp+50h] [rbp-30h] BYREF

  v8 = 0LL;
  v9 = *((_QWORD *)a1 + 4);
  v32 = *((_DWORD *)a1 + 84) != 0;
  v11 = 0;
  v12 = *(_QWORD *)(v9 + 8);
  v13 = 0;
  v34 = 0LL;
  v14 = 0;
  v17 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(v9 + 8 + *(int *)(v12 + 12));
  if ( *(_DWORD *)((**v17)(v17, v35) + 4) == 3 )
  {
    v11 = 3;
  }
  else if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a6 - 1.0) & _xmm) < 0.0000011920929 )
  {
    v11 = 1;
    v13 = 1;
  }
  if ( a3 )
    v34 = *a3;
  else
    CDrawingContext::GetClipBoundsWorld((__int64)a1, (float *)&v34);
  if ( *((float *)&v34 + 2) <= *(float *)&v34 || *((float *)&v34 + 3) <= *((float *)&v34 + 1) )
  {
    *((_QWORD *)&v34 + 1) = a2;
    LODWORD(v34) = 7;
    CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((unsigned int *)a1 + 92, &v34);
    return (unsigned int)v8;
  }
  ObjectCache = CThreadContext::GetObjectCache(v18);
  v22 = *((_DWORD *)ObjectCache + 1);
  if ( v22 )
  {
    v8 = (char *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v8;
    *((_DWORD *)ObjectCache + 1) = v22 - 1;
  }
  if ( !v8 )
  {
    v8 = (char *)DefaultHeap::Alloc(0x50uLL);
    if ( !v8 )
    {
      LODWORD(v8) = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, -2147024882, 0x1Du, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, -2147024882, 0xFC0u, 0LL);
      return (unsigned int)v8;
    }
  }
  *(_QWORD *)v8 = &CD2DLayer::`vftable';
  *(_OWORD *)(v8 + 8) = v34;
  *((_QWORD *)v8 + 3) = a4;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  *((_DWORD *)v8 + 14) = v32;
  *((float *)v8 + 17) = a6;
  v8[72] = a5 != 0;
  *((_DWORD *)v8 + 15) = v11;
  *((_DWORD *)v8 + 16) = v13;
  if ( a5 )
  {
    *((_OWORD *)v8 + 2) = *(_OWORD *)a5;
    *((_QWORD *)v8 + 6) = *(_QWORD *)(a5 + 16);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0q_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_D2DLAYERCREATEREASON,
      a8);
  v23 = (struct CLayer *)v8;
  if ( a7 && a4 && COERCE_FLOAT(COERCE_UNSIGNED_INT(a6 - 1.0) & _xmm) < 0.0000011920929 )
  {
    v24 = *((_QWORD *)a1 + 346);
    if ( *(_QWORD *)(v24 - 16) )
      --*(_QWORD *)(*((_QWORD *)a1 + 113) - 160LL);
    *(_QWORD *)(v24 - 16) = v8;
    v14 = 1;
    ++*(_QWORD *)(*((_QWORD *)a1 + 113) - 160LL);
  }
  else
  {
    v28 = CScopedClipStack::ApplyDeferredD2DLayersInScope((struct CDrawingContext *)((char *)a1 + 896), a1, v20, v21);
    LODWORD(v8) = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0xFD3u, 0LL);
      goto LABEL_32;
    }
  }
  v25 = CDrawingContext::PushLayer(a1, a2, v23, v14 != 1, 1);
  LODWORD(v8) = v25;
  if ( v25 >= 0 )
    return (unsigned int)v8;
  MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0xFDAu, 0LL);
LABEL_32:
  if ( v14 )
    CScopedClipStack::SetDeferredD2DLayerForTopCpuClip((struct CDrawingContext *)((char *)a1 + 896), 0LL);
  CD2DLayer::`scalar deleting destructor'(v23, 1u);
  return (unsigned int)v8;
}
