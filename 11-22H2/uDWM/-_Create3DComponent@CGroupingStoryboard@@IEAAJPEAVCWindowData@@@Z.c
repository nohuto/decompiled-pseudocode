/*
 * XREFs of ?_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x1800DCAE8
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DEF90 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E0620 (-_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x18000E3C0 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180043514 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z @ 0x18006D586 (-_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z.c)
 *     _lambda_8f1720e7b83b32fa64f3f3d4703bfb8d_::operator() @ 0x1800D9AB8 (_lambda_8f1720e7b83b32fa64f3f3d4703bfb8d_--operator().c)
 *     ?_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_TARGET@@PEAPEAVCAnimationComponent@@3@Z @ 0x1800DD4E0 (-_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_T.c)
 *     ?_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z @ 0x1800DDC74 (-_GetIdealRects@CStoryboard@@KAXPEAVCWindowData@@PEBUtagRECT@@PEAU3@PEAPEAU3@23@Z.c)
 *     ?GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z @ 0x1800EBA84 (-GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x1800EBCA0 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 */

__int64 __fastcall CGroupingStoryboard::_Create3DComponent(CGroupingStoryboard *this, struct CWindowData *a2)
{
  int v4; // edx
  int v5; // r13d
  int v6; // esi
  CBaseObject *v7; // r15
  CBaseObject *v8; // r14
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // r8d
  struct tagRECT *p_rc; // rbx
  int v14; // eax
  int v15; // r9d
  struct tagRECT v16; // xmm0
  int v17; // eax
  CBaseObject *v18; // rbx
  __int64 v19; // rax
  CVisual *v20; // rcx
  int v21; // eax
  CBaseObject *v22; // rbx
  unsigned int v24; // [rsp+20h] [rbp-49h]
  struct tagRECT **v25; // [rsp+28h] [rbp-41h]
  CBaseObject *v26; // [rsp+50h] [rbp-19h] BYREF
  CAnimatedTransitionVisual **v27; // [rsp+58h] [rbp-11h] BYREF
  CAnimatedTransitionVisual **v28; // [rsp+60h] [rbp-9h] BYREF
  struct tagRECT rc; // [rsp+68h] [rbp-1h] BYREF
  struct tagRECT v30; // [rsp+78h] [rbp+Fh] BYREF

  v26 = 0LL;
  v4 = *((_DWORD *)a2 + 170);
  v27 = 0LL;
  v5 = v4 & 0xFFF;
  v28 = 0LL;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v30 = 0LL;
  if ( v5 == 1 || (v4 & 0xFFF) == 3 || (v4 & 0xFFF) == 4 )
  {
    if ( *((_DWORD *)a2 + 33) == 1 )
    {
      v4 |= 0x4000000u;
      *((_DWORD *)a2 + 170) = v4;
    }
    if ( (v4 & 0x10000000) == 0 || (int)CTransitionVisualController::GetClonableOwnedWindowCount(a2) <= 0 )
      LOBYTE(v6) = 1;
    if ( (*((_DWORD *)a2 + 170) & 0x1000000) == 0 || IsRectEmpty((const RECT *)((char *)a2 + 684)) )
    {
      v17 = (*(__int64 (__fastcall **)(CGroupingStoryboard *, _QWORD))(*(_QWORD *)this + 112LL))(
              this,
              *((unsigned int *)a2 + 170));
      v10 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 0, v17, 0LL, 0LL, 0xFFFFFFFF, v6, &v26);
      v6 = v10;
      if ( v10 < 0 )
      {
        v24 = 2110;
        goto LABEL_24;
      }
      if ( *((_DWORD *)a2 + 33) == 1 )
      {
        CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)a2 + 3, &v30);
        goto LABEL_29;
      }
      v16 = *(struct tagRECT *)((char *)v26 + 88);
    }
    else
    {
      rc = 0LL;
      if ( v5 == 1 )
      {
        v11 = -*((_DWORD *)a2 + 175);
        v12 = -HIDWORD(*(_QWORD *)((char *)a2 + 700));
        rc = *(struct tagRECT *)((char *)a2 + 700);
        OffsetRect(&rc, v11, v12);
      }
      p_rc = &rc;
      if ( v5 != 1 )
        p_rc = 0LL;
      v14 = (*(__int64 (__fastcall **)(CGroupingStoryboard *, _QWORD))(*(_QWORD *)this + 112LL))(
              this,
              *((unsigned int *)a2 + 170));
      v6 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
             this,
             a2,
             0,
             v14,
             (struct tagRECT *)((char *)a2 + 684),
             p_rc,
             0xFFFFFFFF,
             v6,
             &v26);
      if ( v6 < 0 )
      {
        v15 = v6;
        v24 = 2105;
LABEL_20:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v15, v24);
        goto LABEL_39;
      }
      v16 = *(struct tagRECT *)((char *)a2 + 700);
    }
    v30 = v16;
    goto LABEL_29;
  }
  if ( (v4 & 0xFFF) == 0x1E )
  {
    *(_QWORD *)&rc.left = 0LL;
    CStoryboard::_GetIdealRects(a2, 0LL, &v30, (struct tagRECT **)&rc, 0LL, v25);
    v9 = (*(__int64 (__fastcall **)(CGroupingStoryboard *, _QWORD))(*(_QWORD *)this + 112LL))(
           this,
           *((unsigned int *)a2 + 170));
    v10 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
            this,
            a2,
            0,
            v9,
            *(struct tagRECT **)&rc.left,
            0LL,
            0xFFFFFFFF,
            1,
            &v26);
    v6 = v10;
    if ( v10 < 0 )
    {
      v24 = 2129;
LABEL_24:
      v15 = v10;
      goto LABEL_20;
    }
  }
LABEL_29:
  v18 = v26;
  *(_QWORD *)&rc.left = this;
  CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v26 + 5), &v30);
  v19 = *((_QWORD *)v18 + 5);
  v20 = (CVisual *)(v19 + 8);
  *(struct tagRECT *)(v19 + 872) = v30;
  v21 = *(_DWORD *)(v19 + 96);
  if ( (v21 & 0x1000) == 0 )
  {
    *((_DWORD *)v20 + 22) = v21 | 0x1000;
    CVisual::PropagateDirtyChildren(v20);
  }
  v22 = v26;
  lambda_8f1720e7b83b32fa64f3f3d4703bfb8d_::operator()((CGroupingStoryboard **)&rc, (CAnimatedTransitionVisual **)v26);
  if ( *((_DWORD *)v22 + 17) != 2 )
    *((_DWORD *)v22 + 17) = 1;
  if ( (*((_DWORD *)a2 + 170) & 0x18000) != 0 && CGroupingStoryboard::_IsPartOfGroup(this, a2) )
  {
    CGroupingStoryboard::_CreateGuttersForApp(this, a2, &v30, &v30, v5, &v27, &v28);
    v7 = (CBaseObject *)v27;
    if ( v27 )
      lambda_8f1720e7b83b32fa64f3f3d4703bfb8d_::operator()((CGroupingStoryboard **)&rc, v27);
    v8 = (CBaseObject *)v28;
    if ( v28 )
      lambda_8f1720e7b83b32fa64f3f3d4703bfb8d_::operator()((CGroupingStoryboard **)&rc, v28);
  }
LABEL_39:
  if ( v26 )
    CBaseObject::Release(v26);
  if ( v7 )
    CBaseObject::Release(v7);
  if ( v8 )
    CBaseObject::Release(v8);
  return (unsigned int)v6;
}
