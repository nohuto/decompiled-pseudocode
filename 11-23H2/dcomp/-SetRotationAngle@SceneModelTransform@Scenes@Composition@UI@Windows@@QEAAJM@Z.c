/*
 * XREFs of ?SetRotationAngle@SceneModelTransform@Scenes@Composition@UI@Windows@@QEAAJM@Z @ 0x180192F14
 * Callers:
 *     ?put_RotationAngle@Api@SceneModelTransform@Scenes@Composition@UI@Windows@@UEAAJM@Z @ 0x180193540 (-put_RotationAngle@Api@SceneModelTransform@Scenes@Composition@UI@Windows@@UEAAJM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@M@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18004D300 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneModelTransform::SetRotationAngle(
        Windows::UI::Composition::Scenes::SceneModelTransform *this,
        float a2)
{
  __int64 *v2; // rcx
  int updated; // eax
  unsigned int v4; // ebx
  int v6[2]; // [rsp+20h] [rbp-28h] BYREF
  float *v7; // [rsp+28h] [rbp-20h]
  float *v8; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  float v10; // [rsp+60h] [rbp+18h] BYREF
  void **v11; // [rsp+68h] [rbp+20h] BYREF

  v2 = (__int64 *)*((_QWORD *)this + 19);
  v10 = a2;
  *(_QWORD *)v6 = v2 + 34;
  v7 = &v10;
  v8 = &v10;
  v11 = (void **)&Windows::UI::Composition::ComponentTransform3D::sc_RotationAngle;
  updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<float>,Windows::UI::Composition::PropertyUpdateInfo>(
              v2,
              (__int64)v6,
              &v11);
  v4 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x10D,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtscenemodeltransform.cpp",
    (const char *)(unsigned int)updated);
  return v4;
}
