/*
 * XREFs of InbvResetDisplay @ 0x14054ED20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

char InbvResetDisplay()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C6AB58 && (v0 = *(__int64 (**)(void))(qword_140C6AB58 + 24)) != 0LL )
    return v0();
  else
    return 0;
}
