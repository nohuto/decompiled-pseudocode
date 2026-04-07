/*
 * XREFs of ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180029A50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$CreateProxy@VCScaleTransformProxy@@@CCompositor@@IEAAJPEAPEAVCScaleTransformProxy@@@Z @ 0x18000E2FC (--$CreateProxy@VCScaleTransformProxy@@@CCompositor@@IEAAJPEAPEAVCScaleTransformProxy@@@Z.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18000ED0C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?Hide@CVisual@@QEAAXXZ @ 0x180010F7C (-Hide@CVisual@@QEAAXXZ.c)
 *     ?Unhide@CVisual@@QEAAXXZ @ 0x1800112D0 (-Unhide@CVisual@@QEAAXXZ.c)
 *     ?InsertChildAt@CVisualProxy@@QEAAJPEAV1@I@Z @ 0x1800116CC (-InsertChildAt@CVisualProxy@@QEAAJPEAV1@I@Z.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180019288 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x1800209A4 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ??$CreateProxy@VCMatrixTransformProxy@@@CCompositor@@IEAAJPEAPEAVCMatrixTransformProxy@@@Z @ 0x18002433C (--$CreateProxy@VCMatrixTransformProxy@@@CCompositor@@IEAAJPEAPEAVCMatrixTransformProxy@@@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180024CFC (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 *     ?ConnectToParent@CVisual@@QEAAJ_N@Z @ 0x1800276EC (-ConnectToParent@CVisual@@QEAAJ_N@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180027828 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180029D90 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x180029E9C (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ @ 0x18002BF30 (-UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x180097BAC (-IsBlurBehindDirty@CAccentBlurBehind@@QEAA_NPEAVCWindowData@@AEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?Show@CProjectionBorderVisual@@QEAAX_N@Z @ 0x1800D07B4 (-Show@CProjectionBorderVisual@@QEAAX_N@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::ValidateVisual(CTopLevelWindow3D *this)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  char v5; // dl
  __int64 v6; // rdx
  int v7; // ebp
  char v8; // al
  char v9; // si
  __int64 v10; // r14
  CProjectionBorderVisual *v11; // rcx
  CDesktopManager *v12; // rax
  unsigned int v13; // edi
  __int64 v14; // rsi
  __int64 v15; // rax
  int updated; // eax
  unsigned int v17; // edi
  int v18; // eax
  unsigned int v19; // edi
  int v20; // eax
  unsigned int v21; // edi
  int v22; // eax
  CSecondaryWindowRepresentation *v24; // rcx
  int v25; // eax
  unsigned int v26; // edi
  int v27; // edi
  int v28; // r9d
  int v29; // eax
  unsigned int v30; // edi
  int started; // eax
  unsigned int v32; // edi
  int inserted; // eax
  int v34; // eax
  unsigned int v35; // edi
  bool v36; // dl
  struct CVisual *v37; // rdx
  __int64 v38; // rcx
  struct CWindowData *v39; // rdx
  __int64 v40; // r12
  __int64 v41; // r12
  CAccentBlurBehind *v42; // rcx
  int v43; // eax
  unsigned int v44; // eax
  __int64 v45; // rdx
  HWND v46; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( (*((_DWORD *)this + 22) & 0x1000) != 0 )
  {
    if ( *((_BYTE *)this + 536) && CDesktopManager::UnregisterForGlobalTimeChangeNotification(this) )
    {
      if ( *((_QWORD *)this + 46) )
      {
        v34 = CTopLevelWindow3D::StopAnimation(this);
        v35 = v34;
        if ( v34 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x36D,
            (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
            (const char *)(unsigned int)v34);
          return v35;
        }
      }
      started = CTopLevelWindow3D::StartAnimation((__int64)this, 5);
      v32 = started;
      if ( started < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x36F,
          (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
          (const char *)(unsigned int)started);
        return v32;
      }
      *((_BYTE *)this + 536) = 0;
    }
    v2 = *((_QWORD *)this + 46);
    if ( !v2 || *(_BYTE *)(v2 + 72) )
    {
      v29 = CTopLevelWindow3D::StopAnimation(this);
      v30 = v29;
      if ( v29 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x385,
          (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
          (const char *)(unsigned int)v29);
        return v30;
      }
LABEL_23:
      *((_DWORD *)this + 22) &= ~0x1000u;
      goto LABEL_24;
    }
    v3 = *(_QWORD *)(*((_QWORD *)this + 42) + 440LL);
    if ( *(char *)(v3 + 248) < 0 )
    {
      v9 = 1;
      v7 = CVisual::ConnectToParent(*(CVisual **)(v3 + 264), 1);
      if ( (*(_BYTE *)(v3 + 248) & 1) == 0 )
        goto LABEL_13;
    }
    else
    {
      v4 = *(_QWORD *)(v3 + 752);
      v5 = *(_BYTE *)(v4 + 664);
      if ( (v5 & 1) != 0 && (*(_BYTE *)(v4 + 668) & 1) == 0 && (v5 & 4) == 0 )
      {
        v6 = *(_QWORD *)(v3 + 264);
        v7 = 0;
        v8 = *(_BYTE *)(v6 + 92);
        if ( (v8 & 4) == 0 )
        {
          *(_BYTE *)(v6 + 92) = v8 | 4;
          inserted = CVisualProxy::InsertChildAt(
                       *(CVisualProxy **)(*(_QWORD *)(*(_QWORD *)(v6 + 24) + 40LL) + 16LL),
                       *(struct CVisualProxy **)(v6 + 16),
                       0);
          v7 = inserted;
          if ( inserted < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x182u);
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x3FDu);
          }
        }
        if ( (*(_BYTE *)(v3 + 248) & 1) == 0 )
        {
          CVisual::Hide((CVisual *)v3);
          *(_BYTE *)(v3 + 248) |= 1u;
        }
        v9 = 0;
LABEL_13:
        v10 = *(_QWORD *)(v3 + 752);
        v11 = *(CProjectionBorderVisual **)(v10 + 464);
        if ( v11 )
        {
          v36 = v9 && (*(_BYTE *)(v3 + 249) & 1) == 0;
          CProjectionBorderVisual::Show(v11, v36);
          v10 = *(_QWORD *)(v3 + 752);
          v37 = *(struct CVisual **)(v10 + 464);
          v38 = *((_QWORD *)v37 + 3);
          if ( v38 )
          {
            VisualCollection::InsertRelative((VisualCollection *)(v38 + 32), v37, (struct CVisual *)v3, 1, 1);
            v10 = *(_QWORD *)(v3 + 752);
          }
        }
        v12 = CDesktopManager::s_pDesktopManagerInstance;
        *(_BYTE *)(v3 + 865) = 1;
        v13 = 0;
        v14 = *((_QWORD *)v12 + 52);
        if ( *(_DWORD *)(v14 + 616) )
        {
          do
          {
            v15 = *(_QWORD *)(v14 + 592);
            if ( *(_DWORD *)(v15 + 16LL * v13 + 8) == 3 )
            {
              v39 = *(struct CWindowData **)(v15 + 16LL * v13);
              v40 = *((_QWORD *)v39 + 55);
              if ( v40 )
              {
                if ( !v10 || *((_QWORD *)v39 + 17) == *(_QWORD *)(v10 + 136) )
                {
                  v41 = *(_QWORD *)(v40 + 280);
                  if ( v41 )
                  {
                    v42 = *(CAccentBlurBehind **)(v41 + 344);
                    if ( v42 )
                    {
                      if ( *((_QWORD *)v39 + 5) == *(_QWORD *)(v41 + 408)
                        || CAccentBlurBehind::IsBlurBehindDirty(
                             v42,
                             v39,
                             (const struct tagRECT *)(v41 + 624),
                             *(_QWORD *)(v41 + 416),
                             *(HWND *)(v41 + 408)) )
                      {
                        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v41 + 24LL))(v41, 0x10000LL);
                      }
                    }
                  }
                }
              }
            }
            ++v13;
          }
          while ( v13 < *(_DWORD *)(v14 + 616) );
        }
        if ( v7 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x37A,
            (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
            (const char *)(unsigned int)v7);
          return (unsigned int)v7;
        }
        if ( !*((_QWORD *)this + 43) )
        {
          LODWORD(v46) = 100;
          v43 = CSecondaryWindowRepresentation::Create(
                  160LL,
                  (__int64)this + 288,
                  *((_QWORD *)this + 42),
                  0,
                  v46,
                  (CSecondaryWindowRepresentation **)this + 43);
          v27 = v43;
          if ( v43 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v43, 0x3ADu);
            v28 = v27;
            v44 = 952;
            goto LABEL_70;
          }
        }
        if ( !*((_QWORD *)this + 45) )
        {
          v27 = CCompositor::CreateProxy<CScaleTransformProxy>(
                  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
                  (CBaseObject **)this + 45);
          v28 = v27;
          if ( v27 < 0 )
          {
            v44 = 956;
LABEL_70:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, v44);
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x37C,
              (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
              (const char *)(unsigned int)v27);
            return (unsigned int)v27;
          }
        }
        if ( !*((_QWORD *)this + 44) )
        {
          v27 = CCompositor::CreateProxy<CMatrixTransformProxy>(
                  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
                  (CBaseObject **)this + 44);
          v28 = v27;
          if ( v27 < 0 )
          {
            v44 = 961;
            goto LABEL_70;
          }
        }
        updated = CTopLevelWindow3D::UpdateAnimatedResources(this);
        v17 = updated;
        if ( updated < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x37E,
            (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
            (const char *)(unsigned int)updated);
          return v17;
        }
        v18 = CTopLevelWindow3D::EnsureRenderData(this);
        v19 = v18;
        if ( v18 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x380,
            (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
            (const char *)(unsigned int)v18);
          return v19;
        }
        goto LABEL_23;
      }
      v9 = 0;
      v7 = CVisual::ConnectToParent(*(CVisual **)(v3 + 264), 0);
      if ( (*(_BYTE *)(v3 + 248) & 1) == 0 )
        goto LABEL_13;
    }
    CVisual::Unhide((CVisual *)v3);
    *(_BYTE *)(v3 + 248) &= ~1u;
    goto LABEL_13;
  }
LABEL_24:
  v20 = CVisual::ValidateVisual(this);
  v21 = v20;
  if ( v20 < 0 )
  {
    v45 = 144LL;
    goto LABEL_75;
  }
  if ( (*((_BYTE *)this + 88) & 4) != 0 )
  {
    v20 = (*(__int64 (__fastcall **)(CTopLevelWindow3D *))(*(_QWORD *)this + 200LL))(this);
    v21 = v20;
    if ( v20 >= 0 )
    {
      *((_DWORD *)this + 22) &= ~4u;
      goto LABEL_26;
    }
    v45 = 148LL;
LABEL_75:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v45,
      (int)"clientcore\\windows\\dwm\\udwm\\renderdatavisual.cpp",
      (const char *)(unsigned int)v20);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38B,
      (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
      (const char *)v21);
    return v21;
  }
LABEL_26:
  v22 = *((_DWORD *)this + 22);
  if ( (v22 & 0x80u) == 0 )
    return 0LL;
  v24 = (CSecondaryWindowRepresentation *)*((_QWORD *)this + 43);
  if ( !v24 )
  {
LABEL_35:
    *((_DWORD *)this + 22) = v22 & 0xFFFFFF7F;
    return 0LL;
  }
  v25 = CSecondaryWindowRepresentation::Validate(v24);
  v26 = v25;
  if ( v25 >= 0 )
  {
    v22 = *((_DWORD *)this + 22);
    goto LABEL_35;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x392,
    (int)"clientcore\\windows\\dwm\\udwm\\toplevelwindow3d.cpp",
    (const char *)(unsigned int)v25);
  return v26;
}
