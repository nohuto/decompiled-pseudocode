/*
 * XREFs of ?DestroyUnlockedCursorIfSupported@@YAXPEAX@Z @ 0x1C00B6800
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DestroyUnlockedCursorIfSupported(void *a1)
{
  if ( qword_1C029C498 && (int)qword_1C029C498() >= 0 )
  {
    if ( qword_1C029C4A0 )
      qword_1C029C4A0(a1);
  }
}
