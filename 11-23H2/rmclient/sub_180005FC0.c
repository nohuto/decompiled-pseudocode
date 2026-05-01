/*
 * XREFs of sub_180005FC0 @ 0x180005FC0
 * Callers:
 *     HamHostIdRetrieveDynamicId @ 0x180001950 (HamHostIdRetrieveDynamicId.c)
 *     sub_180001A3C @ 0x180001A3C (sub_180001A3C.c)
 *     HamRegisterDesktopProcessWithAppContainerToken @ 0x180001AF0 (HamRegisterDesktopProcessWithAppContainerToken.c)
 *     sub_180002EE0 @ 0x180002EE0 (sub_180002EE0.c)
 *     sub_180004DB0 @ 0x180004DB0 (sub_180004DB0.c)
 *     sub_180005140 @ 0x180005140 (sub_180005140.c)
 *     sub_180005900 @ 0x180005900 (sub_180005900.c)
 *     sub_180005CD4 @ 0x180005CD4 (sub_180005CD4.c)
 *     HamGetStateSnapshotForAumid @ 0x180005DE0 (HamGetStateSnapshotForAumid.c)
 *     HamHostIdFindOrCreate @ 0x180005F00 (HamHostIdFindOrCreate.c)
 *     HamGetApplicationInterruptiveUIState @ 0x180006440 (HamGetApplicationInterruptiveUIState.c)
 *     HamPlmNotifyNewSession @ 0x18000A0B0 (HamPlmNotifyNewSession.c)
 *     RmGameModeDisableForRegisteredProcess @ 0x180019B10 (RmGameModeDisableForRegisteredProcess.c)
 *     RmGameModeDisableForRegisteredProcessById @ 0x180019BF0 (RmGameModeDisableForRegisteredProcessById.c)
 *     RmGameModeGetLargestValidResourceRequest @ 0x180019CD0 (RmGameModeGetLargestValidResourceRequest.c)
 *     RmGameModeReenableForRegisteredProcess @ 0x180019DF0 (RmGameModeReenableForRegisteredProcess.c)
 *     RmGameModeReenableForRegisteredProcessById @ 0x180019ED0 (RmGameModeReenableForRegisteredProcessById.c)
 *     RmGameModeRegisterPairedAuxiliaryProcess @ 0x180019FB0 (RmGameModeRegisterPairedAuxiliaryProcess.c)
 *     RmGameModeRegisterPairedAuxiliaryProcessById @ 0x18001A0C0 (RmGameModeRegisterPairedAuxiliaryProcessById.c)
 *     RmGameModeRegisterProcess @ 0x18001A1D0 (RmGameModeRegisterProcess.c)
 *     RmGameModeRegisterProcessById @ 0x18001A2D0 (RmGameModeRegisterProcessById.c)
 *     RmGameModeUnregisterProcess @ 0x18001A3D0 (RmGameModeUnregisterProcess.c)
 *     RmGameModeUnregisterProcessById @ 0x18001A4B0 (RmGameModeUnregisterProcessById.c)
 *     HamGetInterruptiveUIStateForAumid @ 0x18001D9A0 (HamGetInterruptiveUIStateForAumid.c)
 *     HamGetPackageInterruptiveUIState @ 0x18001DB00 (HamGetPackageInterruptiveUIState.c)
 *     HamHostIdCreateSingleUse @ 0x18001DC60 (HamHostIdCreateSingleUse.c)
 *     HamHostIdFind @ 0x18001DD30 (HamHostIdFind.c)
 *     sub_18001EF4C @ 0x18001EF4C (sub_18001EF4C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180005FC0(RPC_IF_HANDLE IfSpec, RPC_BINDING_HANDLE *a2)
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
