/*
 * XREFs of ?SetAttenuation0@PointLight@Composition@UI@Windows@@QEAAJM@Z @ 0x18017A378
 * Callers:
 *     ?put_ConstantAttenuation@Api@PointLight@Composition@UI@Windows@@UEAAJM@Z @ 0x18017ADF0 (-put_ConstantAttenuation@Api@PointLight@Composition@UI@Windows@@UEAAJM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@M@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18004D300 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@.c)
 *     ?OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z @ 0x180149ADC (-OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::PointLight::SetAttenuation0(
        Windows::UI::Composition::PointLight *this,
        float a2)
{
  int updated; // ebx
  __int64 v3; // rdx
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  float v7; // [rsp+58h] [rbp+10h] BYREF
  void **v8; // [rsp+60h] [rbp+18h] BYREF

  v7 = a2;
  if ( a2 < 0.0 )
  {
    Windows::UI::Composition::OriginateInvalidArgument(14, (__int64)L"ConstantAttenuation");
    v3 = 158LL;
    updated = -2147024809;
  }
  else
  {
    v5[0] = (char *)this + 324;
    v5[1] = &v7;
    v5[2] = &v7;
    v8 = (void **)&Windows::UI::Composition::PointLight::sc_ConstantAttenuation;
    updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<float>,Windows::UI::Composition::PropertyUpdateInfo>(
                (__int64 *)this,
                (__int64)v5,
                &v8);
    if ( updated >= 0 )
      return 0LL;
    v3 = 161LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v3,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtpointlight.cpp",
    (const char *)(unsigned int)updated);
  return (unsigned int)updated;
}
