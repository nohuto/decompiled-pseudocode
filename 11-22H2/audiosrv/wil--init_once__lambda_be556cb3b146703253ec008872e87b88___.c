/*
 * XREFs of wil::init_once__lambda_be556cb3b146703253ec008872e87b88___ @ 0x1800730E8
 * Callers:
 *     ?GetEffectsFromMFXInstantiatedForDiscovery@CSharedStreamGroupProxy@@UEAAJAEAV?$vector@UAUDIO_EFFECT@@V?$allocator@UAUDIO_EFFECT@@@std@@@std@@@Z @ 0x18000BB20 (-GetEffectsFromMFXInstantiatedForDiscovery@CSharedStreamGroupProxy@@UEAAJAEAV-$vector@UAUDIO_EFF.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PopulateMfxsForEffectsDiscovery@CSharedStreamGroupProxy@@AEAAJXZ @ 0x18004B2E0 (-PopulateMfxsForEffectsDiscovery@CSharedStreamGroupProxy@@AEAAJXZ.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E902C (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall wil::init_once__lambda_be556cb3b146703253ec008872e87b88___(
        union _RTL_RUN_ONCE *a1,
        CSharedStreamGroupProxy *this)
{
  void *v4; // rdx
  unsigned int v5; // r8d
  const char *v6; // r9
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  WINBOOL fPending; // [rsp+50h] [rbp+18h] BYREF

  fPending = 0;
  if ( !InitOnceBeginInitialize(a1, 0, &fPending, 0LL) )
    wil::details::in1diag3::_Throw_GetLastError(retaddr, v4, v5, v6);
  if ( !fPending )
    return 0;
  v7 = CSharedStreamGroupProxy::PopulateMfxsForEffectsDiscovery(this);
  if ( v7 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x675,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v7);
  InitOnceComplete(a1, 0, 0LL);
  return 1;
}
