/*
 * XREFs of CleanupResources @ 0x1C00522CC
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00C64AC (xxxDestroyThreadInfo.c)
 * Callees:
 *     CleanupGDI @ 0x1C00514B8 (CleanupGDI.c)
 *     ApiSetEditionUnloadCursorsAndIcons @ 0x1C0052368 (ApiSetEditionUnloadCursorsAndIcons.c)
 *     CleanupPowerRequestList @ 0x1C007E690 (CleanupPowerRequestList.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

PVOID CleanupResources()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 i; // rbx
  __int64 v5; // rcx

  gdwHydraHint |= 0x20000u;
  gbCleanedUpResources = 1;
  CleanupPowerRequestList();
  for ( i = *(_QWORD *)(PsGetCurrentProcessWin32Process(v1, v0, v2, v3) + 320); i; i = *(_QWORD *)(i + 664) )
  {
    v5 = *(_QWORD *)(i + 432);
    if ( v5 )
    {
      if ( qword_1C029BE38 )
        qword_1C029BE38(v5, 0LL);
    }
  }
  ApiSetEditionUnloadCursorsAndIcons();
  if ( qword_1C029C828 && (int)qword_1C029C828() >= 0 && qword_1C029C830 )
    qword_1C029C830();
  return CleanupGDI();
}
