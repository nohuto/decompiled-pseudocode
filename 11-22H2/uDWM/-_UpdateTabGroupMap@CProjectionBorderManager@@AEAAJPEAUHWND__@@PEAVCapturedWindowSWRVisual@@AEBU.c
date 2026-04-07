/*
 * XREFs of ?_UpdateTabGroupMap@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D59C0
 * Callers:
 *     ?UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D3830 (-UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180038438 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@VCapturedWindowSWRVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCapturedWindowSWRVisual@@@Z @ 0x1800D00D8 (--4-$ComPtr@VCapturedWindowSWRVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCapturedWindowSWRVisual@@@.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x1800D05D8 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderM.c)
 *     ?_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800D524C (-_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 *     ?_SetScreenCaptureForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800D5350 (-_SetScreenCaptureForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_UpdateTabGroupMap(
        struct _RTL_GENERIC_TABLE *this,
        HWND a2,
        struct CapturedWindowSWRVisual *a3,
        const struct DWM_CAPTURE_TOKEN *a4)
{
  char *Element; // rax
  CProjectionBorderManager *v7; // rcx
  CBaseObject **v8; // rsi
  HWND *v9; // rbx
  int v10; // edi
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Element = (char *)CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_TAB_GROUP_MAP_ENTRY>::FindElement(
                      this + 6,
                      *(_QWORD *)a4);
  v8 = (CBaseObject **)Element;
  if ( !Element )
    return 2147549183LL;
  v9 = (HWND *)(Element + 16);
  if ( Element[32] )
  {
    v10 = CProjectionBorderManager::_SetProjectionBorderForWindow(v7, *v9, 0);
    if ( v10 < 0 )
    {
      v11 = 1112LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
        (const char *)(unsigned int)v10);
      return (unsigned int)v10;
    }
  }
  v10 = CProjectionBorderManager::_SetScreenCaptureForWindow(v7, *v9, 0);
  if ( v10 < 0 )
  {
    v11 = 1114LL;
    goto LABEL_5;
  }
  *v9 = a2;
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(v8 + 3);
  Microsoft::WRL::ComPtr<CapturedWindowSWRVisual>::operator=(v8 + 3, (volatile signed __int32 *)a3);
  return 0LL;
}
