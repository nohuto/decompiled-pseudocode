/*
 * XREFs of ?HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x18007E770
 * Callers:
 *     ?HampPdcEnterDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18007E5BC (-HampPdcEnterDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampPdcEnterPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18007E63C (-HampPdcEnterPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampPdcExitDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x18007E6A4 (-HampPdcExitDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18007E714 (-HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 * Callees:
 *     ?HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18001C548 (-HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18001C580 (-HampManagerReleaseLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001C5B4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001D6A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180023510 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x180041F00 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?ArManagerUpdateCsState@@YAXPEAT_HAM_PDC_STATE_UPDATE@@@Z @ 0x18004B2B4 (-ArManagerUpdateCsState@@YAXPEAT_HAM_PDC_STATE_UPDATE@@@Z.c)
 *     ?HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18005558E (-HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 */

void __fastcall HampPdcNotifyCsState(struct _HOST_ACTIVITY_MANAGER **a1, int a2)
{
  struct _HOST_ACTIVITY_MANAGER *v4; // rcx
  __int64 v5; // rdx
  struct _RM_HAM_ACTIVITY_HOST *i; // rax
  struct _RM_HAM_ACTIVITY_HOST *v7; // rbx
  char v8; // [rsp+38h] [rbp+10h] BYREF

  HampManagerAcquireLockShared(*a1);
  v4 = *a1;
  LOBYTE(v5) = *((_DWORD *)a1 + 28) != 0 ? 2 : 0;
  v8 = v5 | v8 & 0xFC | (*((_DWORD *)a1 + 27) != 0);
  HampManagerReleaseLockShared(v4, v5);
  ArManagerUpdateCsState((union _HAM_PDC_STATE_UPDATE *)&v8);
  if ( a2 )
  {
    for ( i = HampHostEnumerateHostsInNode((struct _HOST_ACTIVITY_MANAGER *)((char *)*a1 + 352), 0, 0LL);
          ;
          i = HampManagerGetNextHost(v7) )
    {
      v7 = i;
      if ( !i )
        break;
      HampHostAcquireLockExclusiveEx(i, 0);
      HampHostCheckQueueStateWorker(v7, 0);
      HampHostReleaseLockExclusiveEx(v7);
    }
  }
}
