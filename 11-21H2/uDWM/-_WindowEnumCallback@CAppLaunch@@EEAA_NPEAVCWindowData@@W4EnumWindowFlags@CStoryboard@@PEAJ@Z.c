/*
 * XREFs of ?_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DD850
 * Callers:
 *     <none>
 * Callees:
 *     ?ContainsRect@@YA_NAEBUtagRECT@@0@Z @ 0x180001EF0 (-ContainsRect@@YA_NAEBUtagRECT@@0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180045F18 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ @ 0x18005F568 (-IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ.c)
 *     ?GetPVLTarget@CAppLaunch@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x1800D62C0 (-GetPVLTarget@CAppLaunch@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x1800D95E8 (-_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x1800D99CC (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimationComponent@@@Z @ 0x1800DA18C (-_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimat.c)
 *     ?_RecordMonitorRectForWindow@CLaunchSwitchBase@@IEAAXPEBVCWindowData@@@Z @ 0x1800DB620 (-_RecordMonitorRectForWindow@CLaunchSwitchBase@@IEAAXPEBVCWindowData@@@Z.c)
 *     ?_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DE890 (-_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 */

char __fastcall CAppLaunch::_WindowEnumCallback(__int64 a1, struct tagRECT *a2, char a3, int *a4)
{
  CBaseObject *v8; // rbx
  __int16 left; // ax
  unsigned int v10; // eax
  int v11; // edi
  int v12; // eax
  __int16 v13; // r8
  int PVLTarget; // eax
  int v15; // eax
  __int16 v16; // r8
  int v17; // eax
  int v18; // eax
  struct tagRECT v19; // xmm6
  struct tagPOINT *v20; // rcx
  __int64 v21; // rcx
  char result; // al
  struct tagRECT v23; // [rsp+50h] [rbp-38h] BYREF
  CBaseObject *v24; // [rsp+98h] [rbp+10h] BYREF

  CGroupingStoryboard::_WindowEnumCallback();
  v8 = 0LL;
  left = a2[42].left;
  v24 = 0LL;
  v10 = left & 0xFFF;
  v11 = 0;
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 4) == 0 )
      goto LABEL_27;
    if ( v10 == 1 )
    {
      *(_BYTE *)(a1 + 168) = 1;
    }
    else if ( v10 <= 2 || v10 > 4 )
    {
      goto LABEL_27;
    }
    CLaunchSwitchBase::_RecordMonitorRectForWindow((CLaunchSwitchBase *)a1, (const struct CWindowData *)a2);
    goto LABEL_25;
  }
  if ( v10 == 1 )
    goto LABEL_7;
  if ( v10 <= 2 )
    goto LABEL_27;
  if ( v10 <= 4 )
    goto LABEL_7;
  if ( v10 != 22 )
  {
    if ( v10 != 30 )
      goto LABEL_27;
LABEL_7:
    v12 = CGroupingStoryboard::_Create3DComponent((CGroupingStoryboard *)a1, (struct CWindowData *)a2);
    v11 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v12, 0x92Cu);
    goto LABEL_27;
  }
  if ( !ContainsRect((const struct tagRECT *)(a1 + 152), a2 + 3) )
    goto LABEL_27;
  if ( *(_BYTE *)(a1 + 168) )
  {
    PVLTarget = CAppLaunch::GetPVLTarget(a1, v13);
    v15 = CStoryboard::_CreateAndAddNullComponentWithWindowScreen(
            (CStoryboard *)a1,
            (struct CWindowData *)a2,
            PVLTarget,
            1,
            &v24);
    v11 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v15, 0x936u);
    goto LABEL_13;
  }
  if ( !CWindowData::IsWindowVisibleAndUncloaked((CWindowData *)a2) )
    goto LABEL_27;
  v17 = CAppLaunch::GetPVLTarget(a1, v16);
  v18 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
          (CStoryboard *)a1,
          (struct CWindowData *)a2,
          0,
          v17,
          0LL,
          0LL,
          -1,
          1,
          &v24);
  v11 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v18, 0x93Cu);
LABEL_13:
    v8 = v24;
    goto LABEL_25;
  }
  v8 = v24;
  v20 = (struct tagPOINT *)*((_QWORD *)v24 + 5);
  v23 = *(struct tagRECT *)((char *)v24 + 88);
  v19 = v23;
  CAnimatedTransitionVisual::SetBeginRect(v20, &v23);
  v21 = *((_QWORD *)v8 + 5);
  *(struct tagRECT *)(v21 + 872) = v19;
  CVisual::SetDirtyFlags((CVisual *)(v21 + 8), 4096);
LABEL_25:
  if ( v8 )
    CBaseObject::Release(v8);
LABEL_27:
  result = 1;
  *a4 = v11;
  return result;
}
