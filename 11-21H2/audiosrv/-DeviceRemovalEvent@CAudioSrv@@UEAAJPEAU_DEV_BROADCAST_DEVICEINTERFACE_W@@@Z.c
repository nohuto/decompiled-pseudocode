/*
 * XREFs of ?DeviceRemovalEvent@CAudioSrv@@UEAAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x1800C3610
 * Callers:
 *     <none>
 * Callees:
 *     ?MME_AudioInterfaceRemove@@YAJPEBG@Z @ 0x180110214 (-MME_AudioInterfaceRemove@@YAJPEBG@Z.c)
 *     ?KsNotifications_AudioInterfaceRemoval@@YAXPEBG@Z @ 0x180125138 (-KsNotifications_AudioInterfaceRemoval@@YAXPEBG@Z.c)
 */

_BOOL8 __fastcall CAudioSrv::DeviceRemovalEvent(CAudioSrv *this, struct _DEV_BROADCAST_DEVICEINTERFACE_W *a2)
{
  wchar_t *dbcc_name; // rbx
  BOOL v3; // edi

  dbcc_name = a2->dbcc_name;
  v3 = (int)MME_AudioInterfaceRemove(a2->dbcc_name) < 0;
  KsNotifications_AudioInterfaceRemoval(dbcc_name);
  if ( (int)FlushDeviceTopologyCache(dbcc_name) < 0 )
    return 1;
  return v3;
}
