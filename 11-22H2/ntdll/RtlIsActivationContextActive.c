/*
 * XREFs of RtlIsActivationContextActive @ 0x1800EA1D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall RtlIsActivationContextActive(struct _ACTIVATION_CONTEXT *a1)
{
  _RTL_ACTIVATION_CONTEXT_STACK_FRAME *i; // rax

  for ( i = NtCurrentTeb()->ActivationContextStackPointer->ActiveFrame; i; i = i->Previous )
  {
    if ( i->ActivationContext == a1 )
    {
      LOBYTE(i) = 1;
      return (char)i;
    }
  }
  return (char)i;
}
