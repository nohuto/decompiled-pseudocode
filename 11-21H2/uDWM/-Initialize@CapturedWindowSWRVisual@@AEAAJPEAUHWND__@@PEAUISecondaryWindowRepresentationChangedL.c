/*
 * XREFs of ?Initialize@CapturedWindowSWRVisual@@AEAAJPEAUHWND__@@PEAUISecondaryWindowRepresentationChangedListener@@@Z @ 0x1800CBED0
 * Callers:
 *     ?Create@CapturedWindowSWRVisual@@SAJPEAUHWND__@@PEAPEAV1@@Z @ 0x1800CBC5C (-Create@CapturedWindowSWRVisual@@SAJPEAUHWND__@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010664 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x1800209A4 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180020CF0 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CapturedWindowSWRVisual::Initialize(
        CapturedWindowSWRVisual *this,
        HWND a2,
        struct ISecondaryWindowRepresentationChangedListener *a3)
{
  int SyncedWindowDataByHwnd; // ebx
  __int64 v6; // rdx
  CBaseObject **v8; // rdi
  void *v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CWindowData *v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                             a2,
                             &v11);
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v6 = 1440LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)(unsigned int)SyncedWindowDataByHwnd);
    return (unsigned int)SyncedWindowDataByHwnd;
  }
  v8 = (CBaseObject **)((char *)this + 24);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(v8);
  LODWORD(v9) = 100;
  SyncedWindowDataByHwnd = CSecondaryWindowRepresentation::Create(160LL, (__int64)a3, (__int64)v11, 0, v9, v8);
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v6 = 1448LL;
    goto LABEL_3;
  }
  if ( !*((_QWORD *)*v8 + 6) )
    return 2147942487LL;
  *((_BYTE *)*v8 + 416) = 1;
  return 0LL;
}
