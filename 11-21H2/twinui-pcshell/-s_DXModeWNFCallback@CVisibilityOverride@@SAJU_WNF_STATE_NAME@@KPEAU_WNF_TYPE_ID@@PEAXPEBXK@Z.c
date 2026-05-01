/*
 * XREFs of ?s_DXModeWNFCallback@CVisibilityOverride@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18009F020
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_ProcessOverride@CVisibilityOverride@@AEAAXXZ @ 0x1800A0304 (-_ProcessOverride@CVisibilityOverride@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVisibilityOverride::s_DXModeWNFCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        RTL_SRWLOCK *a4)
{
  RTL_SRWLOCK *v5; // rbx
  RTL_SRWLOCK *v7; // [rsp+48h] [rbp+20h] BYREF

  v5 = a4 + 9;
  AcquireSRWLockExclusive(a4 + 9);
  v7 = v5;
  CVisibilityOverride::_ProcessOverride((CVisibilityOverride *)a4);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)&v7);
  return 0LL;
}
