/*
 * XREFs of ?CreateAnimationTransition@CAnimationEngine@@AEAAJIPEAUTA_TIMINGFUNCTION@@NPEANIPEAPEAUIUIAnimationTransition2@@@Z @ 0x180045748
 * Callers:
 *     ?AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NNPEAN2IPEAUTA_TIMINGFUNCTION@@W4TransformMode@@22I@Z @ 0x180045498 (-AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NN.c)
 * Callees:
 *     McTemplateU0qffff_EtwEventWriteTransfer @ 0x180045918 (McTemplateU0qffff_EtwEventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateTransition@CCubicBezierInterpolator@@SAJPEAUIUIAnimationTransitionFactory2@@NPEANIMMMMPEAPEAUIUIAnimationTransition2@@@Z @ 0x1800B32D0 (-CreateTransition@CCubicBezierInterpolator@@SAJPEAUIUIAnimationTransitionFactory2@@NPEANIMMMMPEA.c)
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
  int v12; // edx
  int v13; // ecx
  int v14; // r9d
  unsigned int v15; // edi
  int Transition; // eax
  int v18; // eax
  int v19; // edx
  int v20; // ecx
  int v21; // r9d

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
      v15 = Transition;
      if ( Transition < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Transition, 0x52Du, 0LL);
        return v15;
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
      v15 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x538u, 0LL);
        return v15;
      }
    }
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qffff_EtwEventWriteTransfer(
        v13,
        v12,
        a2,
        v14,
        *((_DWORD *)a3 + 2),
        *((_DWORD *)a3 + 3),
        *((_DWORD *)a3 + 4));
  }
  else
  {
    v18 = ((__int64 (__fastcall *)(struct IUIAnimationTransitionFactory2 *, struct IUIAnimationTransition2 **, double *, _QWORD, struct IUIAnimationTransition2 **))this[2]->lpVtbl[2].AddRef)(
            this[2],
            a7,
            a5,
            a6,
            a7);
    v15 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x542u, 0LL);
    }
    else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      McTemplateU0qffff_EtwEventWriteTransfer(v20, v19, a2, v21, 0, SLOBYTE(FLOAT_1_0), SLOBYTE(FLOAT_1_0));
    }
  }
  return v15;
}
