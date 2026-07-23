/*
 * XREFs of KseDsHookExFreePool @ 0x140581890
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     KsepDsEventPoolFree @ 0x1405825CC (KsepDsEventPoolFree.c)
 */

__int64 __fastcall KseDsHookExFreePool(__int64 a1)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  ((void (*)(void))qword_140C06FD8)();
  return KsepDsEventPoolFree(a1, retaddr, 1701736270LL);
}
