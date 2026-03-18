/*
 * XREFs of ?SessionInitialize@UmfdHostLifeTimeManager@@CA_NXZ @ 0x1C00F7C74
 * Callers:
 *     UmfdSessionInitialize @ 0x1C00F6DB0 (UmfdSessionInitialize.c)
 * Callees:
 *     <none>
 */

char UmfdHostLifeTimeManager::SessionInitialize(void)
{
  UmfdHostLifeTimeManager::s_WinlogonCallbackEvent = (PRKEVENT)Win32AllocPoolNonPaged(24LL, 1986348102LL);
  if ( !UmfdHostLifeTimeManager::s_WinlogonCallbackEvent )
    return 0;
  UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent = (PRKEVENT)Win32AllocPoolNonPaged(24LL, 1986348102LL);
  if ( !UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent )
    return 0;
  UmfdHostLifeTimeManager::s_InitialFontsAddedEvent = (PRKEVENT)Win32AllocPoolNonPaged(24LL, 1986348102LL);
  if ( !UmfdHostLifeTimeManager::s_InitialFontsAddedEvent )
    return 0;
  UmfdHostLifeTimeManager::s_SessionRasterizerOnHostReadyEvent = (PVOID)Win32AllocPoolNonPaged(24LL, 1986348102LL);
  if ( !UmfdHostLifeTimeManager::s_SessionRasterizerOnHostReadyEvent )
    return 0;
  GreInitializePushLock(&UmfdHostLifeTimeManager::s_ReadyLock);
  GreInitializePushLock(&UmfdHostLifeTimeManager::s_LaunchLock);
  KeInitializeEvent(UmfdHostLifeTimeManager::s_WinlogonCallbackEvent, SynchronizationEvent, 0);
  KeInitializeEvent(UmfdHostLifeTimeManager::s_SessionRasterizerInitializedEvent, NotificationEvent, 0);
  KeInitializeEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent, NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)UmfdHostLifeTimeManager::s_SessionRasterizerOnHostReadyEvent, NotificationEvent, 0);
  return 1;
}
