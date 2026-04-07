/*
 * XREFs of ?StartThemeAnimation@CInputView_SizeOrModeChangeBase@@AEAAJPEAVCWindowData@@@Z @ 0x1800D8E1C
 * Callers:
 *     ?_WindowEnumCallback@CInputView_SizeOrModeChangeBase@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DF060 (-_WindowEnumCallback@CInputView_SizeOrModeChangeBase@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@C.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180045F18 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x1800D99CC (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x1800DB778 (-_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
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
  __int64 v10; // rcx
  struct tagRECT v12; // [rsp+50h] [rbp-28h] BYREF
  CBaseObject *v13; // [rsp+80h] [rbp+8h] BYREF

  v13 = 0LL;
  v4 = (*(__int64 (__fastcall **)(CInputView_SizeOrModeChangeBase *, _QWORD))(*(_QWORD *)this + 112LL))(
         this,
         *((unsigned int *)a2 + 168));
  v5 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 1, v4, 0LL, 0LL, -1, 1, &v13);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = (*((_DWORD *)a2 + 168) & 0x1000000) == 0;
    v7 = v13;
    v9 = *(struct tagRECT *)((char *)v13 + 88);
    v12 = v9;
    if ( !v8 )
    {
      v9 = *(struct tagRECT *)((char *)a2 + 692);
      v12 = v9;
    }
    CAnimatedTransitionVisual::SetBeginRect(*((struct tagPOINT **)v13 + 5), &v12);
    v10 = *((_QWORD *)v7 + 5);
    *(struct tagRECT *)(v10 + 872) = v9;
    CVisual::SetDirtyFlags((CVisual *)(v10 + 8), 4096);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v5, 0x146Bu);
    v7 = v13;
    if ( !v13 )
      return v6;
    CStoryboard::_RemoveAnimationComponent(this, v13);
  }
  if ( v7 )
    CBaseObject::Release(v7);
  return v6;
}
