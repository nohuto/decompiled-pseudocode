/*
 * XREFs of CempRpcBindToServer @ 0x180005AD0
 * Callers:
 *     HamHostIdRetrieveDynamicId @ 0x180001A30 (HamHostIdRetrieveDynamicId.c)
 *     HamCreateAutoRestartActivityForDesktopBridge @ 0x180001C8C (HamCreateAutoRestartActivityForDesktopBridge.c)
 *     HamRegisterDesktopProcessWithAppContainerToken @ 0x180002160 (HamRegisterDesktopProcessWithAppContainerToken.c)
 *     CreateResourceManagerProxy @ 0x1800029E0 (CreateResourceManagerProxy.c)
 *     HamGetApplicationInterruptiveUIState @ 0x180002B80 (HamGetApplicationInterruptiveUIState.c)
 *     ?Init@CMemoryManager@System@Windows@@CAJXZ @ 0x180004620 (-Init@CMemoryManager@System@Windows@@CAJXZ.c)
 *     HampConnectionAllocateState @ 0x1800047D0 (HampConnectionAllocateState.c)
 *     ?CrmpRegistrationContextStart@@YAJPEAU_CRMP_REGISTRATION_CONTEXT@@W4_CRM_CLIENT_ID@@PEAG@Z @ 0x180004BEC (-CrmpRegistrationContextStart@@YAJPEAU_CRMP_REGISTRATION_CONTEXT@@W4_CRM_CLIENT_ID@@PEAG@Z.c)
 *     HamGetStateSnapshotForAumid @ 0x180005170 (HamGetStateSnapshotForAumid.c)
 *     ?GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z @ 0x180005EF0 (-GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z.c)
 *     HamPlmNotifyNewSession @ 0x180009FA0 (HamPlmNotifyNewSession.c)
 *     RmConnectToResourceManager @ 0x18000A400 (RmConnectToResourceManager.c)
 *     ?Init@ResourceManagerClientProxy@@IEAAJXZ @ 0x18000A6A4 (-Init@ResourceManagerClientProxy@@IEAAJXZ.c)
 *     RmGameModeDisableForRegisteredProcess @ 0x180018FF0 (RmGameModeDisableForRegisteredProcess.c)
 *     RmGameModeDisableForRegisteredProcessById @ 0x1800190D0 (RmGameModeDisableForRegisteredProcessById.c)
 *     RmGameModeGetLargestValidResourceRequest @ 0x1800191B0 (RmGameModeGetLargestValidResourceRequest.c)
 *     RmGameModeReenableForRegisteredProcess @ 0x1800192D0 (RmGameModeReenableForRegisteredProcess.c)
 *     RmGameModeReenableForRegisteredProcessById @ 0x1800193B0 (RmGameModeReenableForRegisteredProcessById.c)
 *     RmGameModeRegisterPairedAuxiliaryProcess @ 0x180019490 (RmGameModeRegisterPairedAuxiliaryProcess.c)
 *     RmGameModeRegisterPairedAuxiliaryProcessById @ 0x1800195A0 (RmGameModeRegisterPairedAuxiliaryProcessById.c)
 *     RmGameModeRegisterProcess @ 0x1800196B0 (RmGameModeRegisterProcess.c)
 *     RmGameModeRegisterProcessById @ 0x1800197B0 (RmGameModeRegisterProcessById.c)
 *     RmGameModeUnregisterProcess @ 0x1800198B0 (RmGameModeUnregisterProcess.c)
 *     RmGameModeUnregisterProcessById @ 0x180019990 (RmGameModeUnregisterProcessById.c)
 *     RmQueryHostMemoryLimitValues @ 0x18001B9F0 (RmQueryHostMemoryLimitValues.c)
 *     HamGetInterruptiveUIStateForAumid @ 0x18001CF90 (HamGetInterruptiveUIStateForAumid.c)
 *     HamGetPackageInterruptiveUIState @ 0x18001D0F0 (HamGetPackageInterruptiveUIState.c)
 *     HamHostIdCreateSingleUse @ 0x18001D250 (HamHostIdCreateSingleUse.c)
 *     HamHostIdFind @ 0x18001D320 (HamHostIdFind.c)
 *     HamCloseActivityForDesktopBridge @ 0x18001E3CC (HamCloseActivityForDesktopBridge.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B040 (__security_check_cookie.c)
 */

__int64 __fastcall CempRpcBindToServer(RPC_IF_HANDLE IfSpec, RPC_BINDING_HANDLE *a2)
{
  RPC_STATUS v4; // eax
  unsigned int v5; // ebx
  __int64 result; // rax
  RPC_BINDING_HANDLE Binding; // [rsp+20h] [rbp-79h] BYREF
  RPC_BINDING_HANDLE_SECURITY_V1_W Security; // [rsp+28h] [rbp-71h] BYREF
  __int64 v9; // [rsp+50h] [rbp-49h] BYREF
  int v10; // [rsp+58h] [rbp-41h]
  int v11; // [rsp+5Ch] [rbp-3Dh]
  __int128 v12; // [rsp+60h] [rbp-39h]
  __int128 v13; // [rsp+70h] [rbp-29h]
  __int64 v14; // [rsp+80h] [rbp-19h]
  RPC_BINDING_HANDLE_OPTIONS_V1 Options; // [rsp+88h] [rbp-11h] BYREF
  RPC_BINDING_HANDLE_TEMPLATE_V1_W Template; // [rsp+98h] [rbp-1h] BYREF

  *(_QWORD *)&Options.ComTimeout = 5LL;
  Options.Version = 1;
  Binding = 0LL;
  memset(&Template, 0, sizeof(Template));
  v14 = 0LL;
  Security.SecurityQos = (RPC_SECURITY_QOS *)&v9;
  *(_QWORD *)(&Security.Version + 1) = 0LL;
  HIDWORD(Security.ServerPrincName) = 0;
  Security.AuthIdentity = 0LL;
  Template.Version = 1;
  Template.ProtocolSequence = 3;
  Options.Flags = 1;
  v9 = 5LL;
  v12 = 0LL;
  v10 = 1;
  v13 = 0LL;
  v11 = 3;
  Security.Version = 1;
  Security.AuthnLevel = 6;
  Security.AuthnSvc = 10;
  v4 = RpcBindingCreateW(&Template, &Security, &Options, &Binding);
  v5 = v4;
  if ( v4 )
  {
    if ( v4 <= 0 )
      goto LABEL_8;
    goto LABEL_7;
  }
  v4 = RpcBindingBind(0LL, Binding, IfSpec);
  v5 = v4;
  if ( !v4 )
  {
    result = 0LL;
    *a2 = Binding;
    return result;
  }
  if ( v4 > 0 )
LABEL_7:
    v5 = (unsigned __int16)v4 | 0xC0070000;
LABEL_8:
  if ( Binding )
    RpcBindingFree(&Binding);
  return v5;
}
