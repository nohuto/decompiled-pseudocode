/*
 * XREFs of ?HampActivityPropertiesInitialize@@YAXPEBG0PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180003A28
 * Callers:
 *     HamRpcSrvCreateAutoRestartActivityForDesktopBridge @ 0x180002D10 (HamRpcSrvCreateAutoRestartActivityForDesktopBridge.c)
 *     ?HampWakeContextTryUpdateActivityState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_HOST_WAKE_CONTEXT_WORKER_STATE@@@Z @ 0x18000FFF4 (-HampWakeContextTryUpdateActivityState@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_HOST_WAKE_CONTEX.c)
 *     ?HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEA_K@Z @ 0x180071C4C (-HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PE.c)
 *     ?HampDepGroupAddDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18007C378 (-HampDepGroupAddDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1PEAU_HAM_ACTIVITY_PROPERTIE.c)
 *     ?HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z @ 0x18007C56C (-HampDepGroupAddPpleDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0@Z.c)
 *     ?HampDepGroupAddProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z @ 0x18007C6D4 (-HampDepGroupAddProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z.c)
 *     ?HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@Z @ 0x18007C934 (-HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180031C70 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 */

void __fastcall HampActivityPropertiesInitialize(
        const unsigned __int16 *a1,
        const unsigned __int16 *a2,
        struct _HAM_ACTIVITY_PROPERTIES *a3)
{
  struct _HAM_ACTIVITY_PROPERTIES *v4; // rsi

  v4 = a3;
  memset_0((char *)a3 + 4, 0, 0x184uLL);
  *(_DWORD *)v4 = 8397888;
  StringCchCopyW((unsigned __int16 *)v4 + 6, 0x40uLL, a1);
  StringCchCopyW((unsigned __int16 *)v4 + 70, 0x40uLL, a2);
  *((_DWORD *)v4 + 69) = -1;
  *((_DWORD *)v4 + 67) = 5;
  v4 = (struct _HAM_ACTIVITY_PROPERTIES *)((char *)v4 + 280);
  memset_0(v4, 0, 0x68uLL);
  *(_OWORD *)((char *)v4 + 40) = 0LL;
  *(_OWORD *)((char *)v4 + 56) = 0LL;
  *(_OWORD *)((char *)v4 + 72) = 0LL;
  *((_QWORD *)v4 + 11) = 0LL;
  *((_QWORD *)v4 + 9) = -1LL;
  *((_QWORD *)v4 + 8) = -1LL;
  *((_QWORD *)v4 + 7) = -1LL;
  *((_QWORD *)v4 + 6) = -1LL;
  *((_QWORD *)v4 + 5) |= 0x80uLL;
  *((_DWORD *)v4 + 22) = 33;
}
