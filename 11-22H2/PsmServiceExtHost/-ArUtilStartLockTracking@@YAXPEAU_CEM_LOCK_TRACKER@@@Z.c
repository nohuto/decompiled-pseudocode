/*
 * XREFs of ?ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180003738
 * Callers:
 *     ?ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@KK@Z @ 0x180002E48 (-ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIE.c)
 *     ?ArHamCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z @ 0x1800037C0 (-ArHamCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z.c)
 *     ?ArCsStateChangeCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18004AFE0 (-ArCsStateChangeCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?ArManagerCreate@@YAJPEAU_TP_CALLBACK_ENVIRON_V3@@PEAPEAU_ACTIVITY_RESTARTER@@@Z @ 0x18004B164 (-ArManagerCreate@@YAJPEAU_TP_CALLBACK_ENVIRON_V3@@PEAPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ?ArManagerUpdateCsState@@YAXPEAT_HAM_PDC_STATE_UPDATE@@@Z @ 0x18004B2B4 (-ArManagerUpdateCsState@@YAXPEAT_HAM_PDC_STATE_UPDATE@@@Z.c)
 *     ?ArManagerDestroy@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x18006C994 (-ArManagerDestroy@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ?ArSrvCloseActivity@@YAJ_K0@Z @ 0x18006CBC8 (-ArSrvCloseActivity@@YAJ_K0@Z.c)
 * Callees:
 *     memset_0 @ 0x1800536FA (memset_0.c)
 */

void __fastcall ArUtilStartLockTracking(struct _CEM_LOCK_TRACKER *lpTlsValue)
{
  memset_0(lpTlsValue, 0, 0x88uLL);
  CempLockTrackerSetForThread(ArLockTrackerId, lpTlsValue);
}
