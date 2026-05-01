/*
 * XREFs of ?SnapWindowFromSnapAssist@CSnapAssistControllerBase@@UEAAJ_K0URect@Foundation@Windows@@W4SnapArrangementOptions@WindowSnapping@Shell@Internal@4@@Z @ 0x18066BB80
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ETUpdate@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180126974 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ETUpdate@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$SnapWindowFromSnapAssist@AEAPEAUHWND__@@AEAURect@Foundation@Windows@@I@CSnapComponentTelemetry@@SAXAEAPEAUHWND__@@AEAURect@Foundation@Windows@@$$QEAI@Z @ 0x180669210 (--$SnapWindowFromSnapAssist@AEAPEAUHWND__@@AEAURect@Foundation@Windows@@I@CSnapComponentTelemetr.c)
 *     ?TryGetTabOwnerAndNotifyOfSwitch@CSnapAssistControllerBase@@IEAA?AU?$pair@PEAUHWND__@@_N@std@@PEAUHWND__@@AEBUCRect@Geometry@@W4SnapArrangementOptions@WindowSnapping@Shell@Internal@Windows@@@Z @ 0x18066D25C (-TryGetTabOwnerAndNotifyOfSwitch@CSnapAssistControllerBase@@IEAA-AU-$pair@PEAUHWND__@@_N@std@@PE.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall CSnapAssistControllerBase::SnapWindowFromSnapAssist(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        float *a4,
        unsigned int a5)
{
  __int64 v7; // rbx
  float v9; // xmm0_4
  float v10; // xmm1_4
  int v11; // ecx
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 *v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  unsigned int v18[4]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v19; // [rsp+40h] [rbp-58h] BYREF
  _DWORD v20[4]; // [rsp+50h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v7 = a2;
  *(_QWORD *)&v19 = a2;
  v18[0] = a5;
  CSnapComponentTelemetry::SnapWindowFromSnapAssist<HWND__ * &,Windows::Foundation::Rect &,unsigned int>(
    (HWND *)&v19,
    (const struct Windows::Foundation::Rect *)a4,
    v18);
  v9 = a4[1] + a4[3];
  v10 = *a4 + a4[2];
  v11 = (int)a4[1];
  v20[0] = (int)*a4;
  v20[1] = v11;
  v20[2] = (int)v10;
  v20[3] = (int)v9;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ETUpdate>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_ETUpdate>::GetImpl'::`2'::impl,
    1u,
    (unsigned int)(int)v9,
    v12);
  CSnapAssistControllerBase::TryGetTabOwnerAndNotifyOfSwitch(a1 - 32, &v19, v7, v20, a5);
  v13 = v7;
  if ( (_QWORD)v19 )
  {
    v7 = v19 & -(__int64)(BYTE8(v19) != 0);
    v13 = v7;
  }
  if ( v13 )
  {
    v14 = *(__int64 **)(a1 + 104);
    v15 = *v14;
    v19 = *(_OWORD *)a4;
    v16 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int128 *))(v15 + 56))(v14, v7, a3, &v19);
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1FF,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
        (const char *)(unsigned int)v16,
        a5);
  }
  return 0LL;
}
