/*
 * XREFs of ?SetRotationAngleInDegrees@SceneModelTransform@Scenes@Composition@UI@Windows@@QEAAJM@Z @ 0x180192FA8
 * Callers:
 *     ?put_RotationAngleInDegrees@Api@SceneModelTransform@Scenes@Composition@UI@Windows@@UEAAJM@Z @ 0x1801935D0 (-put_RotationAngleInDegrees@Api@SceneModelTransform@Scenes@Composition@UI@Windows@@UEAAJM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@M@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18004D300 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneModelTransform::SetRotationAngleInDegrees(
        Windows::UI::Composition::Scenes::SceneModelTransform *this,
        float a2)
{
  __int64 *v2; // rcx
  int updated; // eax
  unsigned int v4; // ebx
  int v6[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v7[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  float v9; // [rsp+60h] [rbp+18h] BYREF
  float v10; // [rsp+68h] [rbp+20h] BYREF

  v2 = (__int64 *)*((_QWORD *)this + 19);
  v10 = a2;
  v7[0] = v2 + 34;
  v7[1] = &v9;
  v7[2] = &v10;
  *(_QWORD *)v6 = &Windows::UI::Composition::ComponentTransform3D::sc_RotationAngleInDegrees;
  v9 = a2 * 0.017453292;
  updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<float>,Windows::UI::Composition::PropertyUpdateInfo>(
              v2,
              (__int64)v7,
              (void ***)v6);
  v4 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x123,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtscenemodeltransform.cpp",
    (const char *)(unsigned int)updated);
  return v4;
}
