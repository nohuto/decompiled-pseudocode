/*
 * XREFs of ?Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x18037FA30
 * Callers:
 *     <none>
 * Callees:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18000B4DC (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18010E4E8 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ??0?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18037C3CC (--0-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgRef.c)
 *     ??0TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA@XZ @ 0x18037C764 (--0TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA@XZ.c)
 *     ??1TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA@XZ @ 0x18037C988 (--1TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAA@XZ.c)
 *     ??4TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x18037CA68 (--4TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?ComputeConstraints@CVirtualTouchpadExperienceManager@@AEAAJAEBUTouchpadPositionAnchorInternal@@_N@Z @ 0x18037D278 (-ComputeConstraints@CVirtualTouchpadExperienceManager@@AEAAJAEBUTouchpadPositionAnchorInternal@@.c)
 *     ?FindMonitor@@YAPEAUHMONITOR__@@$$QEAV?$function@$$A6A_NPEAUHMONITOR__@@@Z@std@@@Z @ 0x18037DC6C (-FindMonitor@@YAPEAUHMONITOR__@@$$QEAV-$function@$$A6A_NPEAUHMONITOR__@@@Z@std@@@Z.c)
 *     ?PositionCursorForInteraction@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x18037EDE8 (-PositionCursorForInteraction@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?SetupExperienceFrame@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x18037F67C (-SetupExperienceFrame@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?StartActivity@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAXXZ @ 0x18037FCC4 (-StartActivity@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAXXZ.c)
 *     ?UpdateFramePositionAndSize@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1803803EC (-UpdateFramePositionAndSize@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualTouchpadExperienceManager::Show(__int64 a1, int a2, float *a3)
{
  char v7; // si
  int updated; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  char v11; // bl
  __int64 v12; // rdx
  __int64 v13; // rax
  DWORD pcbData; // [rsp+40h] [rbp-C0h] BYREF
  POINT pt; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B0h]
  __int64 v17; // [rsp+58h] [rbp-A8h]
  char v18; // [rsp+60h] [rbp-A0h]
  _QWORD v19[8]; // [rsp+70h] [rbp-90h] BYREF
  int pvData; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v21[64]; // [rsp+B4h] [rbp-4Ch] BYREF
  __int64 v22; // [rsp+F4h] [rbp-Ch]
  _QWORD v23[40]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v24[320]; // [rsp+240h] [rbp+140h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+3B8h] [rbp+2B8h]

  if ( (*(_DWORD *)(a1 + 760) & 0xFFFFFFFB) != 0 )
    return 0LL;
  v17 = a1;
  v7 = 1;
  v18 = 1;
  *(_DWORD *)(a1 + 760) = 1;
  TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::TouchpadLaunched((TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *)v24);
  TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::StartActivity((TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *)v24);
  if ( *(_QWORD *)(a1 + 344)
    || (updated = CVirtualTouchpadExperienceManager::SetupExperienceFrame((CVirtualTouchpadExperienceManager *)a1),
        v9 = updated,
        updated >= 0) )
  {
    pvData = 1;
    memset_0(v21, 0, 0x48uLL);
    pcbData = 76;
    if ( a2 == 1
      && !RegGetValueW(
            HKEY_CURRENT_USER,
            L"SOFTWARE\\Microsoft\\Touchpad\\",
            L"Anchor",
            0x20000008u,
            0LL,
            &pvData,
            &pcbData)
      && pcbData == 76 )
    {
      v11 = 1;
      v19[0] = off_18064D760;
      v19[1] = &pvData;
      v19[7] = v19;
      pt = (POINT)FindMonitor((__int64)v19);
      std::_Func_class<void,>::_Tidy((__int64)v19, v12);
      v13 = v22;
    }
    else
    {
      v11 = 0;
      pt.x = (int)*a3;
      pt.y = (int)a3[1];
      pt = (POINT)MonitorFromPoint(pt, 2u);
      v13 = *(_QWORD *)(a1 + 292);
    }
    v16 = v13;
    updated = CVirtualTouchpadExperienceManager::ComputeConstraints(
                (CVirtualTouchpadExperienceManager *)a1,
                (HMONITOR *)&pt,
                v11);
    v9 = updated;
    if ( updated >= 0 )
    {
      updated = CVirtualTouchpadExperienceManager::UpdateFramePositionAndSize((CVirtualTouchpadExperienceManager *)a1);
      v9 = updated;
      if ( updated >= 0 )
      {
        CVirtualTouchpadExperienceManager::PositionCursorForInteraction((CVirtualTouchpadExperienceManager *)a1);
        *(_BYTE *)(a1 + 316) = 0;
        updated = CSingleViewShellExperience::Show(
                    a1 + 64,
                    (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)3);
        v9 = updated;
        if ( updated >= 0 )
        {
          v7 = 0;
          wil::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchpadControllerExperienceManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
            (struct wil::details::IFailureCallback *)v23,
            (__int64)v24,
            0);
          v23[0] = &TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::`vftable';
          TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::operator=(a1 + 376, (__int64)v23);
          TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::~TouchpadLaunched((TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *)v23);
          v9 = 0;
          goto LABEL_19;
        }
        v10 = 581LL;
      }
      else
      {
        v10 = 576LL;
      }
    }
    else
    {
      v10 = 575LL;
    }
  }
  else
  {
    v10 = 546LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
    (const char *)(unsigned int)updated);
LABEL_19:
  TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched::~TouchpadLaunched((TouchpadControllerExperienceManagerTelemetry::TouchpadLaunched *)v24);
  if ( v7 )
    *(_DWORD *)(a1 + 760) = 4;
  return v9;
}
