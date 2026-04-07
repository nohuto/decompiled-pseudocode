/*
 * XREFs of ?_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z @ 0x1800DADC4
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DCD90 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x18000D05C (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180045F18 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z @ 0x180069CA8 (-_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z.c)
 *     ?GetPVLTarget@CAppArrangementImmediate@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x1800D6270 (-GetPVLTarget@CAppArrangementImmediate@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?GetSpecialTargetInfo@CAppArrangementImmediate@@UEAA?AW4SpecialTargetInfo@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800D6C30 (-GetSpecialTargetInfo@CAppArrangementImmediate@@UEAA-AW4SpecialTargetInfo@@W4DWMTRANSITION_TARGE.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x1800D99CC (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800D9EA8 (-_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPE.c)
 *     ?_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_TARGET@@PEAPEAVCAnimationComponent@@3@Z @ 0x1800DA270 (-_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_T.c)
 *     ?_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z @ 0x1800DB7C8 (-_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z.c)
 */

__int64 __fastcall CAppArrangementImmediate::_HandleThumbnailTag(
        CAppArrangementImmediate *this,
        struct CWindowData *a2,
        char a3)
{
  CBaseObject *v3; // r12
  CBaseObject *v4; // r14
  struct tagRECT v7; // xmm0
  int v8; // edx
  int PVLTarget; // eax
  int v10; // eax
  unsigned int v11; // r13d
  struct tagPOINT v12; // rdi
  int v13; // edx
  int v14; // edx
  int v15; // r8d
  struct tagRECT *p_rc; // r13
  char v17; // di
  int v18; // eax
  int v19; // eax
  int v20; // eax
  struct tagRECT v21; // xmm0
  struct tagRECT v22; // xmm6
  int v23; // edx
  int v24; // ecx
  __int64 v25; // rcx
  struct tagPOINT v27; // [rsp+58h] [rbp-39h] BYREF
  struct tagRECT v28; // [rsp+68h] [rbp-29h] BYREF
  struct CAnimationComponent *v29; // [rsp+78h] [rbp-19h] BYREF
  struct CAnimationComponent *v30; // [rsp+80h] [rbp-11h] BYREF
  struct tagRECT v31; // [rsp+88h] [rbp-9h] BYREF
  struct tagRECT rc; // [rsp+98h] [rbp+7h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v27 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v28 = 0LL;
  if ( a3 )
  {
    v7 = (struct tagRECT)*((_OWORD *)a2 + 3);
    v8 = *((_DWORD *)a2 + 168);
    rc = v7;
    if ( (v8 & 0x1000000) != 0 )
      rc = *(struct tagRECT *)((char *)a2 + 676);
    PVLTarget = CAppArrangementImmediate::GetPVLTarget((__int64)this, v8);
    v10 = CStoryboard::_CreateAndAddDesktopAnimationComponent(
            this,
            a2,
            PVLTarget,
            &rc,
            1,
            (struct CAnimationComponent **)&v27);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v10, 0xE30u);
LABEL_6:
      v12 = v27;
      goto LABEL_32;
    }
  }
  else
  {
    v13 = *((_DWORD *)a2 + 168);
    rc = 0LL;
    if ( (v13 & 0x1000000) != 0
      && (v14 = -*((_DWORD *)a2 + 173),
          v15 = -HIDWORD(*(_QWORD *)((char *)a2 + 692)),
          rc = *(struct tagRECT *)((char *)a2 + 692),
          OffsetRect(&rc, v14, v15),
          v13 = *((_DWORD *)a2 + 168),
          (v13 & 0x1000000) != 0) )
    {
      p_rc = &rc;
      v17 = 1;
    }
    else
    {
      p_rc = 0LL;
      v17 = 0;
    }
    v18 = CAppArrangementImmediate::GetPVLTarget((__int64)this, v13);
    v19 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
            this,
            a2,
            1,
            v18,
            (struct tagRECT *)(((unsigned __int64)a2 + 676) & -(__int64)(v17 != 0)),
            p_rc,
            -1,
            1,
            (struct CAnimationComponent **)&v27);
    v11 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v19, 0xE43u);
      goto LABEL_6;
    }
  }
  v20 = *((_DWORD *)a2 + 168);
  v12 = v27;
  if ( (v20 & 0x1000000) != 0 )
    v21 = *(struct tagRECT *)((char *)a2 + 692);
  else
    v21 = *(struct tagRECT *)(*(_QWORD *)&v27 + 88LL);
  v31 = v21;
  if ( (v20 & 0x800000) != 0 )
  {
    v22 = *(struct tagRECT *)((char *)a2 + 724);
  }
  else
  {
    if ( (int)CWindowPropertyTracker::GetWindowEndPosition(
                (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) + 48LL),
                *((HWND *)a2 + 5),
                &v27) >= 0 )
    {
      v23 = 0;
      v28.left = v27.x;
      if ( v31.right - v31.left >= 0 )
        v23 = v31.right - v31.left;
      v28.top = v27.y;
      v24 = 0;
      v28.right = v27.x + v23;
      if ( v31.bottom - v31.top >= 0 )
        v24 = v31.bottom - v31.top;
      v28.bottom = v27.y + v24;
      v22 = v28;
      goto LABEL_26;
    }
    v22 = v31;
  }
  v28 = v22;
LABEL_26:
  CAnimatedTransitionVisual::SetBeginRect(*(struct tagPOINT **)(*(_QWORD *)&v12 + 40LL), &v31);
  v25 = *(_QWORD *)(*(_QWORD *)&v12 + 40LL);
  *(struct tagRECT *)(v25 + 872) = v22;
  CVisual::SetDirtyFlags((CVisual *)(v25 + 8), 4096);
  *(_BYTE *)(*(_QWORD *)&v12 + 73LL) = 0;
  if ( (CAppArrangementImmediate::GetSpecialTargetInfo((__int64)this, *((_WORD *)a2 + 336) & 0xFFF) & 8) != 0 )
  {
    CGroupingStoryboard::_SetUnifiedCenter(this, *(struct CAnimationComponent **)&v12);
    if ( CGroupingStoryboard::_IsPartOfGroup(this, a2) )
    {
      CGroupingStoryboard::_CreateGuttersForApp(
        (__int64)this,
        (__int64)a2,
        &v31,
        &v28,
        *((_DWORD *)a2 + 168) & 0xFFF,
        (CBaseObject *)&v29,
        (CBaseObject *)&v30);
      v3 = v29;
      if ( v29 )
        CGroupingStoryboard::_SetUnifiedCenter(this, v29);
      v4 = v30;
      if ( v30 )
        CGroupingStoryboard::_SetUnifiedCenter(this, v30);
    }
  }
LABEL_32:
  if ( v12 )
    CBaseObject::Release(*(CBaseObject **)&v12);
  if ( v3 )
    CBaseObject::Release(v3);
  if ( v4 )
    CBaseObject::Release(v4);
  return v11;
}
