/*
 * XREFs of ?SetRotationAngle@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJM@Z @ 0x180159B00
 * Callers:
 *     ?put_RotationAngle@Api@?$CompositionSurfaceBrushT@VCompositionSurfaceBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJM@Z @ 0x18012C330 (-put_RotationAngle@Api@-$CompositionSurfaceBrushT@VCompositionSurfaceBrush@Composition@UI@Window.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@M@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18004D300 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@.c)
 *     ?EnsureComponentTransform@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJXZ @ 0x18006E764 (-EnsureComponentTransform@CompositionSurfaceBrush@Composition@UI@Windows@@QEAAJXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionSurfaceBrush::SetRotationAngle(__int64 **this, float a2)
{
  int updated; // ebx
  __int64 *v5; // rcx
  _QWORD v6[4]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  float v8; // [rsp+60h] [rbp+8h] BYREF
  void **v9; // [rsp+70h] [rbp+18h] BYREF

  if ( !this[36] )
  {
    if ( a2 == 0.0 )
      return 0LL;
    updated = Windows::UI::Composition::CompositionSurfaceBrush::EnsureComponentTransform((Windows::UI::Composition::CompositionSurfaceBrush *)this);
    if ( updated < 0 )
    {
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2FD,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionsurfacebrush.cpp",
        (const char *)(unsigned int)updated);
      return (unsigned int)updated;
    }
  }
  v5 = this[36];
  v8 = a2;
  v6[0] = v5 + 24;
  v6[1] = &v8;
  v6[2] = &v8;
  v9 = (void **)&Windows::UI::Composition::ComponentTransform2D::sc_RotationAngle;
  updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<float>,Windows::UI::Composition::PropertyUpdateInfo>(
              v5,
              (__int64)v6,
              &v9);
  if ( updated < 0 )
    goto LABEL_4;
  return 0LL;
}
