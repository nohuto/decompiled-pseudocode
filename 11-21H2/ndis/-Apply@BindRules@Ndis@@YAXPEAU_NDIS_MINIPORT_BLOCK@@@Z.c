/*
 * XREFs of ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01080EC
 * Callers:
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C010804C (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C010808C (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 * Callees:
 *     ?ndisMDoesMiniportNeedCoNdisNdProxy@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00208B0 (-ndisMDoesMiniportNeedCoNdisNdProxy@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?PauseMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C01081A8 (-PauseMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?PauseNeededForBind@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C0108390 (-PauseNeededForBind@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z.c)
 *     ?UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C010856C (-UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?UnbindMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C01087E4 (-UnbindMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z @ 0x1C0108A90 (-MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z.c)
 *     ?UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C0108C84 (-UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C0108DE8 (-CoalesceFilterAttachDuringBoot@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z.c)
 *     ?CheckMissingMandatoryFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C0108F64 (-CheckMissingMandatoryFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?RetryProtocolBindingsAfterMiniportChange@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C01091B4 (-RetryProtocolBindingsAfterMiniportChange@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?CheckMissingModifyingFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C0109318 (-CheckMissingModifyingFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0109440 (-UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?CheckForVBusDependency@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C0109660 (-CheckForVBusDependency@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?CheckForDriverLoaded@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C0109738 (-CheckForDriverLoaded@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?ReStartTemporaryPause@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0109920 (-ReStartTemporaryPause@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ReEnableTemporaryUnbind@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C0109AA4 (-ReEnableTemporaryUnbind@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x1C010B16C (-ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z.c)
 */

void __fastcall Ndis::BindRules::Apply(struct _NDIS_MINIPORT_BLOCK *this, struct _NDIS_MINIPORT_BLOCK *a2)
{
  struct Ndis::BindStack *v3; // rdx
  struct _NDIS_MINIPORT_BLOCK *v4; // rdx
  struct Ndis::BindStack *v5; // rdx
  struct Ndis::BindStack *v6; // rdx
  struct _NDIS_MINIPORT_BLOCK *v7; // rdx
  struct Ndis::BindStack *v8; // rdx
  struct Ndis::BindStack *v9; // rdx
  struct Ndis::BindStack *v10; // rdx
  struct Ndis::BindStack *v11; // r8
  struct Ndis::BindStack *v12; // rdx
  struct Ndis::BindStack *v13; // rdx
  struct Ndis::BindStack *v14; // rdx
  bool v15; // r8
  struct Ndis::BindStack *v16; // rdx
  struct Ndis::BindStack *v17; // r8
  struct Ndis::BindStack *v18; // rdx

  if ( ndisMDoesMiniportNeedCoNdisNdProxy(this) )
    ndisBindEnumerateProtocolDrivers(lambda_12a273c170595e0055a0ec70dd7bc2f3_::_lambda_invoker_cdecl_, this);
  Ndis::BindRules::ReEnableTemporaryUnbind((Ndis::BindRules *)&this->Bindings, v3);
  Ndis::BindRules::ReStartTemporaryPause((Ndis::BindRules *)this, v4);
  Ndis::BindRules::CheckForDriverLoaded((Ndis::BindRules *)&this->Bindings, v5);
  Ndis::BindRules::CheckForVBusDependency((Ndis::BindRules *)&this->Bindings, v6);
  Ndis::BindRules::UnbindIncompatibleDriversForMacChange((Ndis::BindRules *)this, v7);
  Ndis::BindRules::CheckMissingModifyingFilter((Ndis::BindRules *)&this->Bindings, v8);
  Ndis::BindRules::RetryProtocolBindingsAfterMiniportChange((Ndis::BindRules *)&this->Bindings, v9);
  Ndis::BindRules::CheckMissingMandatoryFilter((Ndis::BindRules *)&this->Bindings, v10);
  Ndis::BindRules::CoalesceFilterAttachDuringBoot(
    (Ndis::BindRules *)this,
    (struct _NDIS_MINIPORT_BLOCK *)&this->Bindings,
    v11);
  Ndis::BindRules::UnbindOnAttach((Ndis::BindRules *)&this->Bindings, v12);
  Ndis::BindRules::UnbindOnDetach((Ndis::BindRules *)&this->Bindings, v13);
  LOBYTE(v14) = this->InitMode != 0;
  Ndis::BindRules::MakeOptionalFiltersMandatoryDuringBoot((Ndis::BindRules *)&this->Bindings, v14, v15);
  Ndis::BindRules::UnbindMiniportStack((Ndis::BindRules *)&this->Bindings, v16);
  Ndis::BindRules::PauseNeededForBind((Ndis::BindRules *)this, (struct _NDIS_MINIPORT_BLOCK *)&this->Bindings, v17);
  Ndis::BindRules::PauseMiniportStack((Ndis::BindRules *)&this->Bindings, v18);
}
