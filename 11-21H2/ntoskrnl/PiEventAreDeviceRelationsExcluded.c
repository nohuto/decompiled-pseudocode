/*
 * XREFs of PiEventAreDeviceRelationsExcluded @ 0x1407654EC
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1407655BC (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     <none>
 */

char __fastcall PiEventAreDeviceRelationsExcluded(int a1)
{
  char result; // al

  result = 1;
  if ( a1 <= 1 || a1 == 4 || a1 >= 7 )
    return 0;
  return result;
}
