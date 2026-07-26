/*
 * XREFs of ?Reload@BindRegistry@Ndis@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4Flags@ReadBindingsOptions@2@@Z @ 0x1C0112B04
 * Callers:
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C0095EA0 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ndisHandleBindNotification @ 0x1C0122FB8 (ndisHandleBindNotification.c)
 *     ndisPnpRefresh @ 0x1C0123374 (ndisPnpRefresh.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C013EFE0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C013FE7C (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C010808C (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C010BC4C (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C010EC94 (-UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UND.c)
 *     ??0BindStack@Ndis@@QEAA@XZ @ 0x1C0111CE8 (--0BindStack@Ndis@@QEAA@XZ.c)
 *     ?ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z @ 0x1C01124EC (-ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z.c)
 *     ??1BindStack@Ndis@@QEAA@XZ @ 0x1C0112C00 (--1BindStack@Ndis@@QEAA@XZ.c)
 *     ?DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C0112D0C (-DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C0112E20 (-UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UNDIS.c)
 *     ?ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z @ 0x1C0130784 (-ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z.c)
 */

__int64 __fastcall Ndis::BindRegistry::Reload(
        struct _NDIS_MINIPORT_BLOCK *this,
        struct _NDIS_MINIPORT_BLOCK *a2,
        enum Ndis::ReadBindingsOptions::Flags a3)
{
  unsigned int v4; // ebp
  unsigned int v5; // edi
  struct _NDIS_MINIPORT_BLOCK *v6; // rdx
  enum CallRunMode v7; // r8d
  Ndis::BindStack v9; // [rsp+20h] [rbp-78h] BYREF

  v4 = (unsigned int)a2;
  Ndis::BindStack::BindStack(&v9);
  v5 = 0;
  if ( *((_BYTE *)qword_1C00EC738 + 97) && !ndisBuildBindings(&this->InterfaceGuid, &v9)
    || Ndis::BindStack::ReadV2InterfaceBindings(&v9, &this->InterfaceGuid) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(&this->BindEngine.m_lock, 0LL);
    Ndis::BindRegistry::UpdateProtocols((__int64)this, (__int64)&this->Bindings, (__int64)&v9, v4);
    Ndis::BindRegistry::UpdateFilters(this, &this->Bindings.Filters, &v9.Filters, v4);
    ++this->Bindings.ChangeEpoch;
    Ndis::BindEngine::EndPolicyUpdates(&this->BindEngine, v6);
    Ndis::BindEngine::ApplyBindChanges(&this->BindEngine, RunSynchronous, 0);
    Ndis::Initmode::DisableIfNeeded(this, RunSynchronous, v7);
  }
  else
  {
    v5 = -1073741823;
  }
  Ndis::BindStack::~BindStack(&v9);
  return v5;
}
