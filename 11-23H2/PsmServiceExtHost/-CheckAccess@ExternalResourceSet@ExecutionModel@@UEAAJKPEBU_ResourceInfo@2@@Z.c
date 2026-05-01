/*
 * XREFs of ?CheckAccess@ExternalResourceSet@ExecutionModel@@UEAAJKPEBU_ResourceInfo@2@@Z @ 0x18008B320
 * Callers:
 *     <none>
 * Callees:
 *     ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180006188 (-RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::CheckAccess(
        ExecutionModel::ExternalResourceSet *this,
        unsigned int a2,
        const struct ExecutionModel::_ResourceInfo *a3)
{
  int v3; // ebx
  unsigned int i; // ebp
  struct _RM_SERVICE_GLOBALS **v8; // rsi
  DWORD v9; // ebx
  unsigned int v10; // edi
  _BYTE v12[144]; // [rsp+20h] [rbp-C8h] BYREF

  v3 = 0;
  for ( i = 0; i < a2; a3 = (const struct ExecutionModel::_ResourceInfo *)((char *)a3 + 24) )
  {
    v8 = (struct _RM_SERVICE_GLOBALS **)*((_QWORD *)this + 3);
    v9 = *((_DWORD *)this + 2);
    v10 = *(_DWORD *)a3;
    HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v12);
    RmpAcquireGlobalLock();
    v3 = ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld(v8, v10, v9, 1);
    RmpReleaseGlobalLock();
    CempLockTrackerClearForThread(HampLockTrackerId);
    if ( v3 < 0 )
      break;
    ++i;
  }
  return (unsigned int)v3;
}
