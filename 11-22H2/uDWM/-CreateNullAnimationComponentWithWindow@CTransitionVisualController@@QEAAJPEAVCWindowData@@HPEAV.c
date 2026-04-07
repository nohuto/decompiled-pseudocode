/*
 * XREFs of ?CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800EB818
 * Callers:
 *     ?_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimationComponent@@@Z @ 0x1800DD3FC (-_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimat.c)
 * Callees:
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x180004EA8 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x18000C350 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000C620 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000D2F0 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x180042BB8 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransitionVisualController::CreateNullAnimationComponentWithWindow(
        CTransitionVisualController *this,
        struct CWindowData *a2,
        int a3,
        struct CStoryboard *a4,
        bool a5,
        struct CAnimationComponent **a6)
{
  struct CAnimatedTransitionVisual *v6; // rsi
  int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  volatile signed __int32 *v15; // rbp
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned int v20; // ebx
  int v21; // eax
  int v22; // eax
  struct CAnimatedTransitionVisual *v23; // rcx
  struct CTopLevelWindow *v24; // rcx
  struct CAnimationComponent **v25; // rax
  struct CAnimatedTransitionVisual *v26; // rcx
  struct CAnimatedTransitionVisual *v28; // [rsp+78h] [rbp+10h] BYREF

  v6 = 0LL;
  v28 = 0LL;
  v11 = 4095;
  if ( a2 )
    v11 = *((_DWORD *)a2 + 170) & 0x400000 | 0xFFF;
  v12 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          160LL);
  if ( v12
    && (!a2 ? (v13 = 0LL) : (v13 = *((_QWORD *)a2 + 5)),
        (v15 = (volatile signed __int32 *)CAnimationComponent::CAnimationComponent(v12, v13, v11, a3, (__int64)a4)) != 0LL) )
  {
    v17 = CTransitionVisualController::_EnsureTransitionVisualRoot(this, v14, v16);
    v20 = v17;
    if ( v17 >= 0 )
    {
      v21 = CTransitionVisualController::_EnsureStagingVisualRoot(this, v18, v19);
      v20 = v21;
      if ( v21 >= 0 )
      {
        v22 = CAnimatedTransitionVisual::Create(&v28);
        v20 = v22;
        if ( v22 >= 0 )
        {
          v23 = v28;
          *((_DWORD *)v28 + 184) = *((_DWORD *)a4 + 18);
          *((_DWORD *)v23 + 185) = a3;
          if ( a5 )
          {
            if ( a2 )
            {
              v24 = (struct CTopLevelWindow *)*((_QWORD *)a2 + 55);
              if ( v24 )
                CTransitionVisualController::_MoveWindowOffscreen(v24, 1);
            }
          }
          v25 = a6;
          *a6 = (struct CAnimationComponent *)v15;
          _InterlockedIncrement(v15 + 2);
          v26 = v28;
          *((_QWORD *)*v25 + 5) = v28;
          _InterlockedIncrement((volatile signed __int32 *)v26 + 4);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2LL,
            v22,
            0x681u);
        }
        v6 = v28;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2LL,
          v21,
          0x67Fu);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2LL,
        v17,
        0x67Eu);
    }
    CBaseObject::Release((CBaseObject *)v15);
    if ( v6 )
      CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v6 + 8));
  }
  else
  {
    v20 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147024882,
      0x67Cu);
  }
  return v20;
}
