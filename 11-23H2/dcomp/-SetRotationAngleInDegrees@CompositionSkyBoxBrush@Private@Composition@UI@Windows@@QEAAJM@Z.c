/*
 * XREFs of ?SetRotationAngleInDegrees@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@QEAAJM@Z @ 0x18018138C
 * Callers:
 *     ?put_RotationAngleInDegrees@Partner@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@UEAAJM@Z @ 0x180182060 (-put_RotationAngleInDegrees@Partner@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@UEAAJ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@M@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18004D300 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@.c)
 */

__int64 __fastcall Windows::UI::Composition::Private::CompositionSkyBoxBrush::SetRotationAngleInDegrees(
        Windows::UI::Composition::Private::CompositionSkyBoxBrush *this,
        float a2)
{
  __int64 *v2; // rcx
  int updated; // eax
  unsigned int v4; // ebx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  float v8; // [rsp+50h] [rbp+8h] BYREF
  float v9; // [rsp+58h] [rbp+10h] BYREF
  void **v10; // [rsp+60h] [rbp+18h] BYREF

  v2 = (__int64 *)*((_QWORD *)this + 25);
  v8 = a2;
  v6[0] = v2 + 34;
  v6[1] = &v9;
  v6[2] = &v8;
  v10 = (void **)&Windows::UI::Composition::ComponentTransform3D::sc_RotationAngleInDegrees;
  v9 = a2 * 0.017453292;
  updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<float>,Windows::UI::Composition::PropertyUpdateInfo>(
              v2,
              (__int64)v6,
              &v10);
  v4 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x198,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionskyboxbrush.cpp",
    (const char *)(unsigned int)updated);
  return v4;
}
