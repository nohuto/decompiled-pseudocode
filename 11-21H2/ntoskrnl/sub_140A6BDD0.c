/*
 * XREFs of sub_140A6BDD0 @ 0x140A6BDD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     InbvAcquireDisplayOwnership @ 0x140550B40 (InbvAcquireDisplayOwnership.c)
 *     sub_14064D474 @ 0x14064D474 (sub_14064D474.c)
 */

void __fastcall __noreturn sub_140A6BDD0(__int64 a1, __int64 a2)
{
  _disable();
  if ( !*((_DWORD *)KeGetCurrentPrcb() + 9) )
  {
    InbvAcquireDisplayOwnership(a1, a2);
    sub_14064D474();
  }
  while ( 1 )
    sub_14042A5E0(a1, a2);
}
