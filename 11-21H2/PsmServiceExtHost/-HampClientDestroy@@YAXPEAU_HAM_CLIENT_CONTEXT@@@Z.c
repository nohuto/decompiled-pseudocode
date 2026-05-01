/*
 * XREFs of ?HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180005798
 * Callers:
 *     ?HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAT_HAM_STATE_CHANGE_FLAGS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180006ABC (-HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_H.c)
 *     ?HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18002E148 (-HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180072ED8 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x18007C544 (-HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 * Callees:
 *     ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180005884 (-HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientRemove@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800059F8 (-HampClientRemove@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     CempListEntryIsNull @ 0x18000A004 (CempListEntryIsNull.c)
 */

void __fastcall HampClientDestroy(struct _HAM_CLIENT_CONTEXT *a1)
{
  void *v2; // rcx
  void *v3; // rcx

  HampClientRundownObjects(a1);
  if ( !(unsigned int)CempListEntryIsNull((char *)a1 + 8) )
    HampClientRemove(a1);
  v2 = (void *)*((_QWORD *)a1 + 20);
  if ( v2 )
    NtClose(v2);
  v3 = (void *)*((_QWORD *)a1 + 21);
  if ( v3 )
    NtClose(v3);
  if ( (*((_BYTE *)a1 + 128) & 2) == 0 && (*((_DWORD *)a1 + 26) || *((_DWORD *)a1 + 27)) )
    NtDeleteWnfStateName((char *)a1 + 104);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
