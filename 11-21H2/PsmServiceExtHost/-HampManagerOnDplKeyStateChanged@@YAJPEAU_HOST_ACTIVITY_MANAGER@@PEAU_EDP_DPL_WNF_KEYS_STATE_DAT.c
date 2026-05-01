/*
 * XREFs of ?HampManagerOnDplKeyStateChanged@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_EDP_DPL_WNF_KEYS_STATE_DATA@@@Z @ 0x180072D80
 * Callers:
 *     ?HampManagerDplKeyStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180072BA0 (-HampManagerDplKeyStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     ?HampSessionReleaseLockExclusive@@YAXPEAU_HAM_SESSION@@@Z @ 0x180043480 (-HampSessionReleaseLockExclusive@@YAXPEAU_HAM_SESSION@@@Z.c)
 *     ?HampSessionAcquireLockExclusive@@YAXPEAU_HAM_SESSION@@@Z @ 0x1800434BC (-HampSessionAcquireLockExclusive@@YAXPEAU_HAM_SESSION@@@Z.c)
 *     ?HampSessionGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180043964 (-HampSessionGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampSessionFindInManager@@YAPEAU_HAM_SESSION@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x180043B4C (-HampSessionFindInManager@@YAPEAU_HAM_SESSION@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x180046464 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?HampHostNotifyDplKeysLocked@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007A184 (-HampHostNotifyDplKeysLocked@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampManagerOnDplKeyStateChanged(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _EDP_DPL_WNF_KEYS_STATE_DATA *a2)
{
  struct _HAM_SESSION *v3; // rax
  __int64 v4; // rdx
  unsigned int v5; // ebx
  struct _HAM_SESSION *v6; // rdi
  __int64 v7; // rdx
  struct _RM_HAM_ACTIVITY_HOST *i; // rax
  struct _RM_HAM_ACTIVITY_HOST *v9; // rsi

  v3 = HampSessionFindInManager(a1, *((_DWORD *)a2 + 3));
  v5 = 0;
  v6 = v3;
  if ( v3 )
  {
    HampSessionAcquireLockExclusive(v3, v4);
    *((_DWORD *)v6 + 36) = *((_DWORD *)v6 + 36) & 0xFFFFFFFE | (*((_DWORD *)a2 + 2) != 0);
    HampSessionReleaseLockExclusive(v6, v7);
    if ( *((_DWORD *)a2 + 2) )
    {
      for ( i = HampHostEnumerateHostsInNode(v6, 1, 0LL); ; i = HampSessionGetNextHost(v9) )
      {
        v9 = i;
        if ( !i )
          break;
        HampHostNotifyDplKeysLocked(i);
      }
    }
    CemRcObjectDereference(v6);
  }
  else
  {
    return (unsigned int)-1073741729;
  }
  return v5;
}
