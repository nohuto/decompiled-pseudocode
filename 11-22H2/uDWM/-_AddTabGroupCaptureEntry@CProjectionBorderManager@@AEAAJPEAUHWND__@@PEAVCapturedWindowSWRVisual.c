/*
 * XREFs of ?_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D41C8
 * Callers:
 *     ?StartWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D1BF0 (-StartWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180038438 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@Z @ 0x1800D009C (--4-$ComPtr@VCCaptureControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCaptureControllerProxy@@@.c)
 *     ??4?$ComPtr@VCapturedWindowSWRVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCapturedWindowSWRVisual@@@Z @ 0x1800D00D8 (--4-$ComPtr@VCapturedWindowSWRVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCapturedWindowSWRVisual@@@.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x1800D05D8 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderM.c)
 *     ?_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ @ 0x1800D433C (-_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ.c)
 *     ?_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800D4F60 (-_SendBoundsToCaptureControllerFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptur.c)
 *     ?_UpdateCaptureControllerTransformFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800D5820 (-_UpdateCaptureControllerTransformFromWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCCap.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProjectionBorderManager::_AddTabGroupCaptureEntry(
        struct _RTL_GENERIC_TABLE *this,
        HWND a2,
        struct CapturedWindowSWRVisual *a3,
        struct CCaptureControllerProxy *a4,
        const struct DWM_CAPTURE_TOKEN *a5)
{
  struct _RTL_GENERIC_TABLE *v9; // rbx
  unsigned int v10; // ebx
  int v11; // r9d
  int updated; // eax
  unsigned int v14; // [rsp+20h] [rbp-58h]
  __int64 Buffer; // [rsp+30h] [rbp-48h] BYREF
  __int128 v16; // [rsp+38h] [rbp-40h] BYREF
  CBaseObject *v17; // [rsp+48h] [rbp-30h] BYREF
  char v18; // [rsp+50h] [rbp-28h]

  Buffer = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 1;
  v9 = this + 6;
  if ( CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_TAB_GROUP_MAP_ENTRY>::FindElement(
         this + 6,
         *(_QWORD *)a5) )
  {
    v10 = -2147418113;
    v14 = 1083;
LABEL_3:
    v11 = v10;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, v14);
    goto LABEL_12;
  }
  Buffer = *(_QWORD *)a5;
  *((_QWORD *)&v16 + 1) = a2;
  Microsoft::WRL::ComPtr<CCaptureControllerProxy>::operator=((CBaseObject **)&v16, (volatile signed __int32 *)a4);
  Microsoft::WRL::ComPtr<CapturedWindowSWRVisual>::operator=(&v17, (volatile signed __int32 *)a3);
  if ( !RtlInsertElementGenericTable(v9, &Buffer, 0x28u, 0LL) )
  {
    v10 = -2147024882;
    v14 = 1091;
    goto LABEL_3;
  }
  CProjectionBorderManager::_EnsureCursorStateForCapture((CProjectionBorderManager *)this);
  updated = CProjectionBorderManager::_SendBoundsToCaptureControllerFromWindow((CProjectionBorderManager *)this, a2, a4);
  v10 = updated;
  if ( updated < 0 )
  {
    v14 = 1094;
LABEL_10:
    v11 = updated;
    goto LABEL_11;
  }
  updated = CProjectionBorderManager::_UpdateCaptureControllerTransformFromWindow(
              (CProjectionBorderManager *)this,
              a2,
              a4);
  v10 = updated;
  if ( updated < 0 )
  {
    v14 = 1095;
    goto LABEL_10;
  }
LABEL_12:
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v17);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease((CBaseObject **)&v16);
  return v10;
}
