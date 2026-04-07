/*
 * XREFs of ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18009FF08
 * Callers:
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800179D4 (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18009E580 (-EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000CD38 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ??$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18000DBA0 (--$CreateProxy@VCRectangleGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ??$CreateProxy@VCScaleTransformProxy@@@CCompositor@@IEAAJPEAPEAVCScaleTransformProxy@@@Z @ 0x18000E2FC (--$CreateProxy@VCScaleTransformProxy@@@CCompositor@@IEAAJPEAPEAVCScaleTransformProxy@@@Z.c)
 *     ??$CreateProxy@VCEffectGroupProxy@@@CCompositor@@IEAAJPEAPEAVCEffectGroupProxy@@@Z @ 0x180026110 (--$CreateProxy@VCEffectGroupProxy@@@CCompositor@@IEAAJPEAPEAVCEffectGroupProxy@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x180046D3C (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ??$CreateProxy@VCRotateTransformProxy@@@CCompositor@@IEAAJPEAPEAVCRotateTransformProxy@@@Z @ 0x1800A8D68 (--$CreateProxy@VCRotateTransformProxy@@@CCompositor@@IEAAJPEAPEAVCRotateTransformProxy@@@Z.c)
 *     ??$CreateProxy@VCTransformGroupProxy@@@CCompositor@@IEAAJPEAPEAVCTransformGroupProxy@@@Z @ 0x1800A8FB8 (--$CreateProxy@VCTransformGroupProxy@@@CCompositor@@IEAAJPEAPEAVCTransformGroupProxy@@@Z.c)
 *     ??$CreateProxy@VCTranslateTransformProxy@@@CCompositor@@IEAAJPEAPEAVCTranslateTransformProxy@@@Z @ 0x1800A90E0 (--$CreateProxy@VCTranslateTransformProxy@@@CCompositor@@IEAAJPEAPEAVCTranslateTransformProxy@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_EnsureDCompResources(CAnimatedTransitionVisual *this)
{
  unsigned int v2; // ebx
  volatile signed __int32 *v3; // rsi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  struct CVisual **v10; // r14
  int v11; // eax
  int v12; // eax
  int inserted; // eax
  int v14; // eax

  v2 = 0;
  v3 = 0LL;
  if ( !*((_QWORD *)this + 84) )
  {
    v4 = CCompositor::CreateProxy<CEffectGroupProxy>(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
           (__int64 *)this + 84);
    v2 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x5A1u);
      return v2;
    }
  }
  if ( !*((_QWORD *)this + 85) )
  {
    v5 = CCompositor::CreateProxy<CScaleTransformProxy>(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
           (CBaseObject **)this + 85);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x5A6u);
      return v2;
    }
  }
  if ( !*((_QWORD *)this + 86) )
  {
    v6 = CCompositor::CreateProxy<CTranslateTransformProxy>(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
           (char *)this + 688);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x5ABu);
      return v2;
    }
  }
  if ( !*((_QWORD *)this + 87) )
  {
    v7 = CCompositor::CreateProxy<CRotateTransformProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5));
    v2 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x5B0u);
      return v2;
    }
  }
  if ( !*((_QWORD *)this + 88) )
  {
    v8 = CCompositor::CreateProxy<CTransformGroupProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5));
    v2 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x5B5u);
      return v2;
    }
  }
  if ( !*((_QWORD *)this + 89) )
  {
    v9 = CCompositor::CreateProxy<CRectangleGeometryProxy>(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
           (CBaseObject **)this + 89);
    v2 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x5BAu);
      return v2;
    }
  }
  v10 = (struct CVisual **)((char *)this + 728);
  if ( *((_QWORD *)this + 91) )
    return v2;
  v11 = CRenderDataVisual::Create((struct CRenderDataVisual **)this + 91);
  v2 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x5BFu);
    return v2;
  }
  if ( *((_BYTE *)this + 975) )
  {
    v3 = (volatile signed __int32 *)**((_QWORD **)this + 7);
    if ( v3 )
    {
      _InterlockedIncrement(v3 + 2);
      v12 = VisualCollection::Remove((CAnimatedTransitionVisual *)((char *)this + 40), (struct CVisual *)v3);
      v2 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x5C7u);
        goto LABEL_33;
      }
      inserted = VisualCollection::InsertRelative(
                   (struct CVisual *)((char *)*v10 + 32),
                   (struct CVisual *)v3,
                   0LL,
                   0,
                   1);
      v2 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x5C8u);
LABEL_33:
        CBaseObject::Release((CBaseObject *)v3);
        return v2;
      }
    }
  }
  v14 = VisualCollection::InsertRelative((CAnimatedTransitionVisual *)((char *)this + 40), *v10, 0LL, 0, 1);
  v2 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x5CCu);
  if ( v3 )
    goto LABEL_33;
  return v2;
}
