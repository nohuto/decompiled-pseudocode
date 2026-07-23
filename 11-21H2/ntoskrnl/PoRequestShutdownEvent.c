/*
 * XREFs of PoRequestShutdownEvent @ 0x14083B7D0
 * Callers:
 *     sub_14083B300 @ 0x14083B300 (sub_14083B300.c)
 * Callees:
 *     sub_14083B814 @ 0x14083B814 (sub_14083B814.c)
 */

NTSTATUS __stdcall PoRequestShutdownEvent(PVOID *Event)
{
  NTSTATUS result; // eax

  if ( Event )
    *Event = 0LL;
  result = sub_14083B814(KeGetCurrentThread());
  if ( result >= 0 )
  {
    if ( Event )
      *Event = &stru_140C23960;
    return 0;
  }
  return result;
}
