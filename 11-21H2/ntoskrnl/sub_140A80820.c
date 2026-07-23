/*
 * XREFs of sub_140A80820 @ 0x140A80820
 * Callers:
 *     sub_1402B59D0 @ 0x1402B59D0 (sub_1402B59D0.c)
 *     IoFreeIrp @ 0x140348610 (IoFreeIrp.c)
 * Callees:
 *     sub_140348640 @ 0x140348640 (sub_140348640.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 *     sub_140A8CEB8 @ 0x140A8CEB8 (sub_140A8CEB8.c)
 */

void __fastcall sub_140A80820(ULONG_PTR BugCheckParameter1)
{
  if ( (dword_140C29FC0 & 0x10) != 0 && !dword_140D018F8 )
  {
    if ( *(_WORD *)BugCheckParameter1 != 6 )
      sub_140A8C924(0xC9u, (unsigned int)(dword_140D018F8 + 1), BugCheckParameter1, 0LL, 0LL);
    if ( *(_QWORD *)(BugCheckParameter1 + 32) != BugCheckParameter1 + 32 )
      sub_140A8C924(0xC9u, 2uLL, BugCheckParameter1, 0LL, 0LL);
  }
  if ( !(unsigned int)sub_140A8CEB8((PVOID)BugCheckParameter1) )
    sub_140348640(BugCheckParameter1);
}
