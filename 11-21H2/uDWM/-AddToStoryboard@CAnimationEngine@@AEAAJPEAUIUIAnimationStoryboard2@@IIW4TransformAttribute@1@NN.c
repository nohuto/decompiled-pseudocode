/*
 * XREFs of ?AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NNPEAN2IPEAUTA_TIMINGFUNCTION@@W4TransformMode@@22I@Z @ 0x180014A9C
 * Callers:
 *     ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x180015B1C (-SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E570 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateAnimationTransition@CAnimationEngine@@AEAAJIPEAUTA_TIMINGFUNCTION@@NPEANIPEAPEAUIUIAnimationTransition2@@@Z @ 0x180014CA8 (-CreateAnimationTransition@CAnimationEngine@@AEAAJIPEAUTA_TIMINGFUNCTION@@NPEANIPEAPEAUIUIAnimat.c)
 *     ?GetTransitionVisualSetIndex@CAnimationEngine@@AEAAHI@Z @ 0x180014DD0 (-GetTransitionVisualSetIndex@CAnimationEngine@@AEAAHI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateAndAddChoppedCubicBezierTransition@CThemeAnimationScheduleHelper@@QEAAJPEAUIUIAnimationStoryboard2@@PEAUIUIAnimationVariable2@@PEAUIUIAnimationTransitionLibrary2@@NPEAN3I33IMMMMPEAU__MIDL___MIDL_itf_UIAnimation_0000_0002_0003@@@Z @ 0x1800A5F40 (-CreateAndAddChoppedCubicBezierTransition@CThemeAnimationScheduleHelper@@QEAAJPEAUIUIAnimationSt.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAnimationEngine::AddToStoryboard(
        __int64 a1,
        struct IUIAnimationStoryboard2 *a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        double a6,
        double a7,
        double *a8,
        double *a9,
        unsigned int a10,
        struct TA_TIMINGFUNCTION *a11,
        unsigned int a12,
        double *a13,
        double *a14,
        unsigned int a15)
{
  __int64 v15; // rbx
  struct IUIAnimationStoryboard2 *v16; // rdi
  unsigned int v18; // esi
  int TransitionVisualSetIndex; // eax
  double *v20; // r14
  double v21; // xmm6_8
  int v22; // eax
  int v23; // ebx
  CThemeAnimationScheduleHelper *v24; // rcx
  double v25; // xmm6_8
  __int64 v27; // rdx
  __int64 v28; // rdi
  __int64 (__fastcall *v29)(__int64, __int64, __int64 *); // rbx
  __int64 v30; // rdx
  __int64 v31; // rdi
  __int64 (__fastcall *v32)(__int64, double *, _QWORD, __int64 *); // rbx
  struct __MIDL___MIDL_itf_UIAnimation_0000_0002_0003 *v33; // [rsp+80h] [rbp-31h]
  char v34; // [rsp+88h] [rbp-29h]
  struct IUIAnimationTransition2 *v35; // [rsp+90h] [rbp-21h] BYREF
  __int64 v36; // [rsp+98h] [rbp-19h] BYREF
  __int64 v37[3]; // [rsp+A0h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+3Fh]

  v15 = a4;
  v16 = a2;
  v18 = 0;
  v37[0] = 0LL;
  v36 = 0LL;
  v35 = 0LL;
  TransitionVisualSetIndex = CAnimationEngine::GetTransitionVisualSetIndex((CAnimationEngine *)a1, a3);
  if ( TransitionVisualSetIndex < 0 )
  {
    v23 = -2147467259;
    goto LABEL_38;
  }
  _mm_lfence();
  v20 = *(double **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40)
                                                       + 8LL * (unsigned int)TransitionVisualSetIndex)
                                           + 40LL)
                               + 8 * v15)
                   + 8LL * a5
                   + 8);
  v34 = 0;
  if ( !*(_QWORD *)v20 )
  {
    v21 = 0.0;
    if ( a13 && a15 < a10 )
    {
      v21 = a8[a15];
      a8[a15] = *a13;
    }
    v22 = (*(__int64 (__fastcall **)(_QWORD, double *, _QWORD, double *))(**(_QWORD **)(a1 + 8) + 24LL))(
            *(_QWORD *)(a1 + 8),
            a8,
            a10,
            v20);
    v23 = v22;
    if ( v22 < 0 )
    {
      v27 = 1220LL;
LABEL_36:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v27,
        (int)"clientcore\\windows\\dwm\\udwm\\animationengine.cpp",
        (const char *)(unsigned int)v22);
LABEL_38:
      v18 = v23;
      goto LABEL_15;
    }
    v34 = 1;
    if ( a13 && a15 < a10 )
      a8[a15] = v21;
    v16 = a2;
  }
  v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)v20 + 192LL))(*(_QWORD *)v20, 0LL, a12);
  v23 = v22;
  if ( v22 < 0 )
  {
    v27 = 1230LL;
    goto LABEL_36;
  }
  if ( a6 <= v20[1] )
    goto LABEL_9;
  v28 = *(_QWORD *)(a1 + 16);
  v29 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v28 + 40LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v37);
  v22 = v29(v28, v30, v37);
  v23 = v22;
  if ( v22 < 0 )
  {
    v27 = 1235LL;
    goto LABEL_36;
  }
  v16 = a2;
  v22 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, _QWORD, __int64))a2->lpVtbl->AddTransition)(
          a2,
          *(_QWORD *)v20,
          v37[0]);
  v23 = v22;
  if ( v22 < 0 )
  {
    v27 = 1236LL;
    goto LABEL_36;
  }
  v20[1] = a6;
LABEL_9:
  if ( v34 )
    goto LABEL_10;
  v31 = *(_QWORD *)(a1 + 16);
  v32 = *(__int64 (__fastcall **)(__int64, double *, _QWORD, __int64 *))(*(_QWORD *)v31 + 32LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v36);
  v22 = v32(v31, a8, a10, &v36);
  v23 = v22;
  if ( v22 < 0 )
  {
    v27 = 1244LL;
    goto LABEL_36;
  }
  v16 = a2;
  v22 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, _QWORD, __int64))a2->lpVtbl->AddTransition)(
          a2,
          *(_QWORD *)v20,
          v36);
  v23 = v22;
  if ( v22 < 0 )
  {
    v27 = 1245LL;
    goto LABEL_36;
  }
LABEL_10:
  if ( (a13 || a14) && *(_DWORD *)a11 == 1 )
  {
    v25 = a7;
    v22 = CThemeAnimationScheduleHelper::CreateAndAddChoppedCubicBezierTransition(
            v24,
            v16,
            *(struct IUIAnimationVariable2 **)v20,
            *(struct IUIAnimationTransitionLibrary2 **)(a1 + 16),
            a7,
            a8,
            a9,
            a10,
            a13,
            a14,
            a15,
            *((float *)a11 + 1),
            *((float *)a11 + 2),
            *((float *)a11 + 3),
            *((float *)a11 + 4),
            v33);
    v23 = v22;
    if ( v22 < 0 )
    {
      v27 = 1274LL;
      goto LABEL_36;
    }
  }
  else
  {
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v35);
    v25 = a7;
    v22 = CAnimationEngine::CreateAnimationTransition((CAnimationEngine *)a1, a3, a11, a7, a9, a10, &v35);
    v23 = v22;
    if ( v22 < 0 )
    {
      v27 = 1251LL;
      goto LABEL_36;
    }
    v22 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, _QWORD, struct IUIAnimationTransition2 *))v16->lpVtbl->AddTransition)(
            v16,
            *(_QWORD *)v20,
            v35);
    v23 = v22;
    if ( v22 < 0 )
    {
      v27 = 1254LL;
      goto LABEL_36;
    }
  }
  v20[1] = v25 + v20[1];
LABEL_15:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v35);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v36);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v37);
  return v18;
}
