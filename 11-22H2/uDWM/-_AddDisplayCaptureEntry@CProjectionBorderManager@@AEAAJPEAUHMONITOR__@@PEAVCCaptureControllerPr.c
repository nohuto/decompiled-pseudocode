/*
 * XREFs of ?_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@_N@Z @ 0x1800D3C64
 * Callers:
 *     ?StartDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D1760 (-StartDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@.c)
 *     ?StartVirtualMonitorCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D1980 (-StartVirtualMonitorCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_T.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180038438 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180038C6C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@Z @ 0x1800D009C (--4-$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x1800D0574 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderMan.c)
 *     ?_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D3E38 (-_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D3F64 (-_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_T.c)
 *     ?_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ @ 0x1800D433C (-_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ.c)
 *     ?_SendBoundsToCaptureControllerFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800D4EB0 (-_SendBoundsToCaptureControllerFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCC.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800D55A0 (-_UpdateCaptureControllerDefaultSDRBoostFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR_.c)
 *     ?_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800D572C (-_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectionBorderManager::_AddDisplayCaptureEntry(
        struct _RTL_GENERIC_TABLE *this,
        HMONITOR a2,
        struct CCaptureControllerProxy *a3,
        const struct DWM_CAPTURE_TOKEN *a4,
        bool a5)
{
  struct _RTL_GENERIC_TABLE *v9; // r15
  unsigned int v10; // ebx
  int v11; // r9d
  CProjectionBorderManager *v12; // rcx
  int updated; // eax
  CProjectionBorderManager *v14; // rcx
  CProjectionBorderManager *v15; // rcx
  unsigned int v17; // [rsp+20h] [rbp-50h]
  __int64 Buffer; // [rsp+30h] [rbp-40h] BYREF
  CBaseObject *v19; // [rsp+38h] [rbp-38h] BYREF
  __int128 v20; // [rsp+40h] [rbp-30h] BYREF
  __int64 v21; // [rsp+50h] [rbp-20h]
  __int64 v22; // [rsp+58h] [rbp-18h]
  int v23; // [rsp+60h] [rbp-10h]
  char v24; // [rsp+68h] [rbp-8h]

  Buffer = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0;
  v24 = 1;
  v9 = this + 7;
  if ( CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY>::FindElement(
         this + 7,
         *(_QWORD *)a4) )
  {
    v10 = -2147418113;
    v17 = 1380;
LABEL_3:
    v11 = v10;
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, v17);
    goto LABEL_20;
  }
  Buffer = *(_QWORD *)a4;
  *(_QWORD *)&v20 = a2;
  Microsoft::WRL::ComPtr<CCaptureControllerProxy>::operator=(&v19, (volatile signed __int32 *)a3);
  if ( !RtlInsertElementGenericTable(v9, &Buffer, 0x40u, 0LL) )
  {
    v10 = -2147024882;
    v17 = 1386;
    goto LABEL_3;
  }
  CProjectionBorderManager::_EnsureCursorStateForCapture((CProjectionBorderManager *)this);
  if ( a5 )
  {
    if ( a2 )
    {
      updated = CProjectionBorderManager::_AddProjectionBorderForDisplay((CProjectionBorderManager *)this, a2, a4);
      v10 = updated;
      if ( updated < 0 )
      {
        v17 = 1393;
LABEL_18:
        v11 = updated;
        goto LABEL_19;
      }
    }
    else
    {
      updated = CProjectionBorderManager::_AddProjectionBorderForAllDisplays((CProjectionBorderManager *)this, a4);
      v10 = updated;
      if ( updated < 0 )
      {
        v17 = 1397;
        goto LABEL_18;
      }
    }
  }
  updated = CProjectionBorderManager::_UpdateCaptureControllerTransformFromDisplay(v12, a2, a3);
  v10 = updated;
  if ( updated < 0 )
  {
    v17 = 1401;
    goto LABEL_18;
  }
  updated = CProjectionBorderManager::_SendBoundsToCaptureControllerFromDisplay(v14, a2, a3);
  v10 = updated;
  if ( updated < 0 )
  {
    v17 = 1402;
    goto LABEL_18;
  }
  updated = CProjectionBorderManager::_UpdateCaptureControllerDefaultSDRBoostFromDisplay(v15, a2, a3);
  v10 = updated;
  if ( updated < 0 )
  {
    v17 = 1403;
    goto LABEL_18;
  }
LABEL_20:
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)&v20 + 1);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v19);
  return v10;
}
