/*
 * XREFs of ?HampPkgHandleBackgroundAccessStateChange@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@K@Z @ 0x18007F098
 * Callers:
 *     ?BackgroundAccessStateChanged@CBackgroundAccessStateChangedListener@@UEAAJPEBG0W4BACKGROUND_ACCESS_STATE@@@Z @ 0x18008DFE0 (-BackgroundAccessStateChanged@CBackgroundAccessStateChangedListener@@UEAAJPEBG0W4BACKGROUND_ACCE.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180028520 (-HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x180041F00 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?HampHostAmbientStateChanged@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STATE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@@Z @ 0x18005536A (-HampHostAmbientStateChanged@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_SYSTEM_STATE_TRACKER_SYSTEM_STA.c)
 */

void __fastcall HampPkgHandleBackgroundAccessStateChange(struct _HOST_ACTIVITY_MANAGER *a1, const wchar_t *a2, int a3)
{
  struct _HAM_PACKAGE *v4; // rbx
  __int64 v5; // r8
  struct _HAM_RC_TREE_NODE *i; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v7; // rax
  struct _RM_HAM_ACTIVITY_HOST *v8; // rdi
  _BYTE v9[4]; // [rsp+30h] [rbp-18h] BYREF
  _BYTE v10[20]; // [rsp+34h] [rbp-14h] BYREF
  int v11; // [rsp+68h] [rbp+20h] BYREF

  v4 = HampPkgFindInManager(a1, a2);
  if ( v4 )
  {
    if ( !a3 )
    {
      v11 = 4;
      NtQueryWnfStateData(&SystemStateChangedWnfName, 0LL, 0LL, v10, v9, &v11);
      v5 = 0LL;
      for ( i = v4; ; i = *(struct _HAM_RC_TREE_NODE **)(*((_QWORD *)v8 + 99) + 88LL) )
      {
        v7 = HampHostEnumerateHostsInNode(i, 3, v5);
        v8 = v7;
        if ( !v7 )
          break;
        HampHostAmbientStateChanged(v7, (__int64)v9, 8u);
        v5 = (__int64)v8;
      }
    }
    CemRcObjectDereference(v4);
  }
}
