/*
 * XREFs of ?OnEnabledChanged@ControllerNavigationClientProxy@@MEAAJXZ @ 0x1801741E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x180081C60 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?ClientStateChanged@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x180171524 (-ClientStateChanged@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationClientProxy@@@.c)
 */

__int64 __fastcall ControllerNavigationClientProxy::OnEnabledChanged(ControllerNavigationClientProxy *this)
{
  ControllerNavigationManager *ControllerNavigationManager; // rax

  *((_BYTE *)this + 88) = 0;
  ControllerNavigationManager = ISMStatics::GetControllerNavigationManager();
  ControllerNavigationManager::ClientStateChanged(ControllerNavigationManager, this);
  return 0LL;
}
