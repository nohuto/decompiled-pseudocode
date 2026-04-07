/*
 * XREFs of ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18000ED0C
 * Callers:
 *     ?StopIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x1800111D0 (-StopIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x1800111F0 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?DeactivateTimeline@CButton@@AEAAXPEAPEAV?$CTimeline@M@@@Z @ 0x18001DDAC (-DeactivateTimeline@CButton@@AEAAXPEAPEAV-$CTimeline@M@@@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180027828 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180029A50 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x180032070 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z @ 0x18005AC70 (-Stop@CDisplayAnimatedVisual@@QEAAJW4StopOption@1@@Z.c)
 *     ?DeActivate@CLivePreview@@QEAAJ_N@Z @ 0x18005CAA0 (-DeActivate@CLivePreview@@QEAAJ_N@Z.c)
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18005F94C (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     wil::details::lambda_call__lambda_b6ad21b81698ee59d063e67281553ae7___::_lambda_call__lambda_b6ad21b81698ee59d063e67281553ae7___ @ 0x1800628C4 (wil--details--lambda_call__lambda_b6ad21b81698ee59d063e67281553ae7___--_lambda_call__lambda_b6ad.c)
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x1800C26E0 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJXZ @ 0x1800C3A14 (-_FadeOutToGlass@CLivePreview@@AEAAJXZ.c)
 *     ?Stop@CRippleEffect@@QEAAJXZ @ 0x1800D1C50 (-Stop@CRippleEffect@@QEAAJXZ.c)
 *     ?CleanupTimeline@CScreenRotation@@AEAAXXZ @ 0x1800D25D4 (-CleanupTimeline@CScreenRotation@@AEAAXXZ.c)
 *     ?UnregisterGlobalTimeChanged@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F5680 (-UnregisterGlobalTimeChanged@ScreenRotationRejuvTransitionHandler@implementation@Private@Transit.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 */

char __fastcall CDesktopManager::UnregisterForGlobalTimeChangeNotification(struct CVisual *this)
{
  CDesktopManager *v1; // r9
  char v2; // bl
  unsigned int v4; // r8d
  unsigned int v5; // edx
  __int64 v6; // r10
  __int64 v8; // rcx
  __int64 v9; // rax

  v1 = CDesktopManager::s_pDesktopManagerInstance;
  v2 = 0;
  v4 = 0;
  v5 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 132);
  v6 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 63);
  if ( v5 )
  {
    do
    {
      if ( this == *(struct CVisual **)(v6 + 8LL * v4) )
        break;
      ++v4;
    }
    while ( v4 < v5 );
  }
  if ( v4 < v5 )
  {
    while ( v4 < v5 - 1 )
    {
      v8 = v4;
      v9 = *(_QWORD *)(v6 + 8LL * ++v4);
      *(_QWORD *)(v6 + 8 * v8) = v9;
      v5 = *((_DWORD *)v1 + 132);
    }
    *((_DWORD *)v1 + 132) = v5 - 1;
    v2 = 1;
    CBaseObject::Release(this);
  }
  return v2;
}
