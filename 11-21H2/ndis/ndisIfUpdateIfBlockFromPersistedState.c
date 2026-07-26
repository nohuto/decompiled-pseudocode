/*
 * XREFs of ndisIfUpdateIfBlockFromPersistedState @ 0x1C0132938
 * Callers:
 *     ?ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z @ 0x1C00B29D4 (-ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z.c)
 * Callees:
 *     ?ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0010230 (-ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@.c)
 *     ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0011D50 (-ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C002398C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ?ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z @ 0x1C00263F8 (-ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z.c)
 *     ??1NdisNetworkInterfacePersistedState@@QEAA@XZ @ 0x1C002A22C (--1NdisNetworkInterfacePersistedState@@QEAA@XZ.c)
 *     ndisIfUpdateInterfaceFromPersistentStore @ 0x1C002A41C (ndisIfUpdateInterfaceFromPersistentStore.c)
 *     ?ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z @ 0x1C002AEC8 (-ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z.c)
 *     ??0NdisNetworkInterfacePersistedState@@QEAA@XZ @ 0x1C0033364 (--0NdisNetworkInterfacePersistedState@@QEAA@XZ.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1C0034038 (WPP_RECORDER_SF__guid_.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C00B2928 (-ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     WPP_RECORDER_SF__guid_L @ 0x1C00B2C68 (WPP_RECORDER_SF__guid_L.c)
 *     WPP_RECORDER_SF__guid__guid__guid_ @ 0x1C00B2D3C (WPP_RECORDER_SF__guid__guid__guid_.c)
 *     ?ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z @ 0x1C010C49C (-ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z.c)
 *     ndisIfReadHiddenFlag @ 0x1C010D764 (ndisIfReadHiddenFlag.c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x1C010FDEC (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0110158 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ndisIfUpdateStringIfNeeded @ 0x1C0132C58 (ndisIfUpdateStringIfNeeded.c)
 */

void __fastcall ndisIfUpdateIfBlockFromPersistedState(struct _NDIS_IF_BLOCK *a1, struct KRegKey *this)
{
  struct NdisNetworkInterfacePersistedState *v4; // r9
  __int64 v5; // r8
  __int64 v6; // r9
  struct _NDIS_MINIPORT_BLOCK *v7; // rax
  struct _NDIS_MINIPORT_BLOCK *v8; // rdi
  _DEVICE_OBJECT *PhysicalDeviceObject; // rdx
  struct _NDIS_MINIPORT_BLOCK *v10; // rdx
  NTSTATUS v11; // esi
  int v12; // edx
  int v13; // r8d
  _GUID *p_InterfaceGuid; // rbx
  int updated; // eax
  int v16; // r8d
  PVOID v17; // rcx
  PVOID v18; // rcx
  int v19; // [rsp+20h] [rbp-E0h]
  char v20[8]; // [rsp+30h] [rbp-D0h]
  bool v21; // [rsp+40h] [rbp-C0h] BYREF
  struct KRegKey *v22; // [rsp+48h] [rbp-B8h] BYREF
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v24; // [rsp+58h] [rbp-A8h] BYREF
  struct KRegKey v25; // [rsp+60h] [rbp-A0h] BYREF
  struct KRegKey v26; // [rsp+70h] [rbp-90h] BYREF
  __int64 v27; // [rsp+78h] [rbp-88h]
  struct _GUID v28; // [rsp+94h] [rbp-6Ch] BYREF

  NdisNetworkInterfacePersistedState::NdisNetworkInterfacePersistedState((NdisNetworkInterfacePersistedState *)&v26);
  v25.m_ptr = 0LL;
  Ndis::BindRegistry::ReadNetworkInterfaceV2(this, &v25, &v26, v4);
  v24 = 0LL;
  v22 = this;
  if ( (int)NetSetupPropertyBag::ReadString(
              (NetSetupPropertyBag *)&v22,
              (const struct _NETSETUPPROPKEY *)&unk_1C00DC728,
              &v24) >= 0 )
  {
    v19 = 20;
    ndisIfUpdateStringIfNeeded(a1, v26.m_ptr, &a1->ifAlias, 0LL);
  }
  P = 0LL;
  if ( (int)NetSetupPropertyBag::ReadString(
              (NetSetupPropertyBag *)&v22,
              (const struct _NETSETUPPROPKEY *)&unk_1C00DC710,
              &P) >= 0 )
  {
    v19 = 4;
    ndisIfUpdateStringIfNeeded(a1, v27, &a1->ifDescr, 2LL);
  }
  if ( (int)ndisIfReadNetworkGuidFromKey(this, &v28) >= 0
    && (int)ndisIfUpdateInterfaceIsolationNetworkId(a1, &v28, 0) < 0
    && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF__guid__guid__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)&v28,
      v5,
      v6,
      v19,
      (__int64)&a1->InterfaceGuid,
      (__int64)a1->Network + 32,
      (__int64)&v28);
  }
  v21 = 0;
  v7 = ndisIfReferenceMiniport(a1, 0x15u);
  v8 = v7;
  if ( v7 )
    PhysicalDeviceObject = v7->PhysicalDeviceObject;
  else
    PhysicalDeviceObject = 0LL;
  v11 = ndisIfReadHiddenFlag((NetSetupPropertyBag *)&v22, PhysicalDeviceObject, &v21);
  if ( v11 < 0 )
  {
    if ( !v8 )
      goto LABEL_22;
LABEL_16:
    ndisIfDereferenceMiniport(a1, v10, 0x15u);
    if ( v11 < 0 )
      goto LABEL_22;
    goto LABEL_17;
  }
  ndisIfUpdateInterfaceHiddenFlag(a1, v21);
  if ( v8 )
  {
    ndisMUpdateHiddenFlag(v8, v21);
    goto LABEL_16;
  }
LABEL_17:
  p_InterfaceGuid = &a1->InterfaceGuid;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x14u,
      (struct _GUID *)&WPP_3bc756b3e3313898ba315478217523d2_Traceguids,
      (__int64)p_InterfaceGuid);
  updated = ndisIfUpdateInterfaceFromPersistentStore((__int64)&v26, v12, v13);
  if ( updated < 0 && *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v20 = updated;
    WPP_RECORDER_SF__guid_L(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      v16,
      0x15u,
      (struct _GUID *)&WPP_3bc756b3e3313898ba315478217523d2_Traceguids,
      (__int64)p_InterfaceGuid,
      *(_QWORD *)v20);
  }
LABEL_22:
  v17 = P;
  P = 0LL;
  if ( v17 )
    ExFreePoolWithTag(v17, 0x7274534Bu);
  v18 = v24;
  v24 = 0LL;
  if ( v18 )
    ExFreePoolWithTag(v18, 0x7274534Bu);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v25.m_ptr);
  NdisNetworkInterfacePersistedState::~NdisNetworkInterfacePersistedState((NdisNetworkInterfacePersistedState *)&v26);
}
