/*
 * XREFs of ?SetRotationAngle@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@QEAAJM@Z @ 0x180181310
 * Callers:
 *     ?put_RotationAngle@Partner@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@UEAAJM@Z @ 0x180181FD0 (-put_RotationAngle@Partner@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@UEAAJM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@M@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18004D300 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@.c)
 */

__int64 __fastcall Windows::UI::Composition::Private::CompositionSkyBoxBrush::SetRotationAngle(
        Windows::UI::Composition::Private::CompositionSkyBoxBrush *this,
        float a2)
{
  __int64 *v2; // rcx
  int updated; // eax
  unsigned int v4; // ebx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void **v8; // [rsp+50h] [rbp+8h] BYREF
  float v9; // [rsp+58h] [rbp+10h] BYREF

  v2 = (__int64 *)*((_QWORD *)this + 25);
  v9 = a2;
  v6[0] = v2 + 34;
  v6[1] = &v9;
  v6[2] = &v9;
  v8 = (void **)&Windows::UI::Composition::ComponentTransform3D::sc_RotationAngle;
  updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<float>,Windows::UI::Composition::PropertyUpdateInfo>(
              v2,
              (__int64)v6,
              &v8);
  v4 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x179,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionskyboxbrush.cpp",
    (const char *)(unsigned int)updated);
  return v4;
}
