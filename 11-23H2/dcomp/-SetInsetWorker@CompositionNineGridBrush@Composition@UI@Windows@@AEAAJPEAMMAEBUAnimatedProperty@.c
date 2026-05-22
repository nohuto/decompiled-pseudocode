/*
 * XREFs of ?SetInsetWorker@CompositionNineGridBrush@Composition@UI@Windows@@AEAAJPEAMMAEBUAnimatedProperty@AnimationHelper@234@@Z @ 0x180082618
 * Callers:
 *     ?SetInsetsWithValues@CompositionNineGridBrush@Composition@UI@Windows@@QEAAJMMMM@Z @ 0x180087DDC (-SetInsetsWithValues@CompositionNineGridBrush@Composition@UI@Windows@@QEAAJMMMM@Z.c)
 *     ?SetInsets@CompositionNineGridBrush@Composition@UI@Windows@@QEAAJM@Z @ 0x180169200 (-SetInsets@CompositionNineGridBrush@Composition@UI@Windows@@QEAAJM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@M@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18004D300 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@.c)
 *     ?OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z @ 0x180149ADC (-OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionNineGridBrush::SetInsetWorker(
        Windows::UI::Composition::CompositionNineGridBrush *this,
        float *a2,
        float a3,
        void **a4)
{
  int updated; // ebx
  __int64 v6; // rdx
  void **v7; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v8[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  float v10; // [rsp+60h] [rbp+18h] BYREF

  v10 = a3;
  if ( a3 < 0.0 )
  {
    Windows::UI::Composition::OriginateInvalidArgument(14LL, L"Inset");
    v6 = 160LL;
    updated = -2147024809;
  }
  else
  {
    v8[0] = a2;
    v8[1] = &v10;
    v7 = a4;
    v8[2] = &v10;
    updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<float>,Windows::UI::Composition::PropertyUpdateInfo>(
                (__int64 *)this,
                (__int64)v8,
                &v7);
    if ( updated >= 0 )
      return 0LL;
    v6 = 163LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionninegridbrush.cpp",
    (const char *)(unsigned int)updated);
  return (unsigned int)updated;
}
