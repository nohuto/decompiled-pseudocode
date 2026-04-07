/*
 * XREFs of ?_SetCaptureControllerOffsetTransform@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy@@HH@Z @ 0x1800D5120
 * Callers:
 *     ?_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800D572C (-_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEA.c)
 *     ?_UpdateCaptureControllerTransformFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800D5820 (-_UpdateCaptureControllerTransformFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCap.c)
 * Callees:
 *     ?Update@CMatrixTransformProxy@@QEAAJAEBU_MilMatrix3x2D@@@Z @ 0x180015310 (-Update@CMatrixTransformProxy@@QEAAJAEBU_MilMatrix3x2D@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180038438 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$CreateProxy@VCMatrixTransformProxy@@@CCompositor@@IEAAJPEAPEAVCMatrixTransformProxy@@@Z @ 0x1800384BC (--$CreateProxy@VCMatrixTransformProxy@@@CCompositor@@IEAAJPEAPEAVCMatrixTransformProxy@@@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectionBorderManager::_SetCaptureControllerOffsetTransform(
        CProjectionBorderManager *this,
        struct CCaptureControllerProxy *a2,
        int a3,
        int a4)
{
  __int64 v7; // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  CMatrixTransformProxy *v12; // [rsp+20h] [rbp-40h] BYREF
  struct _MilMatrix3x2D v13; // [rsp+28h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v12 = 0LL;
  v7 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v12);
  v8 = CCompositor::CreateProxy<CMatrixTransformProxy>(v7, &v12);
  v9 = v8;
  if ( v8 >= 0 )
  {
    *(_OWORD *)&v13.S_11 = _xmm;
    *(_OWORD *)&v13.S_21 = _xmm;
    v13.DX = (double)a3;
    v13.DY = (double)a4;
    v8 = CMatrixTransformProxy::Update(v12, &v13);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 2) + 16LL) + 1016LL))(
             *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL),
             *(unsigned int *)(*((_QWORD *)a2 + 2) + 24LL),
             *(unsigned int *)(*((_QWORD *)v12 + 2) + 24LL));
      v9 = v8;
      if ( v8 >= 0 )
      {
        v9 = 0;
        goto LABEL_9;
      }
      v10 = 1574LL;
    }
    else
    {
      v10 = 1572LL;
    }
  }
  else
  {
    v10 = 1562LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
    (const char *)(unsigned int)v8);
LABEL_9:
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v12);
  return v9;
}
