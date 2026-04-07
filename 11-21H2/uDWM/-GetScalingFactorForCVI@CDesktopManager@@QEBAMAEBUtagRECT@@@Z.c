/*
 * XREFs of ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x180011304
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180006AA0 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEBUtagRECT@@PEAVCVisual@@@Z @ 0x18004EC20 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEBUtagRECT@@PEAVCVisual@@@Z.c)
 *     ?_IsSameAsTargetCachedCVI@CDesktopManager@@CA_NHH@Z @ 0x18005F338 (-_IsSameAsTargetCachedCVI@CDesktopManager@@CA_NHH@Z.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x1800F0360 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ?_IsMultiMon@CDesktopManager@@AEBA_NXZ @ 0x180011448 (-_IsMultiMon@CDesktopManager@@AEBA_NXZ.c)
 *     ?GetScalingInfoForMonitor@@YAJPEAUHMONITOR__@@PEAUSCALINGINFO@@@Z @ 0x1800114C0 (-GetScalingInfoForMonitor@@YAJPEAUHMONITOR__@@PEAUSCALINGINFO@@@Z.c)
 *     ?GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x180011518 (-GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 *     _o_sqrtf_0 @ 0x180060F04 (_o_sqrtf_0.c)
 */

float __fastcall CDesktopManager::GetScalingFactorForCVI(CDesktopManager *this, const struct tagRECT *a2)
{
  float v3; // xmm6_4
  int v5; // eax
  int v6; // ecx
  int v7; // r9d
  int v8; // eax
  int v9; // r8d
  HMONITOR v10; // rbx
  _BYTE v12[16]; // [rsp+20h] [rbp-48h] BYREF
  int v13; // [rsp+30h] [rbp-38h]
  int v14; // [rsp+34h] [rbp-34h]
  enum DEVICE_SCALE_FACTOR v15; // [rsp+80h] [rbp+18h] BYREF

  v3 = FLOAT_1_0;
  if ( !CDesktopManager::_IsMultiMon(this) )
  {
    v5 = 0;
    if ( *((_DWORD *)this + 99) - *((_DWORD *)this + 97) >= 0 )
      v5 = *((_DWORD *)this + 99) - *((_DWORD *)this + 97);
    v6 = 0;
    if ( *((_DWORD *)this + 100) - *((_DWORD *)this + 98) >= 0 )
      v6 = *((_DWORD *)this + 100) - *((_DWORD *)this + 98);
    v7 = 0;
    v8 = v6 * v5 / 2;
    if ( a2->bottom - a2->top >= 0 )
      v7 = a2->bottom - a2->top;
    v9 = 0;
    if ( a2->right - a2->left >= 0 )
      v9 = a2->right - a2->left;
    if ( v9 * v7 > v8 )
    {
      v10 = MonitorFromRect((LPCRECT)((char *)this + 388), 2u);
      if ( (int)GetScalingInfoForMonitor(v10, (struct SCALINGINFO *)v12) >= 0
        && o_sqrtf_0((float)(v14 * v14) + (float)(v13 * v13)) < 292.1
        && (int)GetScaleFactorForMonitorImp(v10, &v15) >= 0 )
      {
        if ( v15 >= SCALE_180_PERCENT )
        {
          return FLOAT_0_5;
        }
        else if ( v15 >= SCALE_140_PERCENT )
        {
          return FLOAT_0_75;
        }
      }
    }
  }
  return v3;
}
