/*
 * XREFs of ?_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z @ 0x1800DDEC0
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DFB00 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x18000E3C0 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x180014240 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180043514 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z @ 0x18006D586 (-_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z.c)
 *     ?GetPVLTarget@CAppArrangementImmediate@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x1800DA240 (-GetPVLTarget@CAppArrangementImmediate@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?GetSpecialTargetInfo@CAppArrangementImmediate@@UEAA?AW4SpecialTargetInfo@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800DABB0 (-GetSpecialTargetInfo@CAppArrangementImmediate@@UEAA-AW4SpecialTargetInfo@@W4DWMTRANSITION_TARGE.c)
 *     ?_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800DD118 (-_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPE.c)
 *     ?_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_TARGET@@PEAPEAVCAnimationComponent@@3@Z @ 0x1800DD4E0 (-_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_T.c)
 *     ?_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z @ 0x1800DE4FC (-_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z.c)
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
  bool v13; // zf
  struct tagRECT v14; // xmm0
  __int64 v15; // r8
  int v16; // edx
  int v17; // edx
  struct tagRECT *p_rc; // r13
  char v19; // di
  int v20; // eax
  int v21; // eax
  int v22; // eax
  struct tagRECT v23; // xmm0
  struct tagRECT v24; // xmm6
  int v25; // edx
  int v26; // ecx
  __int64 v27; // rax
  CVisual *v28; // rcx
  int v29; // eax
  struct tagPOINT v31; // [rsp+58h] [rbp-39h] BYREF
  struct tagRECT v32; // [rsp+68h] [rbp-29h] BYREF
  struct CAnimationComponent *v33; // [rsp+78h] [rbp-19h] BYREF
  struct CAnimationComponent *v34; // [rsp+80h] [rbp-11h] BYREF
  struct tagRECT v35; // [rsp+88h] [rbp-9h] BYREF
  struct tagRECT rc; // [rsp+98h] [rbp+7h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v31 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v32 = 0LL;
  if ( a3 )
  {
    v7 = (struct tagRECT)*((_OWORD *)a2 + 3);
    v8 = *((_DWORD *)a2 + 170);
    rc = v7;
    if ( (v8 & 0x1000000) != 0 )
      rc = *(struct tagRECT *)((char *)a2 + 684);
    PVLTarget = CAppArrangementImmediate::GetPVLTarget((__int64)this, v8);
    v10 = CStoryboard::_CreateAndAddDesktopAnimationComponent(
            this,
            a2,
            PVLTarget,
            &rc,
            1,
            (struct CAnimationComponent **)&v31);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v10, 0xDD6u);
LABEL_6:
      v12 = v31;
      goto LABEL_35;
    }
  }
  else
  {
    v13 = (*((_DWORD *)a2 + 170) & 0x1000000) == 0;
    rc = 0LL;
    if ( !v13 )
    {
      v14 = *(struct tagRECT *)((char *)a2 + 700);
      v15 = *(_QWORD *)((char *)a2 + 700);
      v16 = -*((_DWORD *)a2 + 175);
      rc = v14;
      OffsetRect(&rc, v16, -HIDWORD(v15));
    }
    v17 = *((_DWORD *)a2 + 170);
    if ( (v17 & 0x1000000) != 0 )
    {
      p_rc = &rc;
      v19 = 1;
    }
    else
    {
      p_rc = 0LL;
      v19 = 0;
    }
    v20 = CAppArrangementImmediate::GetPVLTarget((__int64)this, v17);
    v21 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
            this,
            a2,
            1,
            v20,
            (struct tagRECT *)(((unsigned __int64)a2 + 684) & -(__int64)(v19 != 0)),
            p_rc,
            0xFFFFFFFF,
            1,
            (struct CAnimationComponent **)&v31);
    v11 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v21, 0xDE9u);
      goto LABEL_6;
    }
  }
  v22 = *((_DWORD *)a2 + 170);
  v12 = v31;
  if ( (v22 & 0x1000000) != 0 )
    v23 = *(struct tagRECT *)((char *)a2 + 700);
  else
    v23 = *(struct tagRECT *)(*(_QWORD *)&v31 + 88LL);
  v35 = v23;
  if ( (v22 & 0x800000) != 0 )
  {
    v24 = *(struct tagRECT *)((char *)a2 + 732);
  }
  else
  {
    if ( (int)CWindowPropertyTracker::GetWindowEndPosition(
                (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
                *((HWND *)a2 + 5),
                &v31) >= 0 )
    {
      v25 = 0;
      v32.left = v31.x;
      if ( v35.right - v35.left >= 0 )
        v25 = v35.right - v35.left;
      v32.top = v31.y;
      v26 = 0;
      v32.right = v31.x + v25;
      if ( v35.bottom - v35.top >= 0 )
        v26 = v35.bottom - v35.top;
      v32.bottom = v31.y + v26;
      v24 = v32;
      goto LABEL_27;
    }
    v24 = v35;
  }
  v32 = v24;
LABEL_27:
  CAnimatedTransitionVisual::SetBeginRect(*(struct tagPOINT **)(*(_QWORD *)&v12 + 40LL), &v35);
  v27 = *(_QWORD *)(*(_QWORD *)&v12 + 40LL);
  v28 = (CVisual *)(v27 + 8);
  *(struct tagRECT *)(v27 + 872) = v24;
  v29 = *(_DWORD *)(v27 + 96);
  if ( (v29 & 0x1000) == 0 )
  {
    *((_DWORD *)v28 + 22) = v29 | 0x1000;
    CVisual::PropagateDirtyChildren(v28);
  }
  *(_BYTE *)(*(_QWORD *)&v12 + 73LL) = 0;
  if ( (CAppArrangementImmediate::GetSpecialTargetInfo((__int64)this, *((_WORD *)a2 + 340) & 0xFFF) & 8) != 0 )
  {
    CGroupingStoryboard::_SetUnifiedCenter(this, *(struct CAnimationComponent **)&v12);
    if ( CGroupingStoryboard::_IsPartOfGroup(this, a2) )
    {
      CGroupingStoryboard::_CreateGuttersForApp(
        (__int64)this,
        (__int64)a2,
        &v35,
        &v32,
        *((_DWORD *)a2 + 170) & 0xFFF,
        (CBaseObject *)&v33,
        (CBaseObject *)&v34);
      v3 = v33;
      if ( v33 )
        CGroupingStoryboard::_SetUnifiedCenter(this, v33);
      v4 = v34;
      if ( v34 )
        CGroupingStoryboard::_SetUnifiedCenter(this, v34);
    }
  }
LABEL_35:
  if ( v12 )
    CBaseObject::Release(*(CBaseObject **)&v12);
  if ( v3 )
    CBaseObject::Release(v3);
  if ( v4 )
    CBaseObject::Release(v4);
  return v11;
}
