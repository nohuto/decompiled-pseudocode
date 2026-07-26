/*
 * XREFs of ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z @ 0x1C0118BA0
 * Callers:
 *     ?ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z @ 0x1C00B7BF4 (-ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z.c)
 *     _lambda_3ed15a572a362cb111cc1d3010d8268d_::operator() @ 0x1C011CEE4 (_lambda_3ed15a572a362cb111cc1d3010d8268d_--operator().c)
 * Callees:
 *     ??1NdisNetworkInterfacePersistedState@@QEAA@XZ @ 0x1C002A534 (--1NdisNetworkInterfacePersistedState@@QEAA@XZ.c)
 *     ndisIfCreateInterfaceFromPersistentStore @ 0x1C002A588 (ndisIfCreateInterfaceFromPersistentStore.c)
 *     ??0NdisNetworkInterfacePersistedState@@QEAA@XZ @ 0x1C002A810 (--0NdisNetworkInterfacePersistedState@@QEAA@XZ.c)
 *     ?ndisIfGetDefaultNetworkGuid@@YA?AU_GUID@@XZ @ 0x1C002FAB8 (-ndisIfGetDefaultNetworkGuid@@YA-AU_GUID@@XZ.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x1C011D558 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 */

__int64 __fastcall ndisLoadNetworkInterfaceFromPersistedState(
        struct _GUID *a1,
        struct KRegKey *this,
        struct KRegKey *a3)
{
  struct NdisNetworkInterfacePersistedState *v6; // r9
  int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // rax
  struct _GUID v11; // [rsp+20h] [rbp-D8h] BYREF
  struct KRegKey v12; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v13; // [rsp+54h] [rbp-A4h]

  NdisNetworkInterfacePersistedState::NdisNetworkInterfacePersistedState((NdisNetworkInterfacePersistedState *)&v12);
  v7 = Ndis::BindRegistry::ReadNetworkInterfaceV2(this, a3, &v12, v6);
  if ( v7 >= 0 )
  {
    v9 = v13 - *(_QWORD *)&ndisDefaultNetworkGuid.Data1;
    if ( (_QWORD)v13 == *(_QWORD *)&ndisDefaultNetworkGuid.Data1 )
      v9 = *((_QWORD *)&v13 + 1) - *(_QWORD *)ndisDefaultNetworkGuid.Data4;
    if ( !v9 )
      v13 = (__int128)*ndisIfGetDefaultNetworkGuid(&v11);
    if ( (unsigned int)ndisIfCreateInterfaceFromPersistentStore(
                         a1,
                         (struct NdisNetworkInterfacePersistedState *)&v12,
                         v8) )
      v7 = -1073741823;
    else
      v7 = 0;
  }
  NdisNetworkInterfacePersistedState::~NdisNetworkInterfacePersistedState((NdisNetworkInterfacePersistedState *)&v12);
  return (unsigned int)v7;
}
