/*
 * XREFs of ?_WindowEnumCallback@CWindowClose@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E0B50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180045F18 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180048534 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x1800D99CC (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 */

char __fastcall CWindowClose::_WindowEnumCallback(CStoryboard *a1, struct CWindowData *a2, char a3, int *a4)
{
  int v4; // edi
  int v8; // eax
  int v9; // eax
  CBaseObject *v10; // rbx
  __int64 v11; // rcx
  struct tagRECT v12; // xmm6
  struct tagPOINT *v13; // rcx
  __int64 v14; // rcx
  char result; // al
  struct tagRECT v16; // [rsp+50h] [rbp-28h] BYREF
  CBaseObject *v17; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0;
  v17 = 0LL;
  if ( (a3 & 1) != 0 && (*((_DWORD *)a2 + 168) & 0xFFF) == 0x55 )
  {
    v8 = (*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)a1 + 112LL))(a1);
    v9 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(a1, a2, 1, v8, 0LL, 0LL, -1, 1, &v17);
    v10 = v17;
    v4 = v9;
    if ( v9 >= 0 )
    {
      CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v17 + 5), 1.0);
      v11 = *((_QWORD *)v10 + 5);
      *(_DWORD *)(v11 + 932) = 0;
      CVisual::SetDirtyFlags((CVisual *)(v11 + 8), 4096);
      v13 = (struct tagPOINT *)*((_QWORD *)v10 + 5);
      v16 = *(struct tagRECT *)((char *)v10 + 88);
      v12 = v16;
      CAnimatedTransitionVisual::SetBeginRect(v13, &v16);
      v14 = *((_QWORD *)v10 + 5);
      *(struct tagRECT *)(v14 + 872) = v12;
      CVisual::SetDirtyFlags((CVisual *)(v14 + 8), 4096);
      if ( *((_DWORD *)v10 + 17) != 2 )
        *((_DWORD *)v10 + 17) = 1;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v9, 0x1370u);
    }
    if ( v10 )
      CBaseObject::Release(v10);
  }
  result = 1;
  *a4 = v4;
  return result;
}
