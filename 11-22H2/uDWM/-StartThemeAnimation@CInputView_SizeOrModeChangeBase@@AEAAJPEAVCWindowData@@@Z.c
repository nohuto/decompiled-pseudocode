/*
 * XREFs of ?StartThemeAnimation@CInputView_SizeOrModeChangeBase@@AEAAJPEAVCWindowData@@@Z @ 0x1800DC63C
 * Callers:
 *     ?_WindowEnumCallback@CInputView_SizeOrModeChangeBase@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E1DC0 (-_WindowEnumCallback@CInputView_SizeOrModeChangeBase@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@C.c)
 * Callees:
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x18000E3C0 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180043514 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x1800DE4AC (-_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 */

__int64 __fastcall CInputView_SizeOrModeChangeBase::StartThemeAnimation(
        CInputView_SizeOrModeChangeBase *this,
        struct CWindowData *a2)
{
  int v4; // eax
  int v5; // eax
  unsigned int v6; // esi
  CBaseObject *v7; // rbx
  bool v8; // zf
  struct tagRECT v9; // xmm6
  __int64 v10; // rax
  CVisual *v11; // rcx
  int v12; // eax
  struct tagRECT v14; // [rsp+50h] [rbp-28h] BYREF
  CBaseObject *v15; // [rsp+80h] [rbp+8h] BYREF

  v15 = 0LL;
  v4 = (*(__int64 (__fastcall **)(CInputView_SizeOrModeChangeBase *, _QWORD))(*(_QWORD *)this + 112LL))(
         this,
         *((unsigned int *)a2 + 170));
  v5 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 1, v4, 0LL, 0LL, 0xFFFFFFFF, 1, &v15);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = (*((_DWORD *)a2 + 170) & 0x1000000) == 0;
    v7 = v15;
    v9 = *(struct tagRECT *)((char *)v15 + 88);
    v14 = v9;
    if ( !v8 )
    {
      v9 = *(struct tagRECT *)((char *)a2 + 700);
      v14 = v9;
    }
    CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v15 + 5), &v14);
    v10 = *((_QWORD *)v7 + 5);
    v11 = (CVisual *)(v10 + 8);
    *(struct tagRECT *)(v10 + 872) = v9;
    v12 = *(_DWORD *)(v10 + 96);
    if ( (v12 & 0x1000) == 0 )
    {
      *((_DWORD *)v11 + 22) = v12 | 0x1000;
      CVisual::PropagateDirtyChildren(v11);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v5, 0x140Bu);
    v7 = v15;
    if ( !v15 )
      return v6;
    CStoryboard::_RemoveAnimationComponent(this, v15);
  }
  if ( v7 )
    CBaseObject::Release(v7);
  return v6;
}
