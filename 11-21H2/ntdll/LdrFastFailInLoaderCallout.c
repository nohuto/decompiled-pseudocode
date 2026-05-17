/*
 * XREFs of LdrFastFailInLoaderCallout @ 0x18008C7D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _TEB *LdrFastFailInLoaderCallout()
{
  struct _TEB *result; // rax

  result = NtCurrentTeb();
  if ( (void *)qword_180174370 == result->ClientId.UniqueThread || LdrpProcessInitialized < 2 )
    __fastfail(0x17u);
  return result;
}
