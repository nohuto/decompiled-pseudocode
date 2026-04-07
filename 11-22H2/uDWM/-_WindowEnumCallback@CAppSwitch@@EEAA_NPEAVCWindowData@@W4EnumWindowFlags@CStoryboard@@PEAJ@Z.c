/*
 * XREFs of ?_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E0870
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x18000E3C0 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?ContainsRect@@YA_NAEBUtagRECT@@0@Z @ 0x180016214 (-ContainsRect@@YA_NAEBUtagRECT@@0@Z.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x180016640 (-IsRTL@CStoryboard@@SA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180043514 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180045FD8 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ @ 0x1800577E4 (-IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _lambda_81f2de84cd03038fe2b12ca1386d224e_::operator() @ 0x1800D9A68 (_lambda_81f2de84cd03038fe2b12ca1386d224e_--operator().c)
 *     ?GetPVLTarget@CAppSwitch@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x1800DA2E0 (-GetPVLTarget@CAppSwitch@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimationComponent@@@Z @ 0x1800DD3FC (-_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimat.c)
 *     ?_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_TARGET@@PEAPEAVCAnimationComponent@@3@Z @ 0x1800DD4E0 (-_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_T.c)
 *     ?_RecordMonitorRectForWindow@CLaunchSwitchBase@@IEAAXPEBVCWindowData@@@Z @ 0x1800DE34C (-_RecordMonitorRectForWindow@CLaunchSwitchBase@@IEAAXPEBVCWindowData@@@Z.c)
 *     ?_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E15E0 (-_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x1800EBCA0 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 */

char __fastcall CAppSwitch::_WindowEnumCallback(__int64 a1, __int64 a2, char a3, int *a4)
{
  int v7; // eax
  unsigned int v8; // r15d
  int v9; // edi
  __int64 v10; // r12
  char v11; // r14
  struct tagRECT *v12; // rax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  CBaseObject *v23; // r14
  int PVLTarget; // eax
  int v25; // eax
  bool v26; // zf
  int v27; // edx
  CBaseObject *v28; // r14
  int v29; // eax
  struct tagPOINT *v30; // rcx
  __int64 v31; // rax
  CVisual *v32; // rcx
  int v33; // eax
  CAnimatedTransitionVisual **v34; // r12
  CBaseObject *v35; // rbx
  char result; // al
  CBaseObject *v37; // [rsp+50h] [rbp-39h] BYREF
  CBaseObject *v38; // [rsp+58h] [rbp-31h] BYREF
  CBaseObject *v39; // [rsp+60h] [rbp-29h] BYREF
  int *v40; // [rsp+68h] [rbp-21h]
  struct tagRECT v41; // [rsp+70h] [rbp-19h] BYREF
  struct tagRECT rc; // [rsp+80h] [rbp-9h] BYREF
  struct tagRECT v43; // [rsp+90h] [rbp+7h] BYREF

  v40 = a4;
  CGroupingStoryboard::_WindowEnumCallback();
  v7 = *(_DWORD *)(a2 + 680);
  v37 = 0LL;
  v8 = v7 & 0xFFF;
  v39 = 0LL;
  v38 = 0LL;
  v9 = 0;
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 4) == 0 )
      goto LABEL_87;
    if ( v8 == 2 )
    {
      *(_BYTE *)(a1 + 168) = 0;
      goto LABEL_87;
    }
    if ( v8 != 3 )
      goto LABEL_87;
    CLaunchSwitchBase::_RecordMonitorRectForWindow((CLaunchSwitchBase *)a1, (const struct CWindowData *)a2);
    goto LABEL_79;
  }
  if ( (v7 & 0x1000000) == 0 || (v10 = a2 + 684, IsRectEmpty((const RECT *)(a2 + 684))) )
  {
    v11 = 0;
    v10 = a2 + 684;
  }
  else
  {
    v11 = 1;
  }
  CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)(a2 + 48), &v41);
  v12 = (struct tagRECT *)(a2 + 700);
  if ( !v11 )
    v12 = &v41;
  v43 = *v12;
  rc = v43;
  switch ( v8 )
  {
    case 2u:
      if ( *(_DWORD *)(a2 + 132) == 1 )
        *(_DWORD *)(a2 + 680) |= 0x4000000u;
      PVLTarget = CAppSwitch::GetPVLTarget(a1, *(_DWORD *)(a2 + 680));
      v25 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
              (CStoryboard *)a1,
              (struct CWindowData *)a2,
              0,
              PVLTarget,
              (struct tagRECT *)(v10 & -(__int64)(v11 != 0)),
              0LL,
              0x11u,
              1,
              &v37);
      v9 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v25, 0x980u);
        goto LABEL_79;
      }
      if ( *((_DWORD *)v37 + 17) != 2 )
        *((_DWORD *)v37 + 17) = 1;
      v26 = !CStoryboard::IsRTL();
      v27 = 0;
      if ( v26 )
      {
        if ( v41.right - v41.left >= 0 )
          v27 = v41.right - v41.left;
        v27 = -v27;
      }
      else if ( v41.right - v41.left >= 0 )
      {
        v27 = v41.right - v41.left;
      }
      OffsetRect(&rc, v27, 0);
      goto LABEL_62;
    case 3u:
      if ( *(_DWORD *)(a2 + 132) == 1 )
        *(_DWORD *)(a2 + 680) |= 0x4000000u;
      if ( *(_BYTE *)(a1 + 168) )
        v20 = 3;
      else
        v20 = CAppSwitch::GetPVLTarget(a1, *(_DWORD *)(a2 + 680));
      if ( v11 )
      {
        v21 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
                (CStoryboard *)a1,
                (struct CWindowData *)a2,
                0,
                v20,
                (struct tagRECT *)(a2 + 684),
                0LL,
                0xFFFFFFFF,
                1,
                &v37);
        v9 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v21, 0x93Eu);
          goto LABEL_79;
        }
      }
      else
      {
        v22 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
                (CStoryboard *)a1,
                (struct CWindowData *)a2,
                0,
                v20,
                0LL,
                0LL,
                0xFFFFFFFF,
                1,
                &v37);
        v9 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v22, 0x942u);
          goto LABEL_79;
        }
      }
      v23 = v37;
      CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v37 + 5), 0.0);
      if ( *((_DWORD *)v23 + 17) != 2 )
        *((_DWORD *)v23 + 17) = 1;
      goto LABEL_62;
    case 0x16u:
      if ( !CWindowData::IsWindowVisibleAndUncloaked((CWindowData *)a2)
        || !ContainsRect((const struct tagRECT *)(a1 + 152), (const struct tagRECT *)(a2 + 48)) )
      {
        goto LABEL_87;
      }
      if ( *(_BYTE *)(a1 + 168) )
        v18 = 7;
      else
        v18 = CAppSwitch::GetPVLTarget(a1, *(_DWORD *)(a2 + 680));
      v19 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
              (CStoryboard *)a1,
              (struct CWindowData *)a2,
              0,
              v18,
              0LL,
              0LL,
              0xFFFFFFFF,
              1,
              &v37);
      v9 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v19, 0x957u);
        goto LABEL_79;
      }
      if ( *((_DWORD *)v37 + 17) != 2 )
        *((_DWORD *)v37 + 17) = 1;
      v43 = *(struct tagRECT *)((char *)v37 + 88);
      rc = v43;
      goto LABEL_62;
    case 0x1Cu:
      if ( *(_BYTE *)(a1 + 168) )
        v15 = 5;
      else
        v15 = CAppSwitch::GetPVLTarget(a1, *(_DWORD *)(a2 + 680));
      if ( v11 )
      {
        v16 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
                (CStoryboard *)a1,
                (struct CWindowData *)a2,
                0,
                v15,
                (struct tagRECT *)(a2 + 684),
                0LL,
                0xFFFFFFFF,
                1,
                &v37);
        v9 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v16, 0x968u);
          goto LABEL_79;
        }
      }
      else
      {
        v17 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
                (CStoryboard *)a1,
                (struct CWindowData *)a2,
                0,
                v15,
                0LL,
                0LL,
                0xFFFFFFFF,
                1,
                &v37);
        v9 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v17, 0x96Cu);
          goto LABEL_79;
        }
      }
      if ( *((_DWORD *)v37 + 17) != 2 )
        *((_DWORD *)v37 + 17) = 1;
LABEL_62:
      v28 = v37;
      if ( !v37 )
        goto LABEL_87;
      if ( v8 <= 0x1C )
      {
        v29 = 272629772;
        if ( _bittest(&v29, v8) )
        {
          v30 = (struct tagPOINT *)*((_QWORD *)v37 + 5);
          *(_QWORD *)&v41.left = a1;
          v41.right = v30[116].x;
          CAnimatedTransitionVisual::SetBeginRect(v30, &v43);
          v31 = *((_QWORD *)v28 + 5);
          v32 = (CVisual *)(v31 + 8);
          *(struct tagRECT *)(v31 + 872) = rc;
          v33 = *(_DWORD *)(v31 + 96);
          if ( (v33 & 0x1000) == 0 )
          {
            *((_DWORD *)v32 + 22) = v33 | 0x1000;
            CVisual::PropagateDirtyChildren(v32);
          }
          if ( v8 - 2 <= 1 )
            lambda_81f2de84cd03038fe2b12ca1386d224e_::operator()((__int64)&v41, (CAnimatedTransitionVisual **)v37);
          if ( (*(_DWORD *)(a2 + 680) & 0x18000) != 0 )
          {
            CGroupingStoryboard::_CreateGuttersForApp(a1, a2, &v43, &rc, v8, (CBaseObject *)&v39, (CBaseObject *)&v38);
            v34 = (CAnimatedTransitionVisual **)v39;
            if ( v39 )
              lambda_81f2de84cd03038fe2b12ca1386d224e_::operator()((__int64)&v41, (CAnimatedTransitionVisual **)v39);
            v35 = v38;
            if ( v38 )
              lambda_81f2de84cd03038fe2b12ca1386d224e_::operator()((__int64)&v41, v34);
            goto LABEL_80;
          }
        }
      }
LABEL_79:
      v35 = v38;
LABEL_80:
      if ( v37 )
        CBaseObject::Release(v37);
      goto LABEL_83;
    case 0x2Bu:
      v13 = CAppSwitch::GetPVLTarget(a1, *(_DWORD *)(a2 + 680));
      v14 = CStoryboard::_CreateAndAddNullComponentWithWindowScreen(
              (CStoryboard *)a1,
              (struct CWindowData *)a2,
              v13,
              1,
              &v37);
      v9 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v14, 0x989u);
        goto LABEL_79;
      }
      goto LABEL_62;
  }
  v35 = v38;
LABEL_83:
  if ( v39 )
    CBaseObject::Release(v39);
  if ( v35 )
    CBaseObject::Release(v35);
LABEL_87:
  result = 1;
  *v40 = v9;
  return result;
}
