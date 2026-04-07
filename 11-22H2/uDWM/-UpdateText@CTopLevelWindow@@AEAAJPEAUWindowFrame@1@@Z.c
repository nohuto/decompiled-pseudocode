/*
 * XREFs of ?UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z @ 0x180023808
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180026220 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?Create@CDWriteText@@SAJPEAPEAV1@@Z @ 0x180018A94 (-Create@CDWriteText@@SAJPEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180050730 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?TreatAsActiveWindow@CTopLevelWindow@@AEBA_NXZ @ 0x180051BBC (-TreatAsActiveWindow@CTopLevelWindow@@AEBA_NXZ.c)
 *     ?GetCaptionColor@CTopLevelWindow@@AEBAKXZ @ 0x180051CE4 (-GetCaptionColor@CTopLevelWindow@@AEBAKXZ.c)
 *     ?GetNonClientCaptionFont@CWindowData@@QEAAXPEAUtagLOGFONTW@@@Z @ 0x180052A10 (-GetNonClientCaptionFont@CWindowData@@QEAAXPEAUtagLOGFONTW@@@Z.c)
 *     ?BlendColors@@YAKKKM@Z @ 0x180053614 (-BlendColors@@YAKKKM@Z.c)
 *     ?SetRTLMirror@CVisual@@QEAAX_N@Z @ 0x180054C88 (-SetRTLMirror@CVisual@@QEAAX_N@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DWriteTitlebarText@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180054FD8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DWriteTitlebarText@@@details@wil@@QEAAX_N.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     memset_0 @ 0x18005D340 (memset_0.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x18006BC34 (-GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CTopLevelWindow::UpdateText(CTopLevelWindow *this, struct CTopLevelWindow::WindowFrame *a2)
{
  unsigned int v4; // edi
  struct CVisual *v5; // rdx
  __int64 CaptionColor; // rsi
  __int64 v8; // rdx
  unsigned int v9; // r8d
  __int64 v10; // rdx
  __int64 v11; // rdx
  int v12; // eax
  CBaseObject *v13; // rdx
  int inserted; // eax
  int v15; // eax
  int v16; // eax
  CBaseObject *v17; // rcx
  __int64 v18; // rcx
  unsigned int v19; // [rsp+20h] [rbp-A8h]
  CBaseObject *v20; // [rsp+30h] [rbp-98h] BYREF
  tagLOGFONTW v21; // [rsp+40h] [rbp-88h] BYREF

  v4 = 0;
  v5 = (struct CVisual *)*((_QWORD *)this + 70);
  if ( (*((_BYTE *)this + 624) & 8) == 0 )
  {
    if ( v5 )
    {
      v16 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 38) + 32LL), v5);
      v4 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x1AB6u, 0LL);
      }
      else
      {
        v17 = (CBaseObject *)*((_QWORD *)this + 70);
        if ( v17 )
        {
          CBaseObject::Release(v17);
          *((_QWORD *)this + 70) = 0LL;
        }
        *((_QWORD *)this + 71) = 0LL;
      }
    }
    return v4;
  }
  if ( v5 )
    goto LABEL_5;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWriteTitlebarText>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_DWriteTitlebarText>::GetImpl'::`2'::impl,
    1LL);
  v20 = 0LL;
  v12 = CDWriteText::Create(&v20);
  v4 = v12;
  if ( v12 >= 0 )
  {
    v13 = v20;
    *((_QWORD *)this + 71) = ((unsigned __int64)v20 + 272) & -(__int64)(v20 != 0LL);
    *((_QWORD *)this + 70) = v13;
    inserted = VisualCollection::InsertRelative(
                 (VisualCollection *)(*((_QWORD *)this + 38) + 32LL),
                 (unsigned __int64)v13,
                 0LL,
                 1u,
                 v19);
    v4 = inserted;
    if ( inserted < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x1A88u, 0LL);
      return v4;
    }
    v15 = *((_DWORD *)this + 22);
    if ( (v15 & 0x10000) == 0 )
    {
      *((_DWORD *)this + 22) = v15 | 0x10000;
      CVisual::PropagateDirtyChildren(this);
    }
LABEL_5:
    CaptionColor = CTopLevelWindow::GetCaptionColor(this);
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 71) + 32LL))(*((_QWORD *)this + 71), CaptionColor);
    if ( a2 )
    {
      v8 = *(unsigned int *)(*((_QWORD *)this + 94) + 196LL);
      if ( !(_DWORD)v8 )
      {
        v9 = BYTE2(CaptionColor) + 5 * BYTE1(CaptionColor) + 2 * (unsigned __int8)CaptionColor;
        if ( v9 > 0x400 == (unsigned __int8)BYTE2(*((_DWORD *)a2 + 458))
                         + 5 * BYTE1(*((_DWORD *)a2 + 458))
                         + 2 * (unsigned int)(unsigned __int8)*((_DWORD *)a2 + 458) > 0x400 )
        {
          v18 = 321LL;
          if ( v9 <= 0x400 )
            v18 = 292LL;
          ColorCache::GetColor(v18);
        }
        if ( !CTopLevelWindow::TreatAsActiveWindow(this) )
          v8 = BlendColors(CaptionColor, v8, 0.40000001);
      }
      (***((void (__fastcall ****)(_QWORD, __int64))this + 71))(*((_QWORD *)this + 71), v8);
    }
    memset_0(&v21, 0, sizeof(v21));
    CWindowData::GetNonClientCaptionFont(*((CWindowData **)this + 94), &v21);
    (*(void (__fastcall **)(_QWORD, tagLOGFONTW *))(**((_QWORD **)this + 71) + 8LL))(*((_QWORD *)this + 71), &v21);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 71) + 16LL))(*((_QWORD *)this + 71));
    CVisual::SetRTLMirror(*((CVisual **)this + 70), (*((_DWORD *)this + 156) & 0x20000) != 0);
    v10 = *((_DWORD *)this + 156) >> 19;
    LOBYTE(v10) = (*((_DWORD *)this + 156) & 0x80000) != 0;
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 71) + 24LL))(*((_QWORD *)this + 71), v10);
    v11 = *((_DWORD *)this + 156) >> 22;
    LOBYTE(v11) = (*((_DWORD *)this + 156) & 0x400000) != 0;
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 71) + 40LL))(*((_QWORD *)this + 71), v11);
    return v4;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x1A7Bu, 0LL);
  if ( v20 )
    CBaseObject::Release(v20);
  return v4;
}
