/*
 * XREFs of ?CheckCompositionTextureSupport@CDevice@DirectComposition@@UEAAJPEAUIUnknown@@PEAH@Z @ 0x1800A0810
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeGuard@VCDeviceLock@DirectComposition@@@@YA?AV?$CGuard@VCDeviceLock@DirectComposition@@@@AEAVCDeviceLock@DirectComposition@@@Z @ 0x1800246CC (--$MakeGuard@VCDeviceLock@DirectComposition@@@@YA-AV-$CGuard@VCDeviceLock@DirectComposition@@@@A.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CompositionTextures@@@details@wil@@QEAA_NXZ @ 0x18009B8C4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CompositionTextures@@@details@wil.c)
 *     ?CheckSupport@CSynchronizationContext@@SAJPEAUIUnknown@@PEA_N1@Z @ 0x1801AEAF4 (-CheckSupport@CSynchronizationContext@@SAJPEAUIUnknown@@PEA_N1@Z.c)
 */

__int64 __fastcall DirectComposition::CDevice::CheckCompositionTextureSupport(
        DirectComposition::CDevice *this,
        struct IUnknown *a2,
        int *a3)
{
  __int64 v6; // rdx
  unsigned int v7; // ebx
  int v9; // eax
  _QWORD *v10[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  bool v12; // [rsp+48h] [rbp+10h] BYREF
  bool v13; // [rsp+58h] [rbp+20h] BYREF

  if ( !a2 )
  {
    v6 = 262LL;
LABEL_3:
    v7 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\dll\\globaldevice.cpp",
      (const char *)0x80070057LL);
    return v7;
  }
  if ( !a3 )
  {
    v6 = 263LL;
    goto LABEL_3;
  }
  *a3 = 0;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_CompositionTextures>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_CompositionTextures>::GetImpl'::`2'::impl) )
  {
    MakeGuard<DirectComposition::CDeviceLock>(
      (DirectComposition::CDeviceLock **)v10,
      (DirectComposition::CDevice *)((char *)this + 88));
    v12 = 0;
    v13 = 0;
    v9 = CSynchronizationContext::CheckSupport(a2, &v12, &v13);
    v7 = v9;
    if ( v9 >= 0 )
    {
      v7 = 0;
      *a3 = v12;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x116,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\dll\\globaldevice.cpp",
        (const char *)(unsigned int)v9);
    }
    CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(v10);
    return v7;
  }
  return 0LL;
}
