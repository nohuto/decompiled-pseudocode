/*
 * XREFs of DbgkInitialize @ 0x140B524F0
 * Callers:
 *     Phase1InitializationDiscard @ 0x140B4FFBC (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     DbgkpInitializePhase0 @ 0x140B4FD94 (DbgkpInitializePhase0.c)
 *     DbgkpInitializePhase1 @ 0x140B4FEDC (DbgkpInitializePhase1.c)
 */

void DbgkInitialize()
{
  if ( (_DWORD)InitializationPhase )
  {
    if ( (_DWORD)InitializationPhase != 1 )
      KeBugCheckEx(0x33u, 3uLL, (unsigned int)InitializationPhase, 0LL, 0LL);
    DbgkpInitializePhase1();
  }
  else
  {
    DbgkpInitializePhase0();
  }
}
