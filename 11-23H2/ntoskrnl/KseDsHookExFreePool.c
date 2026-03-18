/*
 * XREFs of KseDsHookExFreePool @ 0x1405813A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     KsepDsEventPoolFree @ 0x1405820DC (KsepDsEventPoolFree.c)
 */

__int64 __fastcall KseDsHookExFreePool(__int64 a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  ((void (*)(void))qword_140C06FE8)();
  return KsepDsEventPoolFree(a1, retaddr, 1701736270LL);
}
