/*
 * XREFs of ?CreateBitmapAnimationComponent@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800EB378
 * Callers:
 *     ?_CreateAndAddBitmapAnimationComponent@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAPEAVCAnimationComponent@@@Z @ 0x1800D9B44 (-_CreateAndAddBitmapAnimationComponent@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180045F18 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180047160 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_GetTransitionBitmapIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x18006AD66 (-_GetTransitionBitmapIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 *     ?SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z @ 0x18009EF0C (-SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x1800A521C (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x1800D7618 (-IsRTL@CStoryboard@@SA_NXZ.c)
 */

__int64 __fastcall CTransitionVisualController::CreateBitmapAnimationComponent(
        CTransitionVisualController *a1,
        HWND a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 *a6)
{
  int TransitionBitmapIndex; // eax
  __int64 v11; // rdi
  CAnimatedTransitionVisual *v12; // rax
  __int64 v13; // rbp
  int v14; // eax
  unsigned int v15; // esi
  __int64 v16; // rbx
  CAnimatedTransitionVisual *v17; // rdi
  CAnimatedTransitionVisual *v19[5]; // [rsp+30h] [rbp-28h] BYREF

  v19[0] = 0LL;
  TransitionBitmapIndex = CTransitionVisualController::_GetTransitionBitmapIndex(a1, a2);
  v11 = (unsigned int)TransitionBitmapIndex;
  if ( TransitionBitmapIndex < 0 )
  {
    v15 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147467259,
      0x697u);
  }
  else
  {
    v12 = (CAnimatedTransitionVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                           + 16LL))(
                                         WPF::g_pProcessHeap,
                                         144LL);
    v19[1] = v12;
    if ( v12 && (v13 = CAnimationComponent::CAnimationComponent((__int64)v12, (__int64)a2, a3, a4, a5)) != 0 )
    {
      v14 = CAnimatedTransitionVisual::Create(v19);
      v15 = v14;
      if ( v14 >= 0 )
      {
        _mm_lfence();
        v16 = 56 * v11;
        v17 = v19[0];
        CAnimatedTransitionVisual::SetBitmap(
          (CBaseObject **)v19[0],
          *(struct CBaseImageProxy ***)(v16 + *((_QWORD *)a1 + 19) + 48));
        *((_QWORD *)v17 + 119) = *(_QWORD *)(*(_QWORD *)(v16 + *((_QWORD *)a1 + 19) + 48) + 24LL);
        *(_BYTE *)(v13 + 72) = 1;
        *((_DWORD *)v17 + 184) = *(_DWORD *)(a5 + 72);
        *((_DWORD *)v17 + 185) = a4;
        *((_BYTE *)v17 + 972) = CStoryboard::IsRTL();
        CAnimatedTransitionVisual::SetBeginRect(
          (struct tagPOINT *)v17,
          (const struct tagRECT *)(v16 + *((_QWORD *)a1 + 19) + 12LL));
        CAnimatedTransitionVisual::SetBeginRect(
          (struct tagPOINT *)v17,
          (const struct tagRECT *)(v16 + *((_QWORD *)a1 + 19) + 28LL));
        *(_QWORD *)(v13 + 40) = v17;
        _InterlockedIncrement((volatile signed __int32 *)v17 + 4);
        *a6 = v13;
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          v14,
          0x686u);
      }
      if ( v19[0] )
        CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v19[0] + 8));
      CBaseObject::Release((CBaseObject *)v13);
    }
    else
    {
      v15 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        -2147024882,
        0x684u);
    }
  }
  return v15;
}
