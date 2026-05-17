/*
 * XREFs of AlpcGetMessageAttribute @ 0x180072800
 * Callers:
 *     <none>
 * Callees:
 *     AlpcGetHeaderSize @ 0x180072840 (AlpcGetHeaderSize.c)
 */

char *__fastcall AlpcGetMessageAttribute(_DWORD *a1, int a2)
{
  if ( (a2 & *a1) == 0 || ((a2 - 1) & a2) != 0 )
    return 0LL;
  else
    return (char *)a1 + (unsigned int)AlpcGetHeaderSize(*a1 & (unsigned int)(-2 * a2));
}
