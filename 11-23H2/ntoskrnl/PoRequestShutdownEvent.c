/*
 * XREFs of PoRequestShutdownEvent @ 0x14082B900
 * Callers:
 *     SepRmCommandServerThread @ 0x14082B780 (SepRmCommandServerThread.c)
 * Callees:
 *     PopRequestShutdownWait @ 0x14082B944 (PopRequestShutdownWait.c)
 */

NTSTATUS __stdcall PoRequestShutdownEvent(PVOID *Event)
{
  NTSTATUS result; // eax

  if ( Event )
    *Event = 0LL;
  result = PopRequestShutdownWait(KeGetCurrentThread());
  if ( result >= 0 )
  {
    if ( Event )
      *Event = &PopShutdownEvent;
    return 0;
  }
  return result;
}
