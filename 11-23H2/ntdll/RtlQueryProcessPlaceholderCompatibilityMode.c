/*
 * XREFs of RtlQueryProcessPlaceholderCompatibilityMode @ 0x18010D590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char RtlQueryProcessPlaceholderCompatibilityMode()
{
  struct _PEB *v0; // rax

  v0 = NtCurrentPeb();
  if ( v0 )
    return v0->PlaceholderCompatibilityMode;
  else
    return -3;
}
