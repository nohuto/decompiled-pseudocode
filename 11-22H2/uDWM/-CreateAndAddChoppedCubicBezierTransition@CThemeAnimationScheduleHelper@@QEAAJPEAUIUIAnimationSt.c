/*
 * XREFs of ?CreateAndAddChoppedCubicBezierTransition@CThemeAnimationScheduleHelper@@QEAAJPEAUIUIAnimationStoryboard2@@PEAUIUIAnimationVariable2@@PEAUIUIAnimationTransitionLibrary2@@NPEAN3I33IMMMMPEAU__MIDL___MIDL_itf_UIAnimation_0000_0002_0003@@@Z @ 0x1800AB388
 * Callers:
 *     ?AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NNPEAN2IPEAUTA_TIMINGFUNCTION@@W4TransformMode@@22I@Z @ 0x180045498 (-AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NN.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAA@PEAUIUIAnimationStoryboard2@@PEAUIUIAnimationVariable2@@PEAUIUIAnimationTransitionLibrary2@@PEAN3IPEAU__MIDL___MIDL_itf_UIAnimation_0000_0002_0003@@NNI@Z @ 0x1800AAB6C (--0CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAA@PEAUIUIAnimationStoryboard2@@PEAUIUIA.c)
 *     ??1CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAA@XZ @ 0x1800AACCC (--1CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CThemeAnimationScheduleHelper::CreateAndAddChoppedCubicBezierTransition(
        CThemeAnimationScheduleHelper *this,
        struct IUIAnimationStoryboard2 *a2,
        struct IUIAnimationVariable2 *a3,
        struct IUIAnimationTransitionLibrary2 *a4,
        double a5,
        double *a6,
        double *a7,
        unsigned int a8,
        double *a9,
        double *a10,
        unsigned int a11,
        float a12,
        float a13,
        float a14,
        float a15,
        struct __MIDL___MIDL_itf_UIAnimation_0000_0002_0003 *a16)
{
  double v18; // xmm7_8
  double v19; // xmm6_8
  double v20; // xmm1_8
  double v21; // xmm0_8
  __int64 v22; // rdx
  HRESULT v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // rdx
  struct __MIDL___MIDL_itf_UIAnimation_0000_0002_0003 *v26; // [rsp+40h] [rbp-C8h]
  __int64 v27; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+70h] [rbp-98h]
  _BYTE v29[192]; // [rsp+78h] [rbp-90h] BYREF
  LPVOID ppv; // [rsp+148h] [rbp+40h] BYREF

  ppv = this;
  if ( a8 > 4 )
    return 2147942450LL;
  if ( a5 <= 0.0 )
    return 2147942487LL;
  if ( a11 >= a8 )
    return 2147942487LL;
  v18 = a7[a11];
  v19 = a6[a11];
  if ( v18 == v19 )
    return 2147942487LL;
  v20 = a9 ? *a9 : a6[a11];
  v21 = a10 ? *a10 : a7[a11];
  if ( v20 != v21 && v18 > v19 == v20 > v21 )
    return 2147942487LL;
  if ( v18 > v19 == v19 > v20 && v18 > v19 == v21 > v19 )
    v20 = a6[a11];
  if ( v18 > v19 == v18 > v20 && v18 > v19 == v21 > v18 )
    v21 = a7[a11];
  CThemeAnimationScheduleHelper::CCubicBezierChopper::CCubicBezierChopper(
    (CThemeAnimationScheduleHelper::CCubicBezierChopper *)v29,
    a2,
    a3,
    a4,
    a6,
    a7,
    a8,
    v26,
    v20,
    v21,
    a11);
  ppv = 0LL;
  v23 = CoCreateInstance(&CLSID_UIAnimationManager2, 0LL, 3u, &GUID_d8b6f7d4_4109_4d3f_acee_879926968cb1, &ppv);
  if ( v23 >= 0 )
  {
    v23 = (*(__int64 (__fastcall **)(LPVOID, __int64, _QWORD))(*(_QWORD *)ppv + 72LL))(ppv, v22, 0LL);
    if ( v23 >= 0 )
    {
      v27 = 0LL;
      v23 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)ppv + 32LL))(ppv, v24, &v27);
      if ( v23 >= 0 )
      {
        a16 = 0LL;
        v23 = (*(__int64 (__fastcall **)(LPVOID, struct __MIDL___MIDL_itf_UIAnimation_0000_0002_0003 **))(*(_QWORD *)ppv + 48LL))(
                ppv,
                &a16);
        if ( v23 >= 0 )
        {
          v28 = 0LL;
          v23 = ((__int64 (__fastcall *)(struct IUIAnimationTransitionLibrary2 *))a4->lpVtbl->CreateCubicBezierLinearTransition)(a4);
          if ( v23 >= 0 )
          {
            v23 = (*(__int64 (__fastcall **)(struct __MIDL___MIDL_itf_UIAnimation_0000_0002_0003 *, __int64, __int64))(*(_QWORD *)&a16->_ + 24LL))(
                    a16,
                    v27,
                    v28);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
            if ( v23 >= 0 )
              v23 = (*(__int64 (__fastcall **)(struct __MIDL___MIDL_itf_UIAnimation_0000_0002_0003 *, __int64, _QWORD))(*(_QWORD *)&a16->_ + 96LL))(
                      a16,
                      v25,
                      0LL);
          }
          (*(void (__fastcall **)(struct __MIDL___MIDL_itf_UIAnimation_0000_0002_0003 *))(*(_QWORD *)&a16->_ + 16LL))(a16);
          if ( v23 >= 0 )
            v23 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v27 + 48LL))(v27, v29);
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      }
    }
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  }
  CThemeAnimationScheduleHelper::CCubicBezierChopper::~CCubicBezierChopper((CThemeAnimationScheduleHelper::CCubicBezierChopper *)v29);
  return (unsigned int)v23;
}
