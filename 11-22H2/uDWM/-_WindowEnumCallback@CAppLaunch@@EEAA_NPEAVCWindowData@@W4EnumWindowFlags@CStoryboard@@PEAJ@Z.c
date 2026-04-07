/*
 * XREFs of ?_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E0620
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x18000E3C0 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?ContainsRect@@YA_NAEBUtagRECT@@0@Z @ 0x180016214 (-ContainsRect@@YA_NAEBUtagRECT@@0@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180043514 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ @ 0x1800577E4 (-IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPVLTarget@CAppLaunch@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x1800DA290 (-GetPVLTarget@CAppLaunch@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x1800DCAE8 (-_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimationComponent@@@Z @ 0x1800DD3FC (-_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimat.c)
 *     ?_RecordMonitorRectForWindow@CLaunchSwitchBase@@IEAAXPEBVCWindowData@@@Z @ 0x1800DE34C (-_RecordMonitorRectForWindow@CLaunchSwitchBase@@IEAAXPEBVCWindowData@@@Z.c)
 *     ?_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E15E0 (-_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 */

char __fastcall CAppLaunch::_WindowEnumCallback(__int64 a1, struct tagRECT *a2, char a3, int *a4)
{
  CBaseObject *v8; // rbx
  __int16 right; // r9
  int v10; // r9d
  int v11; // esi
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  int v15; // r9d
  int v16; // eax
  __int16 v17; // r8
  int PVLTarget; // eax
  int v19; // eax
  __int16 v20; // r8
  int v21; // eax
  int v22; // eax
  struct tagRECT v23; // xmm6
  struct tagPOINT *v24; // rcx
  __int64 v25; // rax
  CVisual *v26; // rcx
  int v27; // eax
  int v28; // r9d
  char result; // al
  struct tagRECT v30; // [rsp+50h] [rbp-38h] BYREF
  CBaseObject *v31; // [rsp+98h] [rbp+10h] BYREF

  CGroupingStoryboard::_WindowEnumCallback();
  v8 = 0LL;
  right = a2[42].right;
  v31 = 0LL;
  v10 = right & 0xFFF;
  v11 = 0;
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 4) == 0 )
      goto LABEL_27;
    v28 = v10 - 1;
    if ( v28 )
    {
      if ( (unsigned int)(v28 - 2) >= 2 )
        goto LABEL_27;
    }
    else
    {
      *(_BYTE *)(a1 + 168) = 1;
    }
    CLaunchSwitchBase::_RecordMonitorRectForWindow((CLaunchSwitchBase *)a1, (const struct CWindowData *)a2);
    goto LABEL_25;
  }
  v12 = v10 - 1;
  if ( !v12 || (v13 = v12 - 2) == 0 || (v14 = v13 - 1) == 0 )
  {
LABEL_7:
    v16 = CGroupingStoryboard::_Create3DComponent((CGroupingStoryboard *)a1, (struct CWindowData *)a2);
    v11 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v16, 0x8CDu);
    goto LABEL_27;
  }
  v15 = v14 - 18;
  if ( v15 )
  {
    if ( v15 != 8 )
      goto LABEL_27;
    goto LABEL_7;
  }
  if ( !ContainsRect((const struct tagRECT *)(a1 + 152), a2 + 3) )
    goto LABEL_27;
  if ( *(_BYTE *)(a1 + 168) )
  {
    PVLTarget = CAppLaunch::GetPVLTarget(a1, v17);
    v19 = CStoryboard::_CreateAndAddNullComponentWithWindowScreen(
            (CStoryboard *)a1,
            (struct CWindowData *)a2,
            PVLTarget,
            1,
            &v31);
    v11 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v19, 0x8D7u);
  }
  else
  {
    if ( !CWindowData::IsWindowVisibleAndUncloaked((CWindowData *)a2) )
      goto LABEL_27;
    v21 = CAppLaunch::GetPVLTarget(a1, v20);
    v22 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
            (CStoryboard *)a1,
            (struct CWindowData *)a2,
            0,
            v21,
            0LL,
            0LL,
            0xFFFFFFFF,
            1,
            &v31);
    v11 = v22;
    if ( v22 >= 0 )
    {
      v8 = v31;
      v24 = (struct tagPOINT *)*((_QWORD *)v31 + 5);
      v30 = *(struct tagRECT *)((char *)v31 + 88);
      v23 = v30;
      CAnimatedTransitionVisual::SetBeginRect(v24, &v30);
      v25 = *((_QWORD *)v8 + 5);
      v26 = (CVisual *)(v25 + 8);
      *(struct tagRECT *)(v25 + 872) = v23;
      v27 = *(_DWORD *)(v25 + 96);
      if ( (v27 & 0x1000) == 0 )
      {
        *((_DWORD *)v26 + 22) = v27 | 0x1000;
        CVisual::PropagateDirtyChildren(v26);
      }
      goto LABEL_25;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v22, 0x8DDu);
  }
  v8 = v31;
LABEL_25:
  if ( v8 )
    CBaseObject::Release(v8);
LABEL_27:
  result = 1;
  *a4 = v11;
  return result;
}
