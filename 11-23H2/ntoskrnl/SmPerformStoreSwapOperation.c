/*
 * XREFs of SmPerformStoreSwapOperation @ 0x1405CD6BC
 * Callers:
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14020037C (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1405C1320 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 * Callees:
 *     MmOutSwapVirtualAddresses @ 0x140652C4C (MmOutSwapVirtualAddresses.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1407DEA50 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     MmInSwapVirtualAddresses @ 0x140A43460 (MmInSwapVirtualAddresses.c)
 */

__int64 __fastcall SmPerformStoreSwapOperation(int a1, void *a2)
{
  bool v3; // zf
  struct _KPROCESS *Process; // rcx

  if ( a1 == 3 )
  {
    SC_ENV::Free(a2);
    return 0LL;
  }
  else
  {
    v3 = a1 == 2;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( v3 )
      return MmInSwapVirtualAddresses(Process, a2);
    else
      return MmOutSwapVirtualAddresses(Process);
  }
}
