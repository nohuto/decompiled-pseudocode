/*
 * XREFs of ??$make_unique_nothrow@VNdisPoll@@AEAPEAXAEAPEAXAEBQ6AXPEAXPEAU_NDIS_POLL_NOTIFICATION@@@ZAEBQ6AX0PEAU_NDIS_POLL_DATA@@@Z@wil@@YA?AV?$unique_ptr@VNdisPoll@@U?$default_delete@VNdisPoll@@@wistd@@@wistd@@AEAPEAX0AEBQ6AXPEAXPEAU_NDIS_POLL_NOTIFICATION@@@ZAEBQ6AX1PEAU_NDIS_POLL_DATA@@@Z@Z @ 0x1C00C5024
 * Callers:
 *     NdisRegisterPoll @ 0x1C0140730 (NdisRegisterPoll.c)
 * Callees:
 *     ??0NdisPoll@@QEAA@PEAX0P6AX0PEAU_NDIS_POLL_NOTIFICATION@@@ZP6AX0PEAU_NDIS_POLL_DATA@@@Z@Z @ 0x1C0140A04 (--0NdisPoll@@QEAA@PEAX0P6AX0PEAU_NDIS_POLL_NOTIFICATION@@@ZP6AX0PEAU_NDIS_POLL_DATA@@@Z@Z.c)
 */

NdisPoll **__fastcall wil::make_unique_nothrow<NdisPoll,void * &,void * &,void (*const &)(void *,_NDIS_POLL_NOTIFICATION *),void (*const &)(void *,_NDIS_POLL_DATA *)>(
        NdisPoll **a1,
        void **a2,
        void **a3,
        void (**a4)(void *, struct _NDIS_POLL_NOTIFICATION *),
        void (**a5)(void *, struct _NDIS_POLL_DATA *))
{
  NdisPoll *PoolWithTag; // rcx
  NdisPoll *v10; // rax

  PoolWithTag = (NdisPoll *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x260uLL, 0x78744345u);
  v10 = 0LL;
  if ( PoolWithTag )
    v10 = NdisPoll::NdisPoll(PoolWithTag, *a2, *a3, *a4, *a5);
  *a1 = v10;
  return a1;
}
