/*
 * XREFs of ?TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x1801795E0
 * Callers:
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x18017A0C4 (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z @ 0x180100230 (-Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z.c)
 *     ?SetInjectionMechanism@ManipulationInjector@@QEAAXW4INJECTION_MECHANISM@@@Z @ 0x180101740 (-SetInjectionMechanism@ManipulationInjector@@QEAAXW4INJECTION_MECHANISM@@@Z.c)
 *     ?SetPanOverlapType@ManipulationInjector@@QEAAXW4OVERLAP_TYPE@@@Z @ 0x1801017B8 (-SetPanOverlapType@ManipulationInjector@@QEAAXW4OVERLAP_TYPE@@@Z.c)
 *     ?AdjustPointToBounds@ControllerProcessor@@CA?AUtagPOINT@@U2@PEAUtagRECT@@@Z @ 0x180175DF0 (-AdjustPointToBounds@ControllerProcessor@@CA-AUtagPOINT@@U2@PEAUtagRECT@@@Z.c)
 *     ?Attach@InjectionDevice@@QEAAJXZ @ 0x1801763F8 (-Attach@InjectionDevice@@QEAAJXZ.c)
 *     ?UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ @ 0x180179EB4 (-UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ.c)
 *     ?ValidateBounds@ControllerProcessor@@CA_NPEAUtagRECT@@@Z @ 0x18017A540 (-ValidateBounds@ControllerProcessor@@CA_NPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall ControllerProcessor::TransitionToEnabled(
        ControllerProcessor *this,
        struct tagRECT *a2,
        struct tagPOINT *a3)
{
  const RECT *v5; // rcx
  POINT *v6; // r8
  __int64 v7; // rdx
  POINT v8; // rdx
  HMONITOR v9; // rdx
  int v10; // edx
  int v11; // r8d
  float v12; // xmm1_4
  int v13; // eax
  struct tagRECT v15; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v16[16]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( !a2 )
  {
    v7 = 1045LL;
    goto LABEL_13;
  }
  if ( !ControllerProcessor::ValidateBounds(a2) )
  {
    v7 = 1010LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( v6 )
  {
    v8 = *v6;
    *((POINT *)this + 45) = *v6;
    if ( !PtInRect(v5, v8) )
      *((struct tagPOINT *)this + 45) = ControllerProcessor::AdjustPointToBounds(
                                          *(struct tagPOINT *)((char *)this + 360),
                                          a2);
  }
  if ( !*((_BYTE *)this + 1256) )
  {
    GetPointerDeviceRects(-1LL, v16, &v15);
    ManipulationInjector::SetInjectionMechanism((ControllerProcessor *)((char *)this + 448));
    ManipulationInjector::SetPanOverlapType((__int64)this + 448, 2u);
    ManipulationInjector::Initialize((ControllerProcessor *)((char *)this + 448), v9, &v15);
    *((_QWORD *)this + 155) = ((unsigned __int64)this + 80) & -(__int64)(this != 0LL);
    *((_BYTE *)this + 1256) = 1;
  }
  *(struct tagRECT *)((char *)this + 312) = *a2;
  v10 = (int)(float)((float)*((int *)this + 80) - 8.0);
  v11 = (int)(float)((float)*((int *)this + 79) + 8.0);
  v12 = (float)*((int *)this + 81) - 8.0;
  *((_DWORD *)this + 101) = (int)(float)((float)*((int *)this + 78) + 8.0);
  *((_DWORD *)this + 102) = v11;
  *((_DWORD *)this + 103) = v10;
  *((_DWORD *)this + 104) = (int)v12;
  v13 = InjectionDevice::Attach((ControllerProcessor *)((char *)this + 4392));
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x40F,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v13,
      v15.left);
  ControllerProcessor::UpdateManipulationInjectionRect(this);
  return 0LL;
}
