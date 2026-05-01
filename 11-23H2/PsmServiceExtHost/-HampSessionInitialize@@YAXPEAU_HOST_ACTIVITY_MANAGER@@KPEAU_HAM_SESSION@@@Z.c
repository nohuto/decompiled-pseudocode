/*
 * XREFs of ?HampSessionInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KPEAU_HAM_SESSION@@@Z @ 0x180041720
 * Callers:
 *     ?HampSessionCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z @ 0x180041310 (-HampSessionCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAPEAU_HAM_SESSION@@@Z.c)
 * Callees:
 *     ?HampSystemCdplIsManaged@@YAKXZ @ 0x1800417C8 (-HampSystemCdplIsManaged@@YAKXZ.c)
 *     ?HampSystemEdpIsManaged@@YAKXZ @ 0x1800417F4 (-HampSystemEdpIsManaged@@YAKXZ.c)
 *     ?HamRcNodeInitializeFromRoot@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_ROOT@@PEAU_HAM_RC_TREE_NODE@@@Z @ 0x180041A3C (-HamRcNodeInitializeFromRoot@@YAXP6AXPEAU_CEM_RC_OBJECT@@@ZPEAU_HAM_RC_TREE_ROOT@@PEAU_HAM_RC_TR.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 */

void __fastcall HampSessionInitialize(struct _HOST_ACTIVITY_MANAGER *a1, int a2, struct _HAM_SESSION *a3)
{
  int v6; // esi

  memset_0(a3, 0, 0x98uLL);
  HamRcNodeInitializeFromRoot(
    (void (*)(struct _CEM_RC_OBJECT *))HampUserDestroy,
    (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 352),
    a3);
  *((_OWORD *)a3 + 6) = 0LL;
  RtlInitializeSRWLock((char *)a3 + 96);
  v6 = 0;
  *((_DWORD *)a3 + 26) = 0;
  *((_DWORD *)a3 + 22) = a2;
  if ( HampSystemCdplIsManaged() || HampSystemEdpIsManaged() )
    v6 = 1;
  *((_DWORD *)a3 + 36) = v6 | *((_DWORD *)a3 + 36) & 0xFFFFFFFE;
}
