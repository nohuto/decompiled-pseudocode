/*
 * XREFs of ?_CreateSingleGutterAnimationComponent@CTransitionVisualController@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUFakeGutterInfo@1@PEAPEAVCAnimationComponent@@@Z @ 0x1800EE630
 * Callers:
 *     ?CreateGutterAnimationComponentsForRect@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEBUtagRECT@@2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@4@Z @ 0x1800EC2F4 (-CreateGutterAnimationComponentsForRect@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANS.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180045F18 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180047160 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z @ 0x18009EF0C (-SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x1800A521C (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?IsRTL@CStoryboard@@SA_NXZ @ 0x1800D7618 (-IsRTL@CStoryboard@@SA_NXZ.c)
 */

__int64 __fastcall CTransitionVisualController::_CreateSingleGutterAnimationComponent(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 *a5)
{
  CAnimatedTransitionVisual *v9; // rax
  __int64 v10; // rsi
  int v11; // eax
  unsigned int v12; // edi
  CAnimatedTransitionVisual *v13; // rbx
  int v14; // edx
  CAnimatedTransitionVisual *v16[3]; // [rsp+30h] [rbp-18h] BYREF

  v16[0] = 0LL;
  v9 = (CAnimatedTransitionVisual *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 16LL))(
                                      WPF::g_pProcessHeap,
                                      144LL);
  v16[1] = v9;
  if ( v9
    && (v10 = CAnimationComponent::CAnimationComponent((__int64)v9, a2, a3, *(_DWORD *)a4, *(_QWORD *)(a4 + 8))) != 0 )
  {
    v11 = CAnimatedTransitionVisual::Create(v16);
    v12 = v11;
    if ( v11 >= 0 )
    {
      v13 = v16[0];
      CAnimatedTransitionVisual::SetBitmap((CBaseObject **)v16[0], *(struct CBaseImageProxy ***)(a1 + 184));
      *((_QWORD *)v13 + 119) = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 24LL);
      *(_BYTE *)(v10 + 72) = 1;
      v14 = *(_DWORD *)a4;
      *((_DWORD *)v13 + 184) = *(_DWORD *)(*(_QWORD *)(a4 + 8) + 72LL);
      *((_DWORD *)v13 + 185) = v14;
      *((_BYTE *)v13 + 972) = CStoryboard::IsRTL();
      CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)v13, (const struct tagRECT *)(a4 + 16));
      *(_OWORD *)((char *)v13 + 872) = *(_OWORD *)(a4 + 32);
      CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v13 + 8), 4096);
      *(_QWORD *)(v10 + 40) = v13;
      _InterlockedIncrement((volatile signed __int32 *)v13 + 4);
      *a5 = v10;
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        v11,
        0x64Au);
    }
    if ( v16[0] )
      CBaseObject::Release((CAnimatedTransitionVisual *)((char *)v16[0] + 8));
    CBaseObject::Release((CBaseObject *)v10);
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147024882,
      0x648u);
  }
  return v12;
}
