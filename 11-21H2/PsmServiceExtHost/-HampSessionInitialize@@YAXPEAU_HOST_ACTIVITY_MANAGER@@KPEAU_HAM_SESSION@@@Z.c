/*
 * XREFs of ?HampSessionInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_SESSION@@@Z @ 0x180045704
 * Callers:
 *     ?HampSessionCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x1800452D8 (-HampSessionCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z.c)
 * Callees:
 *     ?HampSystemEdpIsManaged@@YAKXZ @ 0x1800457A8 (-HampSystemEdpIsManaged@@YAKXZ.c)
 *     ?HampSystemCdplIsManaged@@YAKXZ @ 0x180045880 (-HampSystemCdplIsManaged@@YAKXZ.c)
 *     ?HamRcNodeInitializeFromRoot@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_ROOT@@PEAU_HAM_RC_TREE_NODE@@@Z @ 0x180045A28 (-HamRcNodeInitializeFromRoot@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_ROOT@@PEAU_HAM_RC_TR.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 */

void __fastcall HampSessionInitialize(struct _HOST_ACTIVITY_MANAGER *a1, int a2, struct _HAM_SESSION *a3)
{
  int v6; // ebp

  memset_0(a3, 0, 0x98uLL);
  HamRcNodeInitializeFromRoot(
    (void (*)(struct _CEM_RC_OBJECT *))HampUserDestroy,
    (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 128),
    a3);
  *((_OWORD *)a3 + 6) = 0LL;
  RtlInitializeSRWLock((char *)a3 + 96);
  v6 = 0;
  *((_DWORD *)a3 + 26) = 0;
  *((_DWORD *)a3 + 22) = a2;
  if ( HampSystemCdplIsManaged() || HampSystemEdpIsManaged() )
    v6 = 1;
  *((_DWORD *)a3 + 36) &= ~1u;
  *((_DWORD *)a3 + 36) |= v6;
}
