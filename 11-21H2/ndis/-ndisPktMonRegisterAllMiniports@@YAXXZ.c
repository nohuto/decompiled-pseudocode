/*
 * XREFs of ?ndisPktMonRegisterAllMiniports@@YAXXZ @ 0x1C00355E4
 * Callers:
 *     ?ndisPktMonRegisterComponentsCallback@@YAXXZ @ 0x1C008C920 (-ndisPktMonRegisterComponentsCallback@@YAXXZ.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0005F20 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C00106B4 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisIsMiniportReady@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00658D4 (-ndisIsMiniportReady@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPktMonMiniportRegister@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01129CC (-ndisPktMonMiniportRegister@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void ndisPktMonRegisterAllMiniports(void)
{
  KIRQL v0; // al
  struct _NDIS_MINIPORT_BLOCK *v1; // rbx
  KIRQL v2; // di
  PVOID *Pool2; // rax
  PVOID *v4; // rdx
  _QWORD *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rbx
  PVOID P; // [rsp+20h] [rbp-10h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-8h]

  p_P = &P;
  P = &P;
  v0 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  v1 = ndisMiniportList;
  v2 = v0;
  while ( v1 )
  {
    if ( ndisIsMiniportReady(v1) && ndisReferenceMiniport(v1, 0x55u) )
    {
      Pool2 = (PVOID *)ExAllocatePool2(64LL, 24LL, 1836074062);
      if ( Pool2 )
      {
        Pool2[2] = v1;
        v4 = p_P;
        if ( *p_P != &P )
LABEL_17:
          __fastfail(3u);
        Pool2[1] = p_P;
        *Pool2 = &P;
        *v4 = Pool2;
        p_P = Pool2;
      }
      else
      {
        ndisDereferenceMiniport(v1, 0x55u);
      }
    }
    v1 = v1->NextGlobalMiniport;
  }
  KeReleaseSpinLock(&ndisMiniportListLock, v2);
  while ( 1 )
  {
    v5 = P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_17;
    v6 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_17;
    P = *(PVOID *)P;
    *(_QWORD *)(v6 + 8) = &P;
    v7 = v5[2];
    ExFreePoolWithTag(v5, 0);
    if ( ndisIsMiniportReady((struct _NDIS_MINIPORT_BLOCK *)v7) )
    {
      *(_OWORD *)(v7 + 5808) = 0LL;
      *(_OWORD *)(v7 + 5824) = 0LL;
      *(_OWORD *)(v7 + 5840) = 0LL;
      *(_QWORD *)(v7 + 5856) = 0LL;
      ndisPktMonMiniportRegister((struct _NDIS_MINIPORT_BLOCK *)v7);
    }
    ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v7, 0x55u);
  }
}
