/*
 * XREFs of ?InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x18011CC48
 * Callers:
 *     ?DownLevelDragTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BAF30 (-DownLevelDragTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?DownLevelPressTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BB048 (-DownLevelPressTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?DownLevelReleaseTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x1800BB120 (-DownLevelReleaseTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 * Callees:
 *     ?AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z @ 0x18011B6D8 (-AddContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z.c)
 *     ?InjectAndScrub@ManipulationInjector@@AEAAXXZ @ 0x18011C42C (-InjectAndScrub@ManipulationInjector@@AEAAXXZ.c)
 *     ?IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x18011D3A0 (-IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z @ 0x18011D56C (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z.c)
 *     ?UpdateContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z @ 0x18011D940 (-UpdateContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z.c)
 */

void __fastcall ManipulationInjector::InjectDrag(ManipulationInjector *this, struct tagPOINT *a2, unsigned int a3)
{
  bool v6; // al
  struct tagPOINT v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  const char *v10; // r9

  if ( *((_BYTE *)this + 13) )
    DbgPrint("Drag pt: %d,%d   DeviceId = %d\n", a2->x, a2->y, a3);
  if ( (*((_DWORD *)this + 22) & 0xFFFFFF7F) != 0 )
  {
    if ( *((_DWORD *)this + 22) == 64 )
    {
      v6 = ManipulationInjector::IsInContactForDeviceId(this, a3);
      v7 = *a2;
      if ( v6 )
        ManipulationInjector::UpdateContact(this, v7, 0, a3);
      else
        ManipulationInjector::AddContact((struct tagPOINT *)this, v7, 0, (const char *)a3);
      ManipulationInjector::InjectAndScrub(this, v8, v9, v10);
    }
  }
  else
  {
    ManipulationInjector::StartManipulation(this, 64LL, *a2, a3);
  }
}
