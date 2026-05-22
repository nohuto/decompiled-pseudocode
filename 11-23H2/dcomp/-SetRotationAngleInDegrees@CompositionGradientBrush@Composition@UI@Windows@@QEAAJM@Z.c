/*
 * XREFs of ?SetRotationAngleInDegrees@CompositionGradientBrush@Composition@UI@Windows@@QEAAJM@Z @ 0x18017450C
 * Callers:
 *     ?put_RotationAngleInDegrees@Api@?$CompositionGradientBrushT@VCompositionGradientBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJM@Z @ 0x18012C3E0 (-put_RotationAngleInDegrees@Api@-$CompositionGradientBrushT@VCompositionGradientBrush@Compositio.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@M@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18004D300 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@.c)
 *     ?EnsureComponentTransform@CompositionGradientBrush@Composition@UI@Windows@@AEAAJXZ @ 0x180071DA0 (-EnsureComponentTransform@CompositionGradientBrush@Composition@UI@Windows@@AEAAJXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionGradientBrush::SetRotationAngleInDegrees(
        __int64 **this,
        float a2)
{
  int updated; // ebx
  __int64 *v5; // rcx
  _QWORD v6[4]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  float v8; // [rsp+60h] [rbp+8h] BYREF
  float v9; // [rsp+70h] [rbp+18h] BYREF
  void **v10; // [rsp+78h] [rbp+20h] BYREF

  if ( !this[29] )
  {
    if ( a2 == 0.0 )
      return 0LL;
    updated = Windows::UI::Composition::CompositionGradientBrush::EnsureComponentTransform((Windows::UI::Composition::CompositionGradientBrush *)this);
    if ( updated < 0 )
    {
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x135,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiongradientbrush.cpp",
        (const char *)(unsigned int)updated);
      return (unsigned int)updated;
    }
  }
  v5 = this[29];
  v9 = a2;
  v6[0] = v5 + 24;
  v6[1] = &v8;
  v6[2] = &v9;
  v10 = (void **)&Windows::UI::Composition::ComponentTransform2D::sc_RotationAngleInDegrees;
  v8 = a2 * 0.017453292;
  updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<float>,Windows::UI::Composition::PropertyUpdateInfo>(
              v5,
              (__int64)v6,
              &v10);
  if ( updated < 0 )
    goto LABEL_4;
  return 0LL;
}
