/*
 * XREFs of strcpy @ 0x180093ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__cdecl strcpy(char *Destination, const char *Source)
{
  return (char *)__entry_from_strcat_in_strcpy(Destination, Source);
}
