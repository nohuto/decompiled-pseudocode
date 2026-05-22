/*
 * XREFs of ?SetDropInputForCurrentSession@ActivationContext@@UEAAX_N@Z @ 0x180031310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ActivationContext::SetDropInputForCurrentSession(ActivationContext *this, char a2)
{
  *((_BYTE *)this + 68) = a2;
}
