/*
 * XREFs of ?CreateAnimationTransition@CAnimationEngine@@AEAAJIPEAUTA_TIMINGFUNCTION@@NPEANIPEAPEAUIUIAnimationTransition2@@@Z @ 0x180014CA8
 * Callers:
 *     ?AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NNPEAN2IPEAUTA_TIMINGFUNCTION@@W4TransformMode@@22I@Z @ 0x180014A9C (-AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NN.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0qffff_EtwEventWriteTransfer @ 0x180008428 (McTemplateU0qffff_EtwEventWriteTransfer.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateTransition@CCubicBezierInterpolator@@SAJPEAUIUIAnimationTransitionFactory2@@NPEANIMMMMPEAPEAUIUIAnimationTransition2@@@Z @ 0x1800AE640 (-CreateTransition@CCubicBezierInterpolator@@SAJPEAUIUIAnimationTransitionFactory2@@NPEANIMMMMPEA.c)
 */

__int64 __fastcall CAnimationEngine::CreateAnimationTransition(
        struct IUIAnimationTransitionFactory2 **this,
        int a2,
        struct TA_TIMINGFUNCTION *a3,
        double a4,
        double *a5,
        unsigned int a6,
        struct IUIAnimationTransition2 **a7)
{
  float v9; // xmm2_4
  float v10; // xmm1_4
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // edi
  int Transition; // eax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx

  if ( *(_DWORD *)a3 == 1 )
  {
    v9 = *((float *)a3 + 2);
    if ( v9 < 0.0 || v9 > 1.0 || (v10 = *((float *)a3 + 4), v10 < 0.0) || v10 > 1.0 )
    {
      Transition = CCubicBezierInterpolator::CreateTransition(
                     this[3],
                     a4,
                     a5,
                     a6,
                     *((float *)a3 + 1),
                     v9,
                     *((float *)a3 + 3),
                     *((float *)a3 + 4),
                     a7);
      v14 = Transition;
      if ( Transition < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Transition, 0x52Du);
        return v14;
      }
    }
    else
    {
      v11 = ((__int64 (__fastcall *)(struct IUIAnimationTransitionFactory2 *, struct IUIAnimationTransition2 **, double *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, struct IUIAnimationTransition2 **))this[2]->lpVtbl[5].AddRef)(
              this[2],
              a7,
              a5,
              a6,
              *((float *)a3 + 1),
              v9,
              *((float *)a3 + 3),
              v10,
              a7);
      v14 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x538u);
        return v14;
      }
    }
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qffff_EtwEventWriteTransfer(
        v13,
        v12,
        a2,
        *((float *)a3 + 1),
        *((_DWORD *)a3 + 2),
        *((_DWORD *)a3 + 3),
        *((_DWORD *)a3 + 4));
  }
  else
  {
    v17 = ((__int64 (__fastcall *)(struct IUIAnimationTransitionFactory2 *, struct IUIAnimationTransition2 **, double *, _QWORD, struct IUIAnimationTransition2 **))this[2]->lpVtbl[2].AddRef)(
            this[2],
            a7,
            a5,
            a6,
            a7);
    v14 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x542u);
    }
    else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      McTemplateU0qffff_EtwEventWriteTransfer(v19, v18, a2, 0.0, 0, SLOBYTE(FLOAT_1_0), SLOBYTE(FLOAT_1_0));
    }
  }
  return v14;
}
