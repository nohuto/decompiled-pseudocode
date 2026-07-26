/*
 * XREFs of ?ndisIncrementAsyncIdleCountersLocked@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x1C003F112
 * Callers:
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C003FB34 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C003FD86 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 * Callees:
 *     ?ndisSSInvalidateOidCache@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@@Z @ 0x1C003F668 (-ndisSSInvalidateOidCache@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@@Z.c)
 */

char __fastcall ndisIncrementAsyncIdleCountersLocked(__int64 a1, int a2, int a3)
{
  char v3; // r9
  int v4; // r8d
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  __int64 v9; // rcx
  int v10; // r10d
  __int64 v11; // rcx
  int v12; // r10d
  __int64 v13; // rcx
  int v14; // r10d

  v3 = 1;
  v4 = a3 - 49;
  if ( !v4 )
  {
    *(_DWORD *)(a1 + 512) |= 0x10u;
    return v3;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    *(_DWORD *)(a1 + 144) = 0;
    ndisSSInvalidateOidCache((struct _NDIS_SELECTIVE_SUSPEND *)a1);
    *(_DWORD *)(v13 + 528) += v14;
    return v3;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( !v7 )
    {
      *(_DWORD *)(a1 + 144) = 0;
      ndisSSInvalidateOidCache((struct _NDIS_SELECTIVE_SUSPEND *)a1);
      *(_DWORD *)(v11 + 520) += v12;
      return v3;
    }
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        *(_DWORD *)(a1 + 144) = 0;
        ndisSSInvalidateOidCache((struct _NDIS_SELECTIVE_SUSPEND *)a1);
        *(_DWORD *)(v9 + 576) += v10;
        return v3;
      }
    }
    else if ( *(_DWORD *)(a1 + 520) )
    {
      *(_DWORD *)(a1 + 524) += a2;
      return v3;
    }
  }
  else if ( *(_DWORD *)(a1 + 528) )
  {
    *(_DWORD *)(a1 + 532) += a2;
    return v3;
  }
  return 0;
}
