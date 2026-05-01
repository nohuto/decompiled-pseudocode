/*
 * XREFs of ?RmpSystemCloseHandle@@YAXPEAX@Z @ 0x180011D48
 * Callers:
 *     ?RmpHamQueryActivityHostPartition@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PARTITION@@@Z @ 0x180031614 (-RmpHamQueryActivityHostPartition@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RmpSystemCloseHandle(HANDLE Handle)
{
  return NtClose(Handle);
}
