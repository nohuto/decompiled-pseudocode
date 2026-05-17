/*
 * XREFs of strcpy @ 0x1800936D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__cdecl strcpy(char *Destination, const char *Source)
{
  return (char *)__entry_from_strcat_in_strcpy(Destination, Source);
}
