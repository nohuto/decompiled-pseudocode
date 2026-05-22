/*
 * XREFs of ?SetNormalScale@ScenePbrMaterial@Scenes@Composition@UI@Windows@@QEAAJM@Z @ 0x1801918E8
 * Callers:
 *     ?put_NormalScale@Api@ScenePbrMaterial@Scenes@Composition@UI@Windows@@UEAAJM@Z @ 0x180192470 (-put_NormalScale@Api@ScenePbrMaterial@Scenes@Composition@UI@Windows@@UEAAJM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@M@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18004D300 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::ScenePbrMaterial::SetNormalScale(
        Windows::UI::Composition::Scenes::ScenePbrMaterial *this,
        float a2)
{
  int updated; // eax
  unsigned int v3; // ebx
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void **v7; // [rsp+50h] [rbp+8h] BYREF
  float v8; // [rsp+58h] [rbp+10h] BYREF

  v8 = a2;
  v5[0] = (char *)this + 232;
  v5[1] = &v8;
  v5[2] = &v8;
  v7 = (void **)&Windows::UI::Composition::Scenes::ScenePbrMaterial::sc_NormalScale;
  updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<float>,Windows::UI::Composition::PropertyUpdateInfo>(
              (__int64 *)this,
              (__int64)v5,
              &v7);
  v3 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB3,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtspatialpbrmaterial.cpp",
    (const char *)(unsigned int)updated);
  return v3;
}
