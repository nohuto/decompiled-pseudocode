/*
 * XREFs of ?SetRotationAngle@CompositionShape@Composition@UI@Windows@@QEAAJM@Z @ 0x180189A40
 * Callers:
 *     ?put_RotationAngle@Api@CompositionShape@Composition@UI@Windows@@UEAAJM@Z @ 0x180189ED0 (-put_RotationAngle@Api@CompositionShape@Composition@UI@Windows@@UEAAJM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@M@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18004D300 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@.c)
 *     ?EnsureComponentTransform@CompositionShape@Composition@UI@Windows@@AEAAJXZ @ 0x18005A150 (-EnsureComponentTransform@CompositionShape@Composition@UI@Windows@@AEAAJXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionShape::SetRotationAngle(__int64 **this, float a2)
{
  int updated; // ebx
  __int64 *v5; // rcx
  _QWORD v6[4]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  float v8; // [rsp+60h] [rbp+8h] BYREF
  void **v9; // [rsp+70h] [rbp+18h] BYREF

  if ( !this[19] )
  {
    if ( a2 == 0.0 )
      return 0LL;
    updated = Windows::UI::Composition::CompositionShape::EnsureComponentTransform((Windows::UI::Composition::CompositionShape *)this);
    if ( updated < 0 )
    {
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBC,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionshape.cpp",
        (const char *)(unsigned int)updated);
      return (unsigned int)updated;
    }
  }
  v5 = this[19];
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
