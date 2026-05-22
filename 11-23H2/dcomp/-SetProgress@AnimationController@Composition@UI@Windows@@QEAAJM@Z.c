/*
 * XREFs of ?SetProgress@AnimationController@Composition@UI@Windows@@QEAAJM@Z @ 0x18011BE08
 * Callers:
 *     ?put_Progress@Api@AnimationController@Composition@UI@Windows@@UEAAJM@Z @ 0x18011C180 (-put_Progress@Api@AnimationController@Composition@UI@Windows@@UEAAJM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z @ 0x1800719B4 (-ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$NotifyPropertyChanged@M@ProxyObject@Composition@UI@Windows@@QEAAJIAEBMI@Z @ 0x18011BB8C (--$NotifyPropertyChanged@M@ProxyObject@Composition@UI@Windows@@QEAAJIAEBMI@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::AnimationController::SetProgress(
        Windows::UI::Composition::AnimationController *this,
        float a2)
{
  int v3; // edx
  int v4; // r9d
  int v5; // eax
  unsigned int v6; // ebx
  const char *v8; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  float v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  if ( a2 < 0.0 || a2 > 1.0 )
  {
    v6 = -2147024809;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0xC0,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtanimationcontroller.cpp",
      (const char *)0x80070057LL,
      (int)"Progress must be a value between 0.0 and 1.0.",
      v8);
  }
  else
  {
    if ( *((float *)this + 47) == a2 )
      return 0LL;
    v3 = *((_DWORD *)this + 32);
    *((float *)this + 47) = a2;
    DirectComposition::CDevice::ResourceSetFloatProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      v3,
      1,
      a2);
    v5 = Windows::UI::Composition::ProxyObject::NotifyPropertyChanged<float>(this, 1u, (__int64)&v10, v4);
    v6 = v5;
    if ( v5 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC8,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtanimationcontroller.cpp",
      (const char *)(unsigned int)v5);
  }
  return v6;
}
