/*
 * XREFs of ?SetRotationAngleInDegrees@CompositionShape@Composition@UI@Windows@@QEAAJM@Z @ 0x180086F38
 * Callers:
 *     ?put_RotationAngleInDegrees@Api@CompositionShape@Composition@UI@Windows@@UEAAJM@Z @ 0x180086ED0 (-put_RotationAngleInDegrees@Api@CompositionShape@Composition@UI@Windows@@UEAAJM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@M@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18004D300 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@.c)
 *     ?EnsureComponentTransform@CompositionShape@Composition@UI@Windows@@AEAAJXZ @ 0x18005A150 (-EnsureComponentTransform@CompositionShape@Composition@UI@Windows@@AEAAJXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionShape::SetRotationAngleInDegrees(
        Windows::UI::Composition::CompositionShape *this,
        float a2)
{
  __int64 *v3; // rcx
  int updated; // ebx
  int v6[2]; // [rsp+20h] [rbp-38h] BYREF
  float *v7; // [rsp+28h] [rbp-30h]
  float *v8; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  float v10; // [rsp+60h] [rbp+8h] BYREF
  float v11; // [rsp+70h] [rbp+18h] BYREF
  void **v12; // [rsp+78h] [rbp+20h] BYREF

  if ( *((_QWORD *)this + 19) )
    goto LABEL_2;
  if ( a2 == 0.0 )
    return 0LL;
  updated = Windows::UI::Composition::CompositionShape::EnsureComponentTransform(this);
  if ( updated >= 0 )
  {
LABEL_2:
    v3 = (__int64 *)*((_QWORD *)this + 19);
    v11 = a2;
    *(_QWORD *)v6 = v3 + 24;
    v7 = &v10;
    v8 = &v11;
    v12 = (void **)&Windows::UI::Composition::ComponentTransform2D::sc_RotationAngleInDegrees;
    v10 = a2 * 0.017453292;
    updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<float>,Windows::UI::Composition::PropertyUpdateInfo>(
                v3,
                (__int64)v6,
                &v12);
    if ( updated >= 0 )
      return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBD,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionshape.cpp",
    (const char *)(unsigned int)updated);
  return (unsigned int)updated;
}
